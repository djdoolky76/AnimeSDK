#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKBMBKLIIFL;
namespace System { class Object; }

#define PKBMBKLIIFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF59FB0)
#define PKBMBKLIIFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF59FF0)
#define PKBMBKLIIFL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF5A000)

inline static constexpr unsigned int PKBMBKLIIFL___c_TypeDefinitionIndex = 27863;

	class PKBMBKLIIFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x392D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKBMBKLIIFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL___C_CTOR_OFFSET))(this);
		}

		::PKBMBKLIIFL* __cctor_b__23_0()
		{
			return ((::PKBMBKLIIFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

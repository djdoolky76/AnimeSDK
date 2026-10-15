#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDLCMMOPKNG;
namespace System { class Object; }

#define LDLCMMOPKNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FD1B0)
#define LDLCMMOPKNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FD1E0)
#define LDLCMMOPKNG___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E8FD1F0)

inline static constexpr unsigned int LDLCMMOPKNG___c_TypeDefinitionIndex = 28134;

	class LDLCMMOPKNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x350B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDLCMMOPKNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCMMOPKNG___C_CTOR_OFFSET))(this);
		}

		::LDLCMMOPKNG* __cctor_b__53_0()
		{
			return ((::LDLCMMOPKNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCMMOPKNG___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};

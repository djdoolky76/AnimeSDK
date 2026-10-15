#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHEHACPKKBL;
namespace System { class Object; }

#define JHEHACPKKBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E717380)
#define JHEHACPKKBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7173C0)
#define JHEHACPKKBL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7173D0)

inline static constexpr unsigned int JHEHACPKKBL___c_TypeDefinitionIndex = 30670;

	class JHEHACPKKBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHEHACPKKBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL___C_CTOR_OFFSET))(this);
		}

		::JHEHACPKKBL* __cctor_b__28_0()
		{
			return ((::JHEHACPKKBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

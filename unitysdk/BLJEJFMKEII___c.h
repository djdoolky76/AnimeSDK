#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLJEJFMKEII;
namespace System { class Object; }

#define BLJEJFMKEII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF381D0)
#define BLJEJFMKEII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF38200)
#define BLJEJFMKEII___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1DF38210)

inline static constexpr unsigned int BLJEJFMKEII___c_TypeDefinitionIndex = 25567;

	class BLJEJFMKEII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLJEJFMKEII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJEJFMKEII___C_CTOR_OFFSET))(this);
		}

		::BLJEJFMKEII* __cctor_b__32_0()
		{
			return ((::BLJEJFMKEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJEJFMKEII___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};

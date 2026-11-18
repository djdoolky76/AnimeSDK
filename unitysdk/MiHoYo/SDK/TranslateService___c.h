#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BabelfishConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TRANSLATESERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F973040)
#define MIHOYO_SDK_TRANSLATESERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F973080)
#define MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__39_0_OFFSET UNITYSDK_OFFSET(0x1F973090)
#define MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__39_1_OFFSET UNITYSDK_OFFSET(0x1F973100)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TranslateService___c_TypeDefinitionIndex = 35607;

	class TranslateService___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TranslateService___c_TypeDefinitionIndex)->GetStaticField(0x2ACB0);
		}
		static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet___9__39_1()
		{
			return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TranslateService___c_TypeDefinitionIndex)->GetStaticField(0x2ACB8);
		}
		static ::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>** StaticGet___9__39_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>**)Il2CppClass::FromTypeDefinitionIndex(TranslateService___c_TypeDefinitionIndex)->GetStaticField(0x2ACC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__39_0(::MiHoYo::SDK::BabelfishConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::BabelfishConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__39_0_OFFSET))(this, config);
		}

		::System::Void _Init_b__39_1(::System::Int32 errorCode, ::System::String* errorMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRANSLATESERVICE___C__INIT_B__39_1_OFFSET))(this, errorCode, errorMsg);
		}
	};
}

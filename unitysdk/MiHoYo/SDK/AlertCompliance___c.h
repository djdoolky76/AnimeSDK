#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_ALERTCOMPLIANCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B449270)
#define MIHOYO_SDK_ALERTCOMPLIANCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4492B0)
#define MIHOYO_SDK_ALERTCOMPLIANCE___C__SHOW_B__23_1_OFFSET UNITYSDK_OFFSET(0x1B4492C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AlertCompliance___c_TypeDefinitionIndex = 8003;

	class AlertCompliance___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x37780);
		}

		static ::System::Action** StaticGet___9__23_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x37788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE___C__SHOW_B__23_1_OFFSET))(this);
		}

	};
}

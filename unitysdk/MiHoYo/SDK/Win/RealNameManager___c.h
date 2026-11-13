#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19606B30)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19606B70)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTMAIL_B__38_4_OFFSET UNITYSDK_OFFSET(0x19606BF0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTPHONE_B__35_4_OFFSET UNITYSDK_OFFSET(0x19606B80)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c_TypeDefinitionIndex = 9366;

	class RealNameManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__35_4()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x205E0);
		}

		static ::System::Action** StaticGet___9__38_4()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x205E8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x205F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhone_b__35_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTPHONE_B__35_4_OFFSET))(this);
		}

		::System::Void _ShowGrantMail_b__38_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTMAIL_B__38_4_OFFSET))(this);
		}

	};
}

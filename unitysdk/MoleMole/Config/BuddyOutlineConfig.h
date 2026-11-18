#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyOutlineCampType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class BuddyCampOutlineConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_BUDDYOUTLINECONFIG_GET_SHOWOUTLINE_OFFSET UNITYSDK_OFFSET(0x11E82A80)
#define MOLEMOLE_CONFIG_BUDDYOUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11E82AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyOutlineConfig_TypeDefinitionIndex = 48180;

	class BuddyOutlineConfig : public ::System::Object
	{
	public:
		static ::MoleMole::Config::BuddyOutlineConfig** StaticGet_Ins()
		{
			return (::MoleMole::Config::BuddyOutlineConfig**)Il2CppClass::FromTypeDefinitionIndex(BuddyOutlineConfig_TypeDefinitionIndex)->GetStaticField(0x48600);
		}
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyOutlineCampType, ::MoleMole::Config::BuddyCampOutlineConfig*>* CampConfigs; // 0x10
		::System::Boolean FillInner; // 0x18
		::System::Boolean FillInnerBehindScene; // 0x19
		::System::Boolean DisableOutline; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single OutlineThickness; // 0x1C
		::UnityEngine::Color InnerColor; // 0x20
		::System::Single InnerColorIntensity; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYOUTLINECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowOutline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYOUTLINECONFIG_GET_SHOWOUTLINE_OFFSET))(this);
		}
	};
}

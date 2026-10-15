#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Editor { class SkillDecoAssetConfig; }
namespace RPG::Editor { class SkillLineAssetConfig; }
namespace RPG::Editor { class SkillPointAssetConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_SKILLASSETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE4ADAD0)
#define RPG_EDITOR_SKILLASSETCONFIG_HPHIBKHKKBL_OFFSET UNITYSDK_OFFSET(0xE4AD9D0)
#define RPG_EDITOR_SKILLASSETCONFIG_IHEPDJJJOBA_OFFSET UNITYSDK_OFFSET(0xE4AD190)
#define RPG_EDITOR_SKILLASSETCONFIG_NCLDGKBDNHM_OFFSET UNITYSDK_OFFSET(0xE4AD2A0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillAssetConfig_TypeDefinitionIndex = 52035;

	class SkillAssetConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Editor::SkillPointAssetConfig*>* SkillPointAssetConfig; // 0x10
		::System::Collections::Generic::List_1<::RPG::Editor::SkillLineAssetConfig*>* SkillLineAssetConfig; // 0x18
		::System::Collections::Generic::List_1<::RPG::Editor::SkillDecoAssetConfig*>* SkillDecoAssetConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void IHEPDJJJOBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_IHEPDJJJOBA_OFFSET))(this);
		}

		::System::Void NCLDGKBDNHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_NCLDGKBDNHM_OFFSET))(this);
		}

		::System::Void HPHIBKHKKBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_HPHIBKHKKBL_OFFSET))(this);
		}

	};
}

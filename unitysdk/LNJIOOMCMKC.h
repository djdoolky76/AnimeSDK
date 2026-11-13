#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }

#define LNJIOOMCMKC_AIBHMGMBHCB_OFFSET UNITYSDK_OFFSET(0x1AC226F0)
#define LNJIOOMCMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC22660)
#define LNJIOOMCMKC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC226B0)
#define LNJIOOMCMKC_HNJBDFHEAAI_OFFSET UNITYSDK_OFFSET(0x1AC22B30)
#define LNJIOOMCMKC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AC22670)
#define LNJIOOMCMKC_JOLFLGKGKPI_OFFSET UNITYSDK_OFFSET(0x1AC228A0)

inline static constexpr unsigned int LNJIOOMCMKC_TypeDefinitionIndex = 37460;

	class LNJIOOMCMKC : public ::System::Object
	{
	public:
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x10
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x18
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + LNJIOOMCMKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJIOOMCMKC_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJIOOMCMKC_EXECUTE_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* AIBHMGMBHCB(::RPG::GameCore::DiceCombatSkillPreviewInvokeType a1)
		{
			return ((::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*(*)(::PVOID, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + LNJIOOMCMKC_AIBHMGMBHCB_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* HNJBDFHEAAI()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJIOOMCMKC_HNJBDFHEAAI_OFFSET))(this);
		}

		::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* JOLFLGKGKPI()
		{
			return ((::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNJIOOMCMKC_JOLFLGKGKPI_OFFSET))(this);
		}

	};

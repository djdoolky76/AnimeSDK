#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLEMFNFDGPD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EItemType.h"

class BPHGNMNLLHF;
class HGAJKHIMKJP;
namespace MoleMole { class UIGeneralTokenContext; }
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace MoleMole { class UITokenShowConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEINFODATACONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x17BE2E50)
#define MOLEMOLE_UIROLEINFODATACONTEXT_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x17BE2C50)
#define MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISFRIENDPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x17BE2BF0)
#define MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x17BE2B80)
#define MOLEMOLE_UIROLEINFODATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE2F10)
#define MOLEMOLE_UIROLEINFODATACONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x17BE2F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoDataContext_TypeDefinitionIndex = 39931;

	class UIRoleInfoDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HGAJKHIMKJP* CurItemData; // 0x28
		::BPHGNMNLLHF* CurAvatarData; // 0x30
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x38
		::System::Int32 CloseIndex; // 0x40
		::System::Single BackgroundPicPos; // 0x44
		::System::Int32 SlotIndex; // 0x48
		::System::Int32 curSelectedSkillIndex; // 0x4C
		::Share::EItemType CurItemType; // 0x50
		::System::Boolean TriggerBySwitchAvatar; // 0x52
		::System::Boolean forcePreviewMode; // 0x53
		::System::Boolean forceFriendPreviewMode; // 0x54
		::System::Boolean IsNeedFadeInDetail; // 0x55
		::System::Byte _padding0[0x2];
		::BLEMFNFDGPD _usage; // 0x58
		::System::Byte _padding1[0x4];
		::System::UInt64 ForceSelectWeaponUid; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISPREVIEWMODE_OFFSET))(this);
		}

		::System::Boolean get_IsFriendPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISFRIENDPREVIEWMODE_OFFSET))(this);
		}

		::MoleMole::UIGeneralTokenContext* Construct(::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* showList)
		{
			return ((::MoleMole::UIGeneralTokenContext*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_CONSTRUCT_OFFSET))(this, showList);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}

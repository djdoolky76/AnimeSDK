#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLEMFNFDGPD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;
class KJIEDDLNJFC;
namespace MoleMole { class UIGeneralTokenContext; }
namespace MoleMole { class UITokenShowConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEINFOPAGECONTEXT_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1900F400)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1900F790)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageContext_TypeDefinitionIndex = 61277;

	class UIRoleInfoPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::KJIEDDLNJFC*>* _allItems; // 0x28
		::BPHGNMNLLHF* avatarData; // 0x30
		::System::Int32 forceSelectSkillType; // 0x38
		::System::Boolean forcePreviewMode; // 0x3C
		::System::Boolean forceClickWeapon; // 0x3D
		::System::Boolean forceClickMindscape; // 0x3E
		::System::Boolean playEquipRecommendChoiceAnimation; // 0x3F
		::System::Int32 targetSubType; // 0x40
		::BLEMFNFDGPD _usage; // 0x44
		::System::Boolean forceFriendPreviewMode; // 0x48
		::System::Boolean forceClickEquip; // 0x49
		::System::Boolean forceOpenWeaponRecommend; // 0x4A
		::System::Boolean IsFadeInWithBlack; // 0x4B
		::System::Boolean forceOpenEquipRecommend; // 0x4C
		::System::Byte _padding0[0x3];
		::System::UInt64 forceSelectWeaponUid; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIGeneralTokenContext* Construct(::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* showList)
		{
			return ((::MoleMole::UIGeneralTokenContext*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT_CONSTRUCT_OFFSET))(this, showList);
		}
	};
}

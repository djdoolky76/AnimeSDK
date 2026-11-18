#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralItemTipsDialog2Context_DialogType.h"
#include "unitysdk/PKLFCIEFPNA.h"
#include "unitysdk/Share/EBattleRewardType.h"
#include "unitysdk/System/Nullable_1.h"

class EFCCPGCGLIE;
class GLEINMCDBFC;
class HGAJKHIMKJP;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT_GET_USECUSTOMITEMPACKAGETYPE_OFFSET UNITYSDK_OFFSET(0x17599E30)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17599E80)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17599F20)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17599FA0)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1759A030)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1759A0C0)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175741D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemTipsDialog2Context_TypeDefinitionIndex = 72349;

	class UIGeneralItemTipsDialog2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GLEINMCDBFC* photoItem; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* dungeonTagIds; // 0x30
		::EFCCPGCGLIE* cafeItem; // 0x38
		::System::Action* equipStateCtrlChangeAction; // 0x40
		::HGAJKHIMKJP* itemdata; // 0x48
		::System::Action_1<::System::Boolean>* OnAfterJump; // 0x50
		::System::Int32 NeedCount; // 0x58
		::System::Byte _padding0[0x4];
		::System::Int64 cafeBeginTime; // 0x60
		::System::Int32 ramenId; // 0x68
		::MoleMole::UIGeneralItemTipsDialog2Context_DialogType type; // 0x6C
		::System::Int32 spiceId; // 0x70
		::System::Nullable_1<::System::Int32> overrideCount; // 0x74
		::PKLFCIEFPNA itemPackageType; // 0x7C
		::System::Boolean checkSuibianProductState; // 0x80
		::System::Boolean disableJump; // 0x81
		::System::Nullable_1<::Share::EBattleRewardType> rewardType; // 0x82

		::System::Void _ctor(::HGAJKHIMKJP* itemdata, ::System::Boolean disableJump)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_OFFSET))(this, itemdata, disableJump);
		}

		::System::Void _ctor_1(::HGAJKHIMKJP* itemdata, ::Share::EBattleRewardType rewardType, ::System::Boolean disableJump)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*, ::Share::EBattleRewardType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_1_OFFSET))(this, itemdata, rewardType, disableJump);
		}

		::System::Void _ctor_2(::System::Collections::Generic::List_1<::System::Int32>* buffs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_2_OFFSET))(this, buffs);
		}

		::System::Void _ctor_3(::System::Int32 ramenID, ::System::Int32 spiceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_3_OFFSET))(this, ramenID, spiceID);
		}

		::System::Void _ctor_4(::EFCCPGCGLIE* cafeItem)
		{
			return ((::System::Void(*)(::PVOID, ::EFCCPGCGLIE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_4_OFFSET))(this, cafeItem);
		}

		::System::Void _ctor_5(::GLEINMCDBFC* photoItem)
		{
			return ((::System::Void(*)(::PVOID, ::GLEINMCDBFC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_5_OFFSET))(this, photoItem);
		}

		::System::Boolean get_UseCustomItemPackageType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT_GET_USECUSTOMITEMPACKAGETYPE_OFFSET))(this);
		}
	};
}

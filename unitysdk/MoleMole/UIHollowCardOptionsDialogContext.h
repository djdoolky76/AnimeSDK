#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMBIJHEIJPD.h"
#include "unitysdk/JCOOFFNNMLO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NMPKPCHPDMG.h"
#include "unitysdk/POLDGEFIPGM.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"

class ALGKMLLALFG;
class CAOJHOPPEIL;
class CKOLCOGDGEO;
class EDBLHHNLACA;
class EPABBKALJPO;
class FEGNLFMDNPB;
class HGAJKHIMKJP;
class KGBPLDNJLCL;
class KGFNKFAJDEB;
class OLHCEJBBEJF;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET UNITYSDK_OFFSET(0x199DDD90)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199DDF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogContext_TypeDefinitionIndex = 79234;

	class UIHollowCardOptionsDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KGBPLDNJLCL* pureData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cardIndexMap; // 0x30
		::System::Func_1<::System::String*>* SelectTipsInfoOverride; // 0x38
		::HGAJKHIMKJP* pureNewCard; // 0x40
		::System::Action_3<::System::Int32, ::System::Int32, ::System::Action*>* chooseAction; // 0x48
		::System::Collections::Generic::List_1<::OLHCEJBBEJF*>* RewardCards; // 0x50
		::System::Action_1<::System::Action*>* refreshAction; // 0x58
		::System::Action_2<::FEGNLFMDNPB*, ::CKOLCOGDGEO*>* onConfirm; // 0x60
		::EPABBKALJPO* ChoiceNode; // 0x68
		::System::Collections::Generic::List_1<::CAOJHOPPEIL*>* CombineCards; // 0x70
		::KGFNKFAJDEB* Config; // 0x78
		::System::Action_1<::System::Action*>* cancelAction; // 0x80
		::ALGKMLLALFG* graph; // 0x88
		::HGAJKHIMKJP* pureOldCard; // 0x90
		::EDBLHHNLACA* RefreshInfo; // 0x98
		::JCOOFFNNMLO GiveInfo; // 0xA0
		::System::Action* onGiveUp; // 0xB0
		::CMBIJHEIJPD ChoiceUIType; // 0xB8
		::System::UInt32 initialRelicUID; // 0xBC
		::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>> giveUpItem; // 0xC0
		::System::Byte _padding0[0x4];
		::POLDGEFIPGM OptionInfo; // 0xCC
		::System::Boolean ShowBottomPanel; // 0xD4
		::System::Boolean add; // 0xD5
		::System::Boolean ShowBG; // 0xD6
		::System::Boolean showCancel; // 0xD7
		::System::Boolean PlaySpecialFade; // 0xD8
		::System::Byte _padding1[0x3];
		::NMPKPCHPDMG ShowType; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean ContainsChoice(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET))(this, index);
		}
	};
}

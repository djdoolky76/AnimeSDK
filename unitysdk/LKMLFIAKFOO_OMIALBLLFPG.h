#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LKMLFIAKFOO;
class PLPHBLLCFBF;
namespace MoleMole { class UIUrbanMapTipsWidgetContext; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKMLFIAKFOO_OMIALBLLFPG_NGBAGFNNGMB_OFFSET UNITYSDK_OFFSET(0x163762A0)
#define LKMLFIAKFOO_OMIALBLLFPG_NGPFMAGAJPK_OFFSET UNITYSDK_OFFSET(0x16376340)
#define LKMLFIAKFOO_OMIALBLLFPG__CTOR_OFFSET UNITYSDK_OFFSET(0x16376290)

inline static constexpr unsigned int LKMLFIAKFOO_OMIALBLLFPG_TypeDefinitionIndex = 43590;

class LKMLFIAKFOO_OMIALBLLFPG : public ::System::Object
{
public:
	::System::Action_1<::PLPHBLLCFBF*>* DLMJCFBENGB; // 0x10
	::MoleMole::UIUrbanMapTipsWidgetContext* AAOCANGHBDG; // 0x18
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x20
	::System::UInt32 BFBCMALKEIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_OMIALBLLFPG__CTOR_OFFSET))(this);
	}

	::System::Void NGBAGFNNGMB(::PLPHBLLCFBF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PLPHBLLCFBF*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_OMIALBLLFPG_NGBAGFNNGMB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void NGPFMAGAJPK(::System::Collections::Generic::List_1<::System::UInt32>* DJLOKMMLFJC, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_OMIALBLLFPG_NGPFMAGAJPK_OFFSET))(this, DJLOKMMLFJC, LHLPLLCBMBM);
	}
};

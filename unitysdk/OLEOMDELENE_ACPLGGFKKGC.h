#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLIMBFMEECI;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLEOMDELENE_ACPLGGFKKGC_CGHMNFBEGHI_OFFSET UNITYSDK_OFFSET(0x15FEABA0)
#define OLEOMDELENE_ACPLGGFKKGC_FNDBMMABBHB_OFFSET UNITYSDK_OFFSET(0x15FEAB90)
#define OLEOMDELENE_ACPLGGFKKGC__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEAB80)

inline static constexpr unsigned int OLEOMDELENE_ACPLGGFKKGC_TypeDefinitionIndex = 61057;

class OLEOMDELENE_ACPLGGFKKGC : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LLIMBFMEECI*>* MMHMPLDIENA; // 0x18
	::System::Action* BLLNHDIDKPA; // 0x20
	::System::Int32 LGBHOFGBGHC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_ACPLGGFKKGC__CTOR_OFFSET))(this);
	}

	::System::Void FNDBMMABBHB(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OLEOMDELENE_ACPLGGFKKGC_FNDBMMABBHB_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void CGHMNFBEGHI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OLEOMDELENE_ACPLGGFKKGC_CGHMNFBEGHI_OFFSET))(this, PIIPCLCCOIG);
	}
};

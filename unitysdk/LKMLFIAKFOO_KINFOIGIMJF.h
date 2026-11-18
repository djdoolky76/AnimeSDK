#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LKMLFIAKFOO_CJDGLDEGFGG;
class PLPHBLLCFBF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKMLFIAKFOO_KINFOIGIMJF_DDDCLLKFIMF_OFFSET UNITYSDK_OFFSET(0x16C62BE0)
#define LKMLFIAKFOO_KINFOIGIMJF_DIDMKPGLOGM_OFFSET UNITYSDK_OFFSET(0x16C62410)
#define LKMLFIAKFOO_KINFOIGIMJF_MOENCOGLAID_OFFSET UNITYSDK_OFFSET(0x16C62380)
#define LKMLFIAKFOO_KINFOIGIMJF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C62370)

inline static constexpr unsigned int LKMLFIAKFOO_KINFOIGIMJF_TypeDefinitionIndex = 43592;

class LKMLFIAKFOO_KINFOIGIMJF : public ::System::Object
{
public:
	::LKMLFIAKFOO_CJDGLDEGFGG* FGBNBFHOKAA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* ELHEFOKAHIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_KINFOIGIMJF__CTOR_OFFSET))(this);
	}

	::System::Void MOENCOGLAID(::PLPHBLLCFBF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PLPHBLLCFBF*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_KINFOIGIMJF_MOENCOGLAID_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DDDCLLKFIMF(::System::Collections::Generic::List_1<::System::UInt32>* DJLOKMMLFJC, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_KINFOIGIMJF_DDDCLLKFIMF_OFFSET))(this, DJLOKMMLFJC, LHLPLLCBMBM);
	}

	::System::Void DIDMKPGLOGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_KINFOIGIMJF_DIDMKPGLOGM_OFFSET))(this);
	}
};

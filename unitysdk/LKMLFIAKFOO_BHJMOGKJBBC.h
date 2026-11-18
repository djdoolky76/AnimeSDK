#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/System/Object.h"

class LKMLFIAKFOO_FPPNOGINPKK;
class PLPHBLLCFBF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKMLFIAKFOO_BHJMOGKJBBC_MHAPLOFAFHP_OFFSET UNITYSDK_OFFSET(0x16375FB0)
#define LKMLFIAKFOO_BHJMOGKJBBC_OPGMHOHIJHE_OFFSET UNITYSDK_OFFSET(0x16376050)
#define LKMLFIAKFOO_BHJMOGKJBBC__CTOR_OFFSET UNITYSDK_OFFSET(0x16375FA0)

inline static constexpr unsigned int LKMLFIAKFOO_BHJMOGKJBBC_TypeDefinitionIndex = 43612;

class LKMLFIAKFOO_BHJMOGKJBBC : public ::System::Object
{
public:
	::DJCHCMEFPIF HNPGPDCCPEF; // 0x10
	::LKMLFIAKFOO_FPPNOGINPKK* EEMOEMFLABI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_BHJMOGKJBBC__CTOR_OFFSET))(this);
	}

	::System::Void MHAPLOFAFHP(::PLPHBLLCFBF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PLPHBLLCFBF*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_BHJMOGKJBBC_MHAPLOFAFHP_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void OPGMHOHIJHE(::System::Collections::Generic::List_1<::System::UInt32>* DJLOKMMLFJC, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_BHJMOGKJBBC_OPGMHOHIJHE_OFFSET))(this, DJLOKMMLFJC, LHLPLLCBMBM);
	}
};

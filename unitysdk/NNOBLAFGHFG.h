#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNOBLAFGHFG_EndReason.h"
#include "unitysdk/System/Object.h"
class CCEIJBFAOAI;
class FHHJMJFKIIH;
class FMOEINGLFGG;
class GAGKMDGBGFL;
class LBMCGPOLJHO;
class MNGADDFICJF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NNOBLAFGHFG_BGBPODOMABH_OFFSET UNITYSDK_OFFSET(0xBCD6F30)
#define NNOBLAFGHFG_BLBIMMMOKMK_OFFSET UNITYSDK_OFFSET(0xBCD6FB0)
#define NNOBLAFGHFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD6C00)
#define NNOBLAFGHFG_DDACBIMJOBG_OFFSET UNITYSDK_OFFSET(0xBCD7700)
#define NNOBLAFGHFG_FHGIAIPDKMD_OFFSET UNITYSDK_OFFSET(0xBCD6C10)
#define NNOBLAFGHFG_GNPHONNILGC_OFFSET UNITYSDK_OFFSET(0xBCD7770)
#define NNOBLAFGHFG_HJNJHENHGHK_OFFSET UNITYSDK_OFFSET(0xBCD73C0)
#define NNOBLAFGHFG_NBKNEOJKCPJ_OFFSET UNITYSDK_OFFSET(0xBCD6C60)

	class NNOBLAFGHFG : public ::System::Object
	{
	public:
		::GAGKMDGBGFL* MJHHLOPFDNK; // 0x10
		::FHHJMJFKIIH* CEADMKKNLDH; // 0x18
		::System::Void _ctor(::GAGKMDGBGFL* a1, ::FHHJMJFKIIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GAGKMDGBGFL*, ::FHHJMJFKIIH*))((::PBYTE)hIl2Cpp + NNOBLAFGHFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FHGIAIPDKMD(::LBMCGPOLJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBMCGPOLJHO*))((::PBYTE)hIl2Cpp + NNOBLAFGHFG_FHGIAIPDKMD_OFFSET))(this, a1);
		}

		::System::Void BGBPODOMABH(::LBMCGPOLJHO* a1, ::CCEIJBFAOAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LBMCGPOLJHO*, ::CCEIJBFAOAI*))((::PBYTE)hIl2Cpp + NNOBLAFGHFG_BGBPODOMABH_OFFSET))(this, a1, a2);
		}

		::System::Void DDACBIMJOBG(::LBMCGPOLJHO* a1, ::CCEIJBFAOAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LBMCGPOLJHO*, ::CCEIJBFAOAI*))((::PBYTE)hIl2Cpp + NNOBLAFGHFG_DDACBIMJOBG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MNGADDFICJF*>* BLBIMMMOKMK(::CCEIJBFAOAI* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MNGADDFICJF*>*(*)(::PVOID, ::CCEIJBFAOAI*))((::PBYTE)hIl2Cpp + NNOBLAFGHFG_BLBIMMMOKMK_OFFSET))(this, a1);
		}

		::System::Void HJNJHENHGHK(::LBMCGPOLJHO* a1, ::NNOBLAFGHFG_EndReason a2, ::System::Collections::Generic::IReadOnlyList_1<::MNGADDFICJF*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LBMCGPOLJHO*, ::NNOBLAFGHFG_EndReason, ::System::Collections::Generic::IReadOnlyList_1<::MNGADDFICJF*>*))((::PBYTE)hIl2Cpp + NNOBLAFGHFG_HJNJHENHGHK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBKNEOJKCPJ(::LBMCGPOLJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBMCGPOLJHO*))((::PBYTE)hIl2Cpp + NNOBLAFGHFG_NBKNEOJKCPJ_OFFSET))(this, a1);
		}

		::System::Void GNPHONNILGC(::FMOEINGLFGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMOEINGLFGG*))((::PBYTE)hIl2Cpp + NNOBLAFGHFG_GNPHONNILGC_OFFSET))(this, a1);
		}

	};

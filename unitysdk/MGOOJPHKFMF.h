#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
class BNBDNEFOKEA;
class EDJFJFMNFJE;
class LKFPICOFNDF;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MGOOJPHKFMF_BMNBBKGPDBO_OFFSET UNITYSDK_OFFSET(0xB925D40)
#define MGOOJPHKFMF_CMPNCFCJCNE_1_OFFSET UNITYSDK_OFFSET(0xB926820)
#define MGOOJPHKFMF_CMPNCFCJCNE_OFFSET UNITYSDK_OFFSET(0xB9265D0)
#define MGOOJPHKFMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB925410)
#define MGOOJPHKFMF_IFOOEPKGGAG_OFFSET UNITYSDK_OFFSET(0xB925A80)
#define MGOOJPHKFMF_IPBALKPGCIP_OFFSET UNITYSDK_OFFSET(0xB925E20)
#define MGOOJPHKFMF_JOENLGFDJAM_OFFSET UNITYSDK_OFFSET(0xB926CD0)
#define MGOOJPHKFMF_KHFPAMHCCOA_OFFSET UNITYSDK_OFFSET(0xB926AD0)

inline static constexpr unsigned int MGOOJPHKFMF_TypeDefinitionIndex = 77802;

	class MGOOJPHKFMF : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::LMFOOOLDECA* PDENFEFCAGN; // 0x18
		::EDJFJFMNFJE* JGPAKHPHKCN; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingBattleBuffType, ::BNBDNEFOKEA*>* LKLHBHDHGII; // 0x28
		::System::Void _ctor(::LMFOOOLDECA* a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + MGOOJPHKFMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void IFOOEPKGGAG(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + MGOOJPHKFMF_IFOOEPKGGAG_OFFSET))(this, a1, a2);
		}

		::LKFPICOFNDF* IPBALKPGCIP(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::LKFPICOFNDF*(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MGOOJPHKFMF_IPBALKPGCIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CMPNCFCJCNE(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + MGOOJPHKFMF_CMPNCFCJCNE_OFFSET))(this, a1, a2);
		}

		::System::Void CMPNCFCJCNE_1(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + MGOOJPHKFMF_CMPNCFCJCNE_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHFPAMHCCOA(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + MGOOJPHKFMF_KHFPAMHCCOA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IList_1<::LKFPICOFNDF*>* JOENLGFDJAM(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleBuffType a2)
		{
			return ((::System::Collections::Generic::IList_1<::LKFPICOFNDF*>*(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + MGOOJPHKFMF_JOENLGFDJAM_OFFSET))(this, a1, a2);
		}

		::BNBDNEFOKEA* BMNBBKGPDBO(::RPG::GameCore::ChenLingBattleBuffType a1)
		{
			return ((::BNBDNEFOKEA*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + MGOOJPHKFMF_BMNBBKGPDBO_OFFSET))(this, a1);
		}

	};

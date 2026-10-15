#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class HAJJKFAIJBD;
class HOBAKOLBNMI;
class JBACCAGFHON;
class LGHPKEAODPH;
class NKGAIPKINJE;
class PJPAOLMBKEC;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellMonoView; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HOBAKOLBNMI_ADPIALDADOA_OFFSET UNITYSDK_OFFSET(0x15DAC4E0)
#define HOBAKOLBNMI_AHCCIAPJCEM_OFFSET UNITYSDK_OFFSET(0x15DAC120)
#define HOBAKOLBNMI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15DA9F50)
#define HOBAKOLBNMI_CPBINMBOPCG_OFFSET UNITYSDK_OFFSET(0x15DACF90)
#define HOBAKOLBNMI_CPGMIJOAFEC_OFFSET UNITYSDK_OFFSET(0x15DACCA0)
#define HOBAKOLBNMI_CTOR_OFFSET UNITYSDK_OFFSET(0x15DAA010)
#define HOBAKOLBNMI_DCPPJACGKLG_OFFSET UNITYSDK_OFFSET(0x15DAB3F0)
#define HOBAKOLBNMI_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15DAA380)
#define HOBAKOLBNMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DAA3C0)
#define HOBAKOLBNMI_ECMMAANHJBO_OFFSET UNITYSDK_OFFSET(0x15DAAD50)
#define HOBAKOLBNMI_EEAMIPPCELJ_OFFSET UNITYSDK_OFFSET(0x15DAC430)
#define HOBAKOLBNMI_EKEGDODBKGA_OFFSET UNITYSDK_OFFSET(0x15DACD70)
#define HOBAKOLBNMI_FEIFBOJHOJA_OFFSET UNITYSDK_OFFSET(0x15DAA400)
#define HOBAKOLBNMI_FHJPLBNKLGJ_OFFSET UNITYSDK_OFFSET(0x15DAB2C0)
#define HOBAKOLBNMI_FMGCGKLNCOG_OFFSET UNITYSDK_OFFSET(0x15DAC050)
#define HOBAKOLBNMI_FMPJKIMHOBB_OFFSET UNITYSDK_OFFSET(0x15DABC40)
#define HOBAKOLBNMI_FNEIOJLMGJK_OFFSET UNITYSDK_OFFSET(0x15DAC2B0)
#define HOBAKOLBNMI_GFDMMNIPLCI_OFFSET UNITYSDK_OFFSET(0x15DADAC0)
#define HOBAKOLBNMI_GFDPPENNEMC_OFFSET UNITYSDK_OFFSET(0x15DAF1A0)
#define HOBAKOLBNMI_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0x15DA9ED0)
#define HOBAKOLBNMI_GJEPIGMFBPD_OFFSET UNITYSDK_OFFSET(0x15DAD850)
#define HOBAKOLBNMI_HBCMGPCFMLI_OFFSET UNITYSDK_OFFSET(0x15DAEF10)
#define HOBAKOLBNMI_HJJLJACJCIO_OFFSET UNITYSDK_OFFSET(0x15DAAF50)
#define HOBAKOLBNMI_HMOPIBOOICG_OFFSET UNITYSDK_OFFSET(0x15DAA570)
#define HOBAKOLBNMI_HONGJIHNPPC_OFFSET UNITYSDK_OFFSET(0x15DAD090)
#define HOBAKOLBNMI_IKONOPFABPE_OFFSET UNITYSDK_OFFSET(0x15DACE40)
#define HOBAKOLBNMI_ILMKGFAPIAF_OFFSET UNITYSDK_OFFSET(0x15DACB40)
#define HOBAKOLBNMI_INABJNBDMIJ_OFFSET UNITYSDK_OFFSET(0x15DABFA0)
#define HOBAKOLBNMI_IPKLNAFGLEI_OFFSET UNITYSDK_OFFSET(0x15DAD960)
#define HOBAKOLBNMI_JKNDDJBEOIP_OFFSET UNITYSDK_OFFSET(0x15DAAB50)
#define HOBAKOLBNMI_LKEAPJINOJL_OFFSET UNITYSDK_OFFSET(0x15DAC250)
#define HOBAKOLBNMI_LLJHCBGJFCC_OFFSET UNITYSDK_OFFSET(0x15DAA800)
#define HOBAKOLBNMI_LPMJDOGDNAM_OFFSET UNITYSDK_OFFSET(0x15DABF00)
#define HOBAKOLBNMI_MEFPNKKJBBB_OFFSET UNITYSDK_OFFSET(0x15DAC9E0)
#define HOBAKOLBNMI_MEHOIMKEBPA_OFFSET UNITYSDK_OFFSET(0x15DAB5D0)
#define HOBAKOLBNMI_NBCFBDOFEMG_OFFSET UNITYSDK_OFFSET(0x15DAE2B0)
#define HOBAKOLBNMI_NBLOOEJDEAE_OFFSET UNITYSDK_OFFSET(0x15DAB6C0)
#define HOBAKOLBNMI_NDDGPALEKOA_1_OFFSET UNITYSDK_OFFSET(0x15DABCF0)
#define HOBAKOLBNMI_NDDGPALEKOA_OFFSET UNITYSDK_OFFSET(0x15DABB30)
#define HOBAKOLBNMI_NKGICOGIPGK_OFFSET UNITYSDK_OFFSET(0x15DAB370)
#define HOBAKOLBNMI_NOPCAMLDHFG_OFFSET UNITYSDK_OFFSET(0x15DAB760)
#define HOBAKOLBNMI_OCBBJOFLHFO_OFFSET UNITYSDK_OFFSET(0x15DAB0B0)
#define HOBAKOLBNMI_PKKCFLONALA_OFFSET UNITYSDK_OFFSET(0x15DAB210)
#define HOBAKOLBNMI_PNAHJHJDBEP_OFFSET UNITYSDK_OFFSET(0x15DAEC90)

inline static constexpr unsigned int HOBAKOLBNMI_TypeDefinitionIndex = 78086;

	class HOBAKOLBNMI : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Int32>* GKNKDAOLLLP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* FDLICLPJHLM; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* DLFMEJEHBEJ; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* AEHAFHBNEOI; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::System::Int32>* MDFLGELCBIF; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* CIEDHCKINBH; // 0x40
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_CTOR_OFFSET))(this, a1);
		}

		::LGHPKEAODPH* GHDIJCNKKOM()
		{
			return ((::LGHPKEAODPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_GHDIJCNKKOM_OFFSET))(this);
		}

		static ::HOBAKOLBNMI* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::HOBAKOLBNMI*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_DISPOSE_OFFSET))(this);
		}

		::AGCPAMNLCGN* FEIFBOJHOJA(::RPG::GameCore::CakeRaceCellType a1, ::UnityEngine::Vector3Int a2, ::RPG::MVector3 a3)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::UnityEngine::Vector3Int, ::RPG::MVector3))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_FEIFBOJHOJA_OFFSET))(this, a1, a2, a3);
		}

		::AGCPAMNLCGN* HJJLJACJCIO(::RPG::GameCore::CakeRaceCellType a1, ::System::Int32 a2, ::UnityEngine::Vector3Int a3, ::RPG::MVector3 a4)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::System::Int32, ::UnityEngine::Vector3Int, ::RPG::MVector3))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_HJJLJACJCIO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PKKCFLONALA(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_PKKCFLONALA_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* HMOPIBOOICG(::RPG::GameCore::CakeRaceCellType a1, ::UnityEngine::Vector3Int a2, ::RPG::MVector3 a3, ::System::Int32 a4)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::UnityEngine::Vector3Int, ::RPG::MVector3, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_HMOPIBOOICG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LLJHCBGJFCC(::AGCPAMNLCGN* a1, ::RPG::GameCore::CakeRaceCellType a2, ::UnityEngine::Vector3Int a3, ::RPG::MVector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::GameCore::CakeRaceCellType, ::UnityEngine::Vector3Int, ::RPG::MVector3))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_LLJHCBGJFCC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DCPPJACGKLG(::AGCPAMNLCGN* a1, ::RPG::GameCore::CakeRaceCellType a2, ::UnityEngine::Vector3Int a3)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::GameCore::CakeRaceCellType, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_DCPPJACGKLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBLOOEJDEAE(::AGCPAMNLCGN* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_NBLOOEJDEAE_OFFSET))(this, a1, a2);
		}

		::System::Boolean MEHOIMKEBPA(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_MEHOIMKEBPA_OFFSET))(this, a1);
		}

		::System::Void NOPCAMLDHFG(::AGCPAMNLCGN* a1, ::RPG::GameCore::CakeRaceCellType a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_NOPCAMLDHFG_OFFSET))(this, a1, a2);
		}

		::System::Void JKNDDJBEOIP(::RPG::GameCore::CakeRaceCellType a1, ::RPG::MVector3 a2, ::AGCPAMNLCGN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType, ::RPG::MVector3, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_JKNDDJBEOIP_OFFSET))(this, a1, a2, a3);
		}

		::AGCPAMNLCGN* NDDGPALEKOA(::UnityEngine::Vector3Int a1)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_NDDGPALEKOA_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* FMPJKIMHOBB(::UnityEngine::Vector3Int a1)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_FMPJKIMHOBB_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* LPMJDOGDNAM(::System::Int32 a1)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_LPMJDOGDNAM_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* NDDGPALEKOA_1(::System::Int32 a1)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_NDDGPALEKOA_1_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* INABJNBDMIJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_INABJNBDMIJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* FMGCGKLNCOG(::AGCPAMNLCGN* a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_FMGCGKLNCOG_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* AHCCIAPJCEM(::AGCPAMNLCGN* a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView*(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_AHCCIAPJCEM_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView* LKEAPJINOJL(::AGCPAMNLCGN* a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView*(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_LKEAPJINOJL_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView* FNEIOJLMGJK(::AGCPAMNLCGN* a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView*(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_FNEIOJLMGJK_OFFSET))(this, a1);
		}

		::AGCPAMNLCGN* EEAMIPPCELJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_EEAMIPPCELJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean ADPIALDADOA(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_ADPIALDADOA_OFFSET))(this, a1, a2);
		}

		::System::Boolean MEFPNKKJBBB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_MEFPNKKJBBB_OFFSET))(this, a1, a2);
		}

		::System::Boolean ILMKGFAPIAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_ILMKGFAPIAF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CPGMIJOAFEC(::AGCPAMNLCGN* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_CPGMIJOAFEC_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceCellType EKEGDODBKGA(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::GameCore::CakeRaceCellType(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_EKEGDODBKGA_OFFSET))(this, a1);
		}

		::System::Void ECMMAANHJBO(::UnityEngine::Vector3Int a1, ::AGCPAMNLCGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_ECMMAANHJBO_OFFSET))(this, a1, a2);
		}

		::System::Void OCBBJOFLHFO(::System::Int32 a1, ::AGCPAMNLCGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_OCBBJOFLHFO_OFFSET))(this, a1, a2);
		}

		::System::Void FHJPLBNKLGJ(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_FHJPLBNKLGJ_OFFSET))(this, a1);
		}

		::System::Void NKGICOGIPGK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_NKGICOGIPGK_OFFSET))(this, a1);
		}

		::System::Void IKONOPFABPE(::UnityEngine::Vector3Int a1, ::AGCPAMNLCGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_IKONOPFABPE_OFFSET))(this, a1, a2);
		}

		::System::Void CPBINMBOPCG(::UnityEngine::Vector3Int a1, ::AGCPAMNLCGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_CPBINMBOPCG_OFFSET))(this, a1, a2);
		}

		::System::Void HONGJIHNPPC(::System::Collections::Generic::IEnumerable_1<::PJPAOLMBKEC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::PJPAOLMBKEC*>*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_HONGJIHNPPC_OFFSET))(this, a1);
		}

		::System::Void GJEPIGMFBPD(::AGCPAMNLCGN* a1, ::RPG::GameCore::CakeRaceCellType a2, ::RPG::GameCore::CakeRaceCellType a3)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_GJEPIGMFBPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IPKLNAFGLEI(::AGCPAMNLCGN* a1, ::RPG::GameCore::CakeRaceCellType a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_IPKLNAFGLEI_OFFSET))(this, a1, a2);
		}

		::System::Void GFDMMNIPLCI(::System::Collections::Generic::IEnumerable_1<::NKGAIPKINJE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::NKGAIPKINJE*>*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_GFDMMNIPLCI_OFFSET))(this, a1);
		}

		::System::Void NBCFBDOFEMG(::System::Collections::Generic::IEnumerable_1<::HAJJKFAIJBD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HAJJKFAIJBD*>*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_NBCFBDOFEMG_OFFSET))(this, a1);
		}

		::System::Void PNAHJHJDBEP(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_PNAHJHJDBEP_OFFSET))(this, a1);
		}

		::System::Void HBCMGPCFMLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_HBCMGPCFMLI_OFFSET))(this);
		}

		::System::Single GFDPPENNEMC(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAKOLBNMI_GFDPPENNEMC_OFFSET))(this, a1);
		}

	};

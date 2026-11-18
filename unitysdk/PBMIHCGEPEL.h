#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class PBMIHCGEPEL_DCBLPGHOPCE;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PBMIHCGEPEL_AOHCGNIDEAE_OFFSET UNITYSDK_OFFSET(0x150B1AD0)
#define PBMIHCGEPEL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x150B0700)
#define PBMIHCGEPEL_CBOAHEBAKFP_OFFSET UNITYSDK_OFFSET(0x150B2760)
#define PBMIHCGEPEL_CGMPNGMFPGG_OFFSET UNITYSDK_OFFSET(0x150B1A40)
#define PBMIHCGEPEL_CKKJDJKBGFL_OFFSET UNITYSDK_OFFSET(0x150B18A0)
#define PBMIHCGEPEL_DHGGCEIFGFN_OFFSET UNITYSDK_OFFSET(0x150B2210)
#define PBMIHCGEPEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150AFAA0)
#define PBMIHCGEPEL_DMNBKJPHGEK_OFFSET UNITYSDK_OFFSET(0x150B0F70)
#define PBMIHCGEPEL_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x150B0E00)
#define PBMIHCGEPEL_DPFFJNFPLCF_OFFSET UNITYSDK_OFFSET(0x150B22F0)
#define PBMIHCGEPEL_DPMANNINOMO_OFFSET UNITYSDK_OFFSET(0x150B1BE0)
#define PBMIHCGEPEL_EIHMMKDEGLL_OFFSET UNITYSDK_OFFSET(0x150B1F40)
#define PBMIHCGEPEL_FGJGALOEFHB_OFFSET UNITYSDK_OFFSET(0x150B1140)
#define PBMIHCGEPEL_GDJGBCKGIKD_OFFSET UNITYSDK_OFFSET(0x150B0020)
#define PBMIHCGEPEL_GKPKIEFDPMD_OFFSET UNITYSDK_OFFSET(0x150B08F0)
#define PBMIHCGEPEL_GLIDGKFLAMN_OFFSET UNITYSDK_OFFSET(0x150B0540)
#define PBMIHCGEPEL_KCNFCHCHKLK_OFFSET UNITYSDK_OFFSET(0x150B0140)
#define PBMIHCGEPEL_LABKMDAIMCH_OFFSET UNITYSDK_OFFSET(0x150B0FC0)
#define PBMIHCGEPEL_LDFJHKMFMOB_OFFSET UNITYSDK_OFFSET(0x150B1C90)
#define PBMIHCGEPEL_LPBKLGGCJOL_OFFSET UNITYSDK_OFFSET(0x150B0C10)
#define PBMIHCGEPEL_MEEKOONAFEO_OFFSET UNITYSDK_OFFSET(0x150B2220)
#define PBMIHCGEPEL_MMCHFNNNDLD_OFFSET UNITYSDK_OFFSET(0x150B0E10)
#define PBMIHCGEPEL_OIBDJAGIPBI_OFFSET UNITYSDK_OFFSET(0x150B2300)
#define PBMIHCGEPEL_ONCREATE_OFFSET UNITYSDK_OFFSET(0x150AFF60)
#define PBMIHCGEPEL_PBNBNCOOGJI_OFFSET UNITYSDK_OFFSET(0x150B2260)
#define PBMIHCGEPEL_PCBPHBGFMMC_OFFSET UNITYSDK_OFFSET(0x150B0550)
#define PBMIHCGEPEL__CTOR_OFFSET UNITYSDK_OFFSET(0x150AFFA0)

inline static constexpr unsigned int PBMIHCGEPEL_TypeDefinitionIndex = 70456;

class PBMIHCGEPEL
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* IPOOJFJLHEB; // 0x10
	::PBMIHCGEPEL_DCBLPGHOPCE* DIHCCFEKEGI; // 0x18
	::System::Action* LJLPCMCBAPM; // 0x20
	::Foundation::AssetRequestHandle DGAAAONDIOD; // 0x28
	::UnityEngine::GameObject* BFCGGIMICME; // 0x48
	::MoleMole::IVideoPlayer* _BJIFNEMKHBE_k__BackingField; // 0x50
	::Cinemachine::CinemachineVirtualCamera* DKELLCEBOIE; // 0x58
	::System::Single FNFBALLOCCA; // 0x60
	::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA; // 0x64
	::System::Int32 MEFMFDDANAK; // 0x68
	::System::UInt32 IIBIDNJADHM; // 0x6C
	::System::Single BGOLBGJOLDD; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_ONCREATE_OFFSET))(this);
	}

	::System::Void GDJGBCKGIKD(::Cinemachine::CinemachineVirtualCamera* KONLMDBCDCK)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_GDJGBCKGIKD_OFFSET))(this, KONLMDBCDCK);
	}

	::PBMIHCGEPEL_DCBLPGHOPCE* GLIDGKFLAMN()
	{
		return ((::PBMIHCGEPEL_DCBLPGHOPCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_GLIDGKFLAMN_OFFSET))(this);
	}

	::System::Boolean PCBPHBGFMMC(::System::Int32 AOCOIDIMLIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_PCBPHBGFMMC_OFFSET))(this, AOCOIDIMLIH);
	}

	::System::Void KCNFCHCHKLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_KCNFCHCHKLK_OFFSET))(this);
	}

	::System::Void LPBKLGGCJOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_LPBKLGGCJOL_OFFSET))(this);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_DOCGMAIMGNJ_OFFSET))(this);
	}

	::System::Void MMCHFNNNDLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_MMCHFNNNDLD_OFFSET))(this);
	}

	::System::Void DMNBKJPHGEK(::System::Action* FJDOCPKEACA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_DMNBKJPHGEK_OFFSET))(this, FJDOCPKEACA);
	}

	::System::Void LABKMDAIMCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_LABKMDAIMCH_OFFSET))(this);
	}

	::System::Void FGJGALOEFHB(::System::Action* FKHOJLMBILE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_FGJGALOEFHB_OFFSET))(this, FKHOJLMBILE);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::IVideoPlayer* CEHEDIJEJFG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_BBOMJDBNHIC_OFFSET))(this, CEHEDIJEJFG);
	}

	::System::Void CGMPNGMFPGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_CGMPNGMFPGG_OFFSET))(this);
	}

	::System::Void AOHCGNIDEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_AOHCGNIDEAE_OFFSET))(this);
	}

	::System::Void DPMANNINOMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_DPMANNINOMO_OFFSET))(this);
	}

	::System::Void LDFJHKMFMOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_LDFJHKMFMOB_OFFSET))(this);
	}

	::System::Void GKPKIEFDPMD(::System::Int32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_GKPKIEFDPMD_OFFSET))(this, AOCOIDIMLIH);
	}

	::System::Void EIHMMKDEGLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_EIHMMKDEGLL_OFFSET))(this);
	}

	::MoleMole::IVideoPlayer* DHGGCEIFGFN()
	{
		return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_DHGGCEIFGFN_OFFSET))(this);
	}

	::System::Void MEEKOONAFEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_MEEKOONAFEO_OFFSET))(this);
	}

	::System::Void PBNBNCOOGJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_PBNBNCOOGJI_OFFSET))(this);
	}

	::System::Void DPFFJNFPLCF(::MoleMole::IVideoPlayer* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_DPFFJNFPLCF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CKKJDJKBGFL(::System::Action* FKHOJLMBILE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_CKKJDJKBGFL_OFFSET))(this, FKHOJLMBILE);
	}

	::System::Void OIBDJAGIPBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_OIBDJAGIPBI_OFFSET))(this);
	}

	::System::Void CBOAHEBAKFP(::PBMIHCGEPEL_DCBLPGHOPCE* LENPCLAGPGL)
	{
		return ((::System::Void(*)(::PVOID, ::PBMIHCGEPEL_DCBLPGHOPCE*))((::PBYTE)hIl2Cpp + PBMIHCGEPEL_CBOAHEBAKFP_OFFSET))(this, LENPCLAGPGL);
	}
};

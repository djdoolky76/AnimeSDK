#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAJCPEFEOPN.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
class CFGLBPHCFGG;
class IEMCCEBKBLB;
class IJEKJNBKPJN;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class NpcBodySizeInfo; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KFJIPJHCHJA_ADLFGKJBEHF_OFFSET UNITYSDK_OFFSET(0xB3B1C50)
#define KFJIPJHCHJA_AFLBCNKMKDG_OFFSET UNITYSDK_OFFSET(0xB3B1E70)
#define KFJIPJHCHJA_AJPLALCMJLO_OFFSET UNITYSDK_OFFSET(0xB3B1D90)
#define KFJIPJHCHJA_APMOOBIFDHB_OFFSET UNITYSDK_OFFSET(0xB3B19F0)
#define KFJIPJHCHJA_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB3B1840)
#define KFJIPJHCHJA_BOLMEIHNAOK_OFFSET UNITYSDK_OFFSET(0xB3B29C0)
#define KFJIPJHCHJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB3B29E0)
#define KFJIPJHCHJA_DCPHGKEDEHE_OFFSET UNITYSDK_OFFSET(0xB3B2450)
#define KFJIPJHCHJA_DIEGGJLIACL_OFFSET UNITYSDK_OFFSET(0xB3B0BA0)
#define KFJIPJHCHJA_DLNNBMOEPCC_OFFSET UNITYSDK_OFFSET(0xB3B27E0)
#define KFJIPJHCHJA_DNHNLLEGKLI_OFFSET UNITYSDK_OFFSET(0xB3B1550)
#define KFJIPJHCHJA_FHPBCBALLMC_OFFSET UNITYSDK_OFFSET(0xB3B23E0)
#define KFJIPJHCHJA_FLPFOKJFEED_OFFSET UNITYSDK_OFFSET(0xB3B10D0)
#define KFJIPJHCHJA_FMHNDPKKJFH_OFFSET UNITYSDK_OFFSET(0xB3B1EF0)
#define KFJIPJHCHJA_HCNCCLGKAPJ_OFFSET UNITYSDK_OFFSET(0xB3B0E00)
#define KFJIPJHCHJA_HHAFIPDDDJA_OFFSET UNITYSDK_OFFSET(0xB3B2730)
#define KFJIPJHCHJA_HNBIHMPALEK_OFFSET UNITYSDK_OFFSET(0xB3B1FD0)
#define KFJIPJHCHJA_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xB3B2960)
#define KFJIPJHCHJA_JOLIDCMBMBJ_OFFSET UNITYSDK_OFFSET(0xB3B1E10)
#define KFJIPJHCHJA_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xB3B1690)
#define KFJIPJHCHJA_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xB3B18D0)
#define KFJIPJHCHJA_LAMNNMIAFIM_OFFSET UNITYSDK_OFFSET(0xB3B24C0)
#define KFJIPJHCHJA_LDPNDDNPKEG_OFFSET UNITYSDK_OFFSET(0xB3B0EE0)
#define KFJIPJHCHJA_LFECKAGPAMG_OFFSET UNITYSDK_OFFSET(0xB3B2950)
#define KFJIPJHCHJA_LHHGMHBGOKL_OFFSET UNITYSDK_OFFSET(0xB3B1600)
#define KFJIPJHCHJA_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB3B1280)
#define KFJIPJHCHJA_LPBHFNKIGPK_OFFSET UNITYSDK_OFFSET(0xB3B1A90)
#define KFJIPJHCHJA_MMFAHLFEJOK_OFFSET UNITYSDK_OFFSET(0xB3B1270)
#define KFJIPJHCHJA_NGOCIDIPOEO_OFFSET UNITYSDK_OFFSET(0xB3B13B0)
#define KFJIPJHCHJA_NOLAAPOJJLI_OFFSET UNITYSDK_OFFSET(0xB3B26C0)

inline static constexpr unsigned int KFJIPJHCHJA_TypeDefinitionIndex = 69253;

	class KFJIPJHCHJA : public ::LAJCPEFEOPN
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xC8
		::RPG::Client::RootMotionHandler* OHBPFHNHEBB; // 0xD0
		::RPG::Client::AssemNPC* AMCNNBIAFPL; // 0xD8
		::IJEKJNBKPJN* NFEGDKBBHFE; // 0xE0
		::System::Collections::Generic::HashSet_1<::System::String*>* IOACLKFHHLA; // 0xE8
		::RPG::Client::NpcBodySizeInfo* HINOGPFIIID; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_CTOR_OFFSET))(this);
		}

		::System::Void DIEGGJLIACL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_DIEGGJLIACL_OFFSET))(this, a1);
		}

		::System::Void HCNCCLGKAPJ(::CFGLBPHCFGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFGLBPHCFGG*))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_HCNCCLGKAPJ_OFFSET))(this, a1);
		}

		::System::Void LDPNDDNPKEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_LDPNDDNPKEG_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void NGOCIDIPOEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_NGOCIDIPOEO_OFFSET))(this);
		}

		::System::Void DNHNLLEGKLI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_DNHNLLEGKLI_OFFSET))(this, a1);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void APMOOBIFDHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_APMOOBIFDHB_OFFSET))(this);
		}

		::System::Void LPBHFNKIGPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_LPBHFNKIGPK_OFFSET))(this);
		}

		::System::Void ADLFGKJBEHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_ADLFGKJBEHF_OFFSET))(this);
		}

		::IEMCCEBKBLB* AJPLALCMJLO()
		{
			return ((::IEMCCEBKBLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_AJPLALCMJLO_OFFSET))(this);
		}

		::System::Void JOLIDCMBMBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_JOLIDCMBMBJ_OFFSET))(this, a1);
		}

		::System::Void AFLBCNKMKDG(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_AFLBCNKMKDG_OFFSET))(this, a1, a2);
		}

		::System::Void FMHNDPKKJFH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_FMHNDPKKJFH_OFFSET))(this, a1, a2);
		}

		::System::Void HNBIHMPALEK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_HNBIHMPALEK_OFFSET))(this, a1);
		}

		::System::Void FHPBCBALLMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_FHPBCBALLMC_OFFSET))(this);
		}

		::System::Void DCPHGKEDEHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_DCPHGKEDEHE_OFFSET))(this, a1);
		}

		::System::Void FLPFOKJFEED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_FLPFOKJFEED_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_BIOBBNGDGDF_OFFSET))(this);
		}

		::System::Void LAMNNMIAFIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_LAMNNMIAFIM_OFFSET))(this);
		}

		::System::Void NOLAAPOJJLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_NOLAAPOJJLI_OFFSET))(this);
		}

		::System::Void LHHGMHBGOKL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_LHHGMHBGOKL_OFFSET))(this, a1);
		}

		::System::Void DLNNBMOEPCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_DLNNBMOEPCC_OFFSET))(this);
		}

		::System::Single HHAFIPDDDJA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_HHAFIPDDDJA_OFFSET))(this);
		}

		::IJEKJNBKPJN* LFECKAGPAMG()
		{
			return ((::IJEKJNBKPJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_LFECKAGPAMG_OFFSET))(this);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_JDKCDJNJAOL_OFFSET))(this);
		}

		::System::Boolean MMFAHLFEJOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_MMFAHLFEJOK_OFFSET))(this);
		}

		::RPG::GameCore::NPCBodySize BOLMEIHNAOK()
		{
			return ((::RPG::GameCore::NPCBodySize(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJIPJHCHJA_BOLMEIHNAOK_OFFSET))(this);
		}

	};

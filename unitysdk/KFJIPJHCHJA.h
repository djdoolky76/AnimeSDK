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

#define KFJIPJHCHJA_ADLFGKJBEHF_OFFSET UNITYSDK_OFFSET(0xB3B8E20)
#define KFJIPJHCHJA_AFLBCNKMKDG_OFFSET UNITYSDK_OFFSET(0xB3B9050)
#define KFJIPJHCHJA_AJPLALCMJLO_OFFSET UNITYSDK_OFFSET(0xB3B8F70)
#define KFJIPJHCHJA_APMOOBIFDHB_OFFSET UNITYSDK_OFFSET(0xB3B8BC0)
#define KFJIPJHCHJA_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB3B8A10)
#define KFJIPJHCHJA_BOLMEIHNAOK_OFFSET UNITYSDK_OFFSET(0xB3B9BA0)
#define KFJIPJHCHJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB3B9BC0)
#define KFJIPJHCHJA_DCPHGKEDEHE_OFFSET UNITYSDK_OFFSET(0xB3B9630)
#define KFJIPJHCHJA_DIEGGJLIACL_OFFSET UNITYSDK_OFFSET(0xB3B7D60)
#define KFJIPJHCHJA_DLNNBMOEPCC_OFFSET UNITYSDK_OFFSET(0xB3B99C0)
#define KFJIPJHCHJA_DNHNLLEGKLI_OFFSET UNITYSDK_OFFSET(0xB3B8710)
#define KFJIPJHCHJA_FHPBCBALLMC_OFFSET UNITYSDK_OFFSET(0xB3B95C0)
#define KFJIPJHCHJA_FLPFOKJFEED_OFFSET UNITYSDK_OFFSET(0xB3B8290)
#define KFJIPJHCHJA_FMHNDPKKJFH_OFFSET UNITYSDK_OFFSET(0xB3B90D0)
#define KFJIPJHCHJA_HCNCCLGKAPJ_OFFSET UNITYSDK_OFFSET(0xB3B7FC0)
#define KFJIPJHCHJA_HHAFIPDDDJA_OFFSET UNITYSDK_OFFSET(0xB3B9910)
#define KFJIPJHCHJA_HNBIHMPALEK_OFFSET UNITYSDK_OFFSET(0xB3B91B0)
#define KFJIPJHCHJA_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xB3B9B40)
#define KFJIPJHCHJA_JOLIDCMBMBJ_OFFSET UNITYSDK_OFFSET(0xB3B8FF0)
#define KFJIPJHCHJA_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xB3B8850)
#define KFJIPJHCHJA_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xB3B8AA0)
#define KFJIPJHCHJA_LAMNNMIAFIM_OFFSET UNITYSDK_OFFSET(0xB3B96A0)
#define KFJIPJHCHJA_LDPNDDNPKEG_OFFSET UNITYSDK_OFFSET(0xB3B80A0)
#define KFJIPJHCHJA_LFECKAGPAMG_OFFSET UNITYSDK_OFFSET(0xB3B9B30)
#define KFJIPJHCHJA_LHHGMHBGOKL_OFFSET UNITYSDK_OFFSET(0xB3B87C0)
#define KFJIPJHCHJA_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB3B8440)
#define KFJIPJHCHJA_LPBHFNKIGPK_OFFSET UNITYSDK_OFFSET(0xB3B8C60)
#define KFJIPJHCHJA_MMFAHLFEJOK_OFFSET UNITYSDK_OFFSET(0xB3B8430)
#define KFJIPJHCHJA_NGOCIDIPOEO_OFFSET UNITYSDK_OFFSET(0xB3B8570)
#define KFJIPJHCHJA_NOLAAPOJJLI_OFFSET UNITYSDK_OFFSET(0xB3B98A0)

	class KFJIPJHCHJA : public ::LAJCPEFEOPN
	{
	public:
		::RPG::Client::NpcBodySizeInfo* HINOGPFIIID; // 0xC8
		::IJEKJNBKPJN* NFEGDKBBHFE; // 0xD0
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xD8
		::RPG::Client::RootMotionHandler* OHBPFHNHEBB; // 0xE0
		::RPG::Client::AssemNPC* AMCNNBIAFPL; // 0xE8
		::System::Collections::Generic::HashSet_1<::System::String*>* IOACLKFHHLA; // 0xF0
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

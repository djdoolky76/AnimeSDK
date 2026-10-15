#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCBPNHHMAFJ.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;

#define KHBMEBLFBCB_BMCPNCOMPIN_OFFSET UNITYSDK_OFFSET(0xB3FEE80)
#define KHBMEBLFBCB_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FF290)
#define KHBMEBLFBCB_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB3FF280)
#define KHBMEBLFBCB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB3FE2D0)
#define KHBMEBLFBCB_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xB3FEA00)
#define KHBMEBLFBCB_ICLALGFFDIN_OFFSET UNITYSDK_OFFSET(0xB3FEF80)
#define KHBMEBLFBCB_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB3FE730)
#define KHBMEBLFBCB_KJDCNLGOEIF_OFFSET UNITYSDK_OFFSET(0xB3FE7E0)
#define KHBMEBLFBCB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3FE200)
#define KHBMEBLFBCB_LBLHLBKEEKI_OFFSET UNITYSDK_OFFSET(0xB3FED30)
#define KHBMEBLFBCB_LLOPPKPLIHF_OFFSET UNITYSDK_OFFSET(0xB3FECC0)
#define KHBMEBLFBCB_NJMHHDHHLLN_OFFSET UNITYSDK_OFFSET(0xB3FE610)
#define KHBMEBLFBCB_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB3FE520)

inline static constexpr unsigned int KHBMEBLFBCB_TypeDefinitionIndex = 76789;

	class KHBMEBLFBCB : public ::BCBPNHHMAFJ
	{
	public:
		::System::Single JJMFCJCFIBN; // 0xE8
		::System::Single HCONIMHJBGH; // 0xEC
		::System::Single LGOFIOFDJBG; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void LBLHLBKEEKI(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_LBLHLBKEEKI_OFFSET))(this, a1);
		}

		::System::Void NJMHHDHHLLN(::JAODHHPIKGJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_NJMHHDHHLLN_OFFSET))(this, a1, a2);
		}

		::System::Void BMCPNCOMPIN(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_BMCPNCOMPIN_OFFSET))(this, a1);
		}

		::System::Void ICLALGFFDIN(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_ICLALGFFDIN_OFFSET))(this, a1);
		}

		::System::Void KJDCNLGOEIF(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_KJDCNLGOEIF_OFFSET))(this, a1);
		}

		::System::Void LLOPPKPLIHF(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_LLOPPKPLIHF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBMEBLFBCB_EPPAFNJFCMH_OFFSET))(this);
		}

	};

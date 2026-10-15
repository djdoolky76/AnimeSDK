#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCBPNHHMAFJ.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;

#define KHBMEBLFBCB_BMCPNCOMPIN_OFFSET UNITYSDK_OFFSET(0xB3F8350)
#define KHBMEBLFBCB_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F8760)
#define KHBMEBLFBCB_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB3F8750)
#define KHBMEBLFBCB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB3F77A0)
#define KHBMEBLFBCB_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xB3F7ED0)
#define KHBMEBLFBCB_ICLALGFFDIN_OFFSET UNITYSDK_OFFSET(0xB3F8450)
#define KHBMEBLFBCB_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB3F7C00)
#define KHBMEBLFBCB_KJDCNLGOEIF_OFFSET UNITYSDK_OFFSET(0xB3F7CB0)
#define KHBMEBLFBCB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3F76B0)
#define KHBMEBLFBCB_LBLHLBKEEKI_OFFSET UNITYSDK_OFFSET(0xB3F8200)
#define KHBMEBLFBCB_LLOPPKPLIHF_OFFSET UNITYSDK_OFFSET(0xB3F8190)
#define KHBMEBLFBCB_NJMHHDHHLLN_OFFSET UNITYSDK_OFFSET(0xB3F7AE0)
#define KHBMEBLFBCB_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB3F79F0)

inline static constexpr unsigned int KHBMEBLFBCB_TypeDefinitionIndex = 76788;

	class KHBMEBLFBCB : public ::BCBPNHHMAFJ
	{
	public:
		::System::Single HCONIMHJBGH; // 0xE8
		::System::Single LGOFIOFDJBG; // 0xEC
		::System::Single JJMFCJCFIBN; // 0xF0
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJDFAOEFGFE.h"
#include "unitysdk/EMKNLNNLNKE.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;
namespace RPG::GameCore { class FloatCurve; }

#define BCBPNHHMAFJ_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0x15EA4B10)
#define BCBPNHHMAFJ_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0x15EA47F0)
#define BCBPNHHMAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA4B80)
#define BCBPNHHMAFJ_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15EA2F70)
#define BCBPNHHMAFJ_ICLALGFFDIN_OFFSET UNITYSDK_OFFSET(0x15EA3450)
#define BCBPNHHMAFJ_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x15EA22E0)
#define BCBPNHHMAFJ_IIPLEENPGFI_OFFSET UNITYSDK_OFFSET(0x15EA3270)
#define BCBPNHHMAFJ_JEONBAEMNGB_OFFSET UNITYSDK_OFFSET(0x15EA30D0)
#define BCBPNHHMAFJ_JJFMHKEMGBI_OFFSET UNITYSDK_OFFSET(0x15EA35E0)
#define BCBPNHHMAFJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EA20D0)
#define BCBPNHHMAFJ_LJBJFECCLNP_OFFSET UNITYSDK_OFFSET(0x15EA23C0)
#define BCBPNHHMAFJ_MCLAJLDHEOJ_OFFSET UNITYSDK_OFFSET(0x15EA3DB0)
#define BCBPNHHMAFJ_MFFGPKFPDPL_OFFSET UNITYSDK_OFFSET(0x15EA28E0)
#define BCBPNHHMAFJ_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15EA3000)
#define BCBPNHHMAFJ_OBHDOEKFBAO_OFFSET UNITYSDK_OFFSET(0x15EA3F10)
#define BCBPNHHMAFJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15EA2790)
#define BCBPNHHMAFJ_PBKBGIFIMAN_OFFSET UNITYSDK_OFFSET(0x15EA3670)

inline static constexpr unsigned int BCBPNHHMAFJ_TypeDefinitionIndex = 76788;

	class BCBPNHHMAFJ : public ::EMKNLNNLNKE
	{
	public:
		::RPG::GameCore::FloatCurve* HKIEHNGOPHN; // 0xA8
		::System::Single GCNDMKDPAGF; // 0xB0
		::System::Single JNIOBGEPFLD; // 0xB4
		::System::Single INDAOAJPICN; // 0xB8
		::System::Single JLLAGLHOAOA; // 0xBC
		::System::Single IEMPCKPGCPH; // 0xC0
		::System::Single OBPJNEKLBIJ; // 0xC4
		::System::Single PIFPLGKOFMA; // 0xC8
		::BJDFAOEFGFE AEHFGLBCGEO; // 0xCC
		::System::Single IPFKFEFIJFI; // 0xD4
		::System::Single JPOLLOJDGPP; // 0xD8
		::System::Single MLKDOFKEMHP; // 0xDC
		::System::Single BAGOJHACAFH; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void LJBJFECCLNP(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_LJBJFECCLNP_OFFSET))(this, a1);
		}

		::System::Void JEONBAEMNGB(::JAODHHPIKGJ* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_JEONBAEMNGB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void IIPLEENPGFI(::JAODHHPIKGJ* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_IIPLEENPGFI_OFFSET))(this, a1, a2, a3);
		}

		::System::Single MFFGPKFPDPL(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_MFFGPKFPDPL_OFFSET))(this, a1, a2);
		}

		::System::Void ICLALGFFDIN(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_ICLALGFFDIN_OFFSET))(this, a1);
		}

		::System::Void JJFMHKEMGBI(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_JJFMHKEMGBI_OFFSET))(this, a1);
		}

		::System::Void PBKBGIFIMAN(::JAODHHPIKGJ* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_PBKBGIFIMAN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MCLAJLDHEOJ(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_MCLAJLDHEOJ_OFFSET))(this, a1);
		}

		::System::Void OBHDOEKFBAO(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_OBHDOEKFBAO_OFFSET))(this, a1, a2);
		}

		::System::Void BFPJNABOKMB(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBPNHHMAFJ_ANMDLJPJEHA_OFFSET))(this);
		}

	};

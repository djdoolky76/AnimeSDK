#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJDFAOEFGFE.h"
#include "unitysdk/EMKNLNNLNKE.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;
namespace RPG::GameCore { class FloatCurve; }

#define BCBPNHHMAFJ_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0x19D72910)
#define BCBPNHHMAFJ_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0x19D725F0)
#define BCBPNHHMAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19D72980)
#define BCBPNHHMAFJ_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x19D70D60)
#define BCBPNHHMAFJ_ICLALGFFDIN_OFFSET UNITYSDK_OFFSET(0x19D71250)
#define BCBPNHHMAFJ_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x19D700D0)
#define BCBPNHHMAFJ_IIPLEENPGFI_OFFSET UNITYSDK_OFFSET(0x19D71070)
#define BCBPNHHMAFJ_JEONBAEMNGB_OFFSET UNITYSDK_OFFSET(0x19D70EC0)
#define BCBPNHHMAFJ_JJFMHKEMGBI_OFFSET UNITYSDK_OFFSET(0x19D713E0)
#define BCBPNHHMAFJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19D6FEA0)
#define BCBPNHHMAFJ_LJBJFECCLNP_OFFSET UNITYSDK_OFFSET(0x19D701B0)
#define BCBPNHHMAFJ_MCLAJLDHEOJ_OFFSET UNITYSDK_OFFSET(0x19D71BB0)
#define BCBPNHHMAFJ_MFFGPKFPDPL_OFFSET UNITYSDK_OFFSET(0x19D706D0)
#define BCBPNHHMAFJ_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x19D70DF0)
#define BCBPNHHMAFJ_OBHDOEKFBAO_OFFSET UNITYSDK_OFFSET(0x19D71D10)
#define BCBPNHHMAFJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x19D70580)
#define BCBPNHHMAFJ_PBKBGIFIMAN_OFFSET UNITYSDK_OFFSET(0x19D71470)

inline static constexpr unsigned int BCBPNHHMAFJ_TypeDefinitionIndex = 79121;

	class BCBPNHHMAFJ : public ::EMKNLNNLNKE
	{
	public:
		::RPG::GameCore::FloatCurve* HKIEHNGOPHN; // 0xA8
		::System::Single JNIOBGEPFLD; // 0xB0
		::System::Single OBPJNEKLBIJ; // 0xB4
		::System::Single IPFKFEFIJFI; // 0xB8
		::System::Single INDAOAJPICN; // 0xBC
		::System::Single GCNDMKDPAGF; // 0xC0
		::System::Single IEMPCKPGCPH; // 0xC4
		::System::Single PIFPLGKOFMA; // 0xC8
		::System::Single MLKDOFKEMHP; // 0xCC
		::BJDFAOEFGFE AEHFGLBCGEO; // 0xD0
		::System::Single BAGOJHACAFH; // 0xD8
		::System::Single JLLAGLHOAOA; // 0xDC
		::System::Single JPOLLOJDGPP; // 0xE0
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

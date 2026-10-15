#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DUpdateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/MColor.h"
class AAKADBDHKBJ;
class FPNHGPEICOG;
class GFGGHEHEJKC;
class KFAAKBJKKKB;
class LFGIBPHFIMF;
class MJNGFEGNCOA;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AAKADBDHKBJ_AJNLGPMECBM_OFFSET UNITYSDK_OFFSET(0xB0CBA60)
#define AAKADBDHKBJ_BOCJMAKCPOO_OFFSET UNITYSDK_OFFSET(0xB0C9AE0)
#define AAKADBDHKBJ_CIAGLGJIGAO_OFFSET UNITYSDK_OFFSET(0xB0CAF80)
#define AAKADBDHKBJ_CIMFPOJMNMA_OFFSET UNITYSDK_OFFSET(0xB0CBD00)
#define AAKADBDHKBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CC8C0)
#define AAKADBDHKBJ_DEJOPFDIEBA_OFFSET UNITYSDK_OFFSET(0xB0CC860)
#define AAKADBDHKBJ_ELPLIEIMKLP_OFFSET UNITYSDK_OFFSET(0xB0C9E00)
#define AAKADBDHKBJ_FLHJANAEFPD_OFFSET UNITYSDK_OFFSET(0xB0C9420)
#define AAKADBDHKBJ_HHNLHNLMOOP_OFFSET UNITYSDK_OFFSET(0xB0C9560)
#define AAKADBDHKBJ_JBEEAGGCPBN_OFFSET UNITYSDK_OFFSET(0xB0C9F70)
#define AAKADBDHKBJ_JLJHDFCACEK_OFFSET UNITYSDK_OFFSET(0xB0C92E0)
#define AAKADBDHKBJ_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xB0C9E70)
#define AAKADBDHKBJ_LEHBHLNLJLA_OFFSET UNITYSDK_OFFSET(0xB0CC1C0)
#define AAKADBDHKBJ_LKOLGOMMJGP_OFFSET UNITYSDK_OFFSET(0xB0CA2A0)
#define AAKADBDHKBJ_MIKNNKNOFGP_OFFSET UNITYSDK_OFFSET(0xB0CBC70)
#define AAKADBDHKBJ_OBNGNACMJMF_OFFSET UNITYSDK_OFFSET(0xB0C9390)
#define AAKADBDHKBJ_ODCCJALEBHI_OFFSET UNITYSDK_OFFSET(0xB0C98A0)
#define AAKADBDHKBJ_OHOHMBFCJFO_OFFSET UNITYSDK_OFFSET(0xB0CC4B0)
#define AAKADBDHKBJ_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xB0C94C0)
#define AAKADBDHKBJ_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xB0C9510)
#define AAKADBDHKBJ_PBNENLPLHGN_OFFSET UNITYSDK_OFFSET(0xB0C9ED0)
#define AAKADBDHKBJ_PEGBGHGGAMP_OFFSET UNITYSDK_OFFSET(0xB0C9A50)
#define AAKADBDHKBJ_TICK_OFFSET UNITYSDK_OFFSET(0xB0C9CE0)

inline static constexpr unsigned int AAKADBDHKBJ_TypeDefinitionIndex = 53672;

	class AAKADBDHKBJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GFGGHEHEJKC*>* NEBDHCDMKMK; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Collections::Generic::List_1<::GFGGHEHEJKC*>* EIHIOGOPLIN; // 0x20
		::System::Collections::Generic::List_1<::FPNHGPEICOG*>* KLFENJMEMJJ; // 0x28
		::System::Collections::Generic::List_1<::GFGGHEHEJKC*>* MALANKKMOJI; // 0x30
		::System::Collections::Generic::SortedDictionary_2<::System::UInt64, ::GFGGHEHEJKC*>* GDBPKCFHDMD; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* DJJJDGJBBBH; // 0x40
		::System::Collections::Generic::List_1<::FPNHGPEICOG*>* EGCELIGMFCL; // 0x48
		::System::Collections::Generic::List_1<::FPNHGPEICOG*>* DINHCHDEPMB; // 0x50
		::System::UInt32 MIBPLMILJKC; // 0x58
		::RPG::GameCore::Collision2DUpdateType KFMGEEHOMPO; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_CTOR_OFFSET))(this);
		}

		::System::Void JLJHDFCACEK(::LFGIBPHFIMF* a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixVec2 a3, ::RPG::MColor a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::LFGIBPHFIMF*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_JLJHDFCACEK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OBNGNACMJMF(::RPG::GameCore::FixVec2 a1, ::System::Single a2, ::RPG::MColor a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2, ::System::Single, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_OBNGNACMJMF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FLHJANAEFPD(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::MColor a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_FLHJANAEFPD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_ONPLUGINUNINIT_OFFSET))(this);
		}

		::AAKADBDHKBJ* HHNLHNLMOOP(::RPG::GameCore::Collision2DUpdateType a1)
		{
			return ((::AAKADBDHKBJ*(*)(::PVOID, ::RPG::GameCore::Collision2DUpdateType))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_HHNLHNLMOOP_OFFSET))(this, a1);
		}

		::FPNHGPEICOG* ODCCJALEBHI(::LFGIBPHFIMF* a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixVec2 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Object* a6, ::KFAAKBJKKKB* a7)
		{
			return ((::FPNHGPEICOG*(*)(::PVOID, ::LFGIBPHFIMF*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::System::UInt32, ::System::UInt32, ::System::Object*, ::KFAAKBJKKKB*))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_ODCCJALEBHI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void BOCJMAKCPOO(::FPNHGPEICOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPNHGPEICOG*))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_BOCJMAKCPOO_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_TICK_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void ELPLIEIMKLP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_ELPLIEIMKLP_OFFSET))(this, a1);
		}

		::System::Void PBNENLPLHGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_PBNENLPLHGN_OFFSET))(this);
		}

		::System::Void CIAGLGJIGAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_CIAGLGJIGAO_OFFSET))(this);
		}

		::System::Void LKOLGOMMJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_LKOLGOMMJGP_OFFSET))(this);
		}

		::System::Void AJNLGPMECBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_AJNLGPMECBM_OFFSET))(this);
		}

		::System::Void JBEEAGGCPBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_JBEEAGGCPBN_OFFSET))(this);
		}

		::System::Void CIMFPOJMNMA(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_CIMFPOJMNMA_OFFSET))(this, a1, a2);
		}

		::System::Boolean OHOHMBFCJFO(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_OHOHMBFCJFO_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 PEGBGHGGAMP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_PEGBGHGGAMP_OFFSET))(this);
		}

		::System::Void MIKNNKNOFGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_MIKNNKNOFGP_OFFSET))(this, a1);
		}

		::System::UInt64 DEJOPFDIEBA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_DEJOPFDIEBA_OFFSET))(this, a1, a2);
		}

		::GFGGHEHEJKC* LEHBHLNLJLA(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::System::Boolean a3)
		{
			return ((::GFGGHEHEJKC*(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAKADBDHKBJ_LEHBHLNLJLA_OFFSET))(this, a1, a2, a3);
		}

	};

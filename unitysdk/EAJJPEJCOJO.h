#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeTransitInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class EAJJPEJCOJO;
class ECPFBGMALIP;
class FFCGHKGDAJF;
class INBJBBGLCKJ;
class IOEPMPAKMOK;
class MJOBGAACNDC;
class NEEFLBCNHJD;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EAJJPEJCOJO_AOBHBJHANFI_OFFSET UNITYSDK_OFFSET(0x12677B30)
#define EAJJPEJCOJO_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x126780F0)
#define EAJJPEJCOJO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12677740)
#define EAJJPEJCOJO_CJMBIKABLAJ_OFFSET UNITYSDK_OFFSET(0x1267A350)
#define EAJJPEJCOJO_COCIHHDHCFH_OFFSET UNITYSDK_OFFSET(0x12677E70)
#define EAJJPEJCOJO_CTOR_OFFSET UNITYSDK_OFFSET(0x126778A0)
#define EAJJPEJCOJO_EDLOHNHBJGA_OFFSET UNITYSDK_OFFSET(0x1267B510)
#define EAJJPEJCOJO_FPMOEHJELID_OFFSET UNITYSDK_OFFSET(0x126776A0)
#define EAJJPEJCOJO_IOIBKLGAAIN_OFFSET UNITYSDK_OFFSET(0x12678F40)
#define EAJJPEJCOJO_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x126776F0)
#define EAJJPEJCOJO_JEGJJJMHIFG_1_OFFSET UNITYSDK_OFFSET(0x1267B3B0)
#define EAJJPEJCOJO_JEGJJJMHIFG_OFFSET UNITYSDK_OFFSET(0x1267A8A0)
#define EAJJPEJCOJO_JMDJIJGINKE_OFFSET UNITYSDK_OFFSET(0x126787D0)
#define EAJJPEJCOJO_KGDHENNMJEM_OFFSET UNITYSDK_OFFSET(0x1267AE70)
#define EAJJPEJCOJO_KNHOFHJILJC_1_OFFSET UNITYSDK_OFFSET(0x1267A1E0)
#define EAJJPEJCOJO_KNHOFHJILJC_OFFSET UNITYSDK_OFFSET(0x1267A0F0)
#define EAJJPEJCOJO_LCPMHLKPCOK_OFFSET UNITYSDK_OFFSET(0x126799F0)
#define EAJJPEJCOJO_LHBJIIEPBOA_OFFSET UNITYSDK_OFFSET(0x126781E0)
#define EAJJPEJCOJO_MKCPLHDEFLM_OFFSET UNITYSDK_OFFSET(0x1267A610)
#define EAJJPEJCOJO_NBMNLDNBDHA_OFFSET UNITYSDK_OFFSET(0x12677DD0)
#define EAJJPEJCOJO_OOOBDPNPPPO_OFFSET UNITYSDK_OFFSET(0x12677AE0)
#define EAJJPEJCOJO_PIKMPBOALOD_OFFSET UNITYSDK_OFFSET(0x1267A260)
#define EAJJPEJCOJO_PKFIOFAAMGC_OFFSET UNITYSDK_OFFSET(0x12677E20)
#define EAJJPEJCOJO___ISHASSAMECONNECTPOINTKEYINREVERSETRANSINFOS_B__26_0_OFFSET UNITYSDK_OFFSET(0x1267BB80)

inline static constexpr unsigned int EAJJPEJCOJO_TypeDefinitionIndex = 74561;

	class EAJJPEJCOJO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* AFOPLGLPMKK; // 0x10
		::System::Collections::Generic::List_1<::MJOBGAACNDC*>* PFEMNCLFFDI; // 0x18
		::ECPFBGMALIP* DADODJLAHKN; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* KADGKBFMELL; // 0x28
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x30
		::System::Void _ctor(::FFCGHKGDAJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::IMapDataSource* FPMOEHJELID()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_FPMOEHJELID_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavSpaceType JBIOGKPHKKC()
		{
			return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_JBIOGKPHKKC_OFFSET))(this);
		}

		static ::EAJJPEJCOJO* BPLPBPMEODA(::FFCGHKGDAJF* a1)
		{
			return ((::EAJJPEJCOJO*(*)(::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean COCIHHDHCFH(::INBJBBGLCKJ* a1, ::IOEPMPAKMOK* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INBJBBGLCKJ*, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_COCIHHDHCFH_OFFSET))(this, a1, a2);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void OOOBDPNPPPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_OOOBDPNPPPO_OFFSET))(this);
		}

		::System::Void LHBJIIEPBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_LHBJIIEPBOA_OFFSET))(this);
		}

		::System::Void JMDJIJGINKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_JMDJIJGINKE_OFFSET))(this);
		}

		::System::Void AOBHBJHANFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_AOBHBJHANFI_OFFSET))(this);
		}

		::System::Void NBMNLDNBDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_NBMNLDNBDHA_OFFSET))(this);
		}

		::System::Void IOIBKLGAAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_IOIBKLGAAIN_OFFSET))(this);
		}

		::System::Void KNHOFHJILJC(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_KNHOFHJILJC_OFFSET))(this, a1, a2);
		}

		::System::Void KNHOFHJILJC_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_KNHOFHJILJC_1_OFFSET))(this, a1, a2);
		}

		::System::Void LCPMHLKPCOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_LCPMHLKPCOK_OFFSET))(this);
		}

		::System::Void PKFIOFAAMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_PKFIOFAAMGC_OFFSET))(this);
		}

		::System::Void PIKMPBOALOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_PIKMPBOALOD_OFFSET))(this);
		}

		::System::Void CJMBIKABLAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_CJMBIKABLAJ_OFFSET))(this);
		}

		::System::Boolean MKCPLHDEFLM(::RPG::GameCore::LevelNavNodeTransitInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeTransitInfo))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_MKCPLHDEFLM_OFFSET))(this, a1);
		}

		::System::Boolean JEGJJJMHIFG(::RPG::GameCore::LevelNavNodeTransitInfo a1, ::NEEFLBCNHJD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeTransitInfo, ::NEEFLBCNHJD*))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_JEGJJJMHIFG_OFFSET))(this, a1, a2);
		}

		::System::Boolean JEGJJJMHIFG_1(::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*, ::System::String*))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_JEGJJJMHIFG_1_OFFSET))(this, a1, a2);
		}

		::System::Void EDLOHNHBJGA(::RPG::GameCore::LevelNavNodeTransitInfo a1, ::NEEFLBCNHJD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeTransitInfo, ::NEEFLBCNHJD*))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_EDLOHNHBJGA_OFFSET))(this, a1, a2);
		}

		::System::Boolean KGDHENNMJEM(::RPG::GameCore::LevelNavNodeTransitInfo a1, ::NEEFLBCNHJD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeTransitInfo, ::NEEFLBCNHJD*))((::PBYTE)hIl2Cpp + EAJJPEJCOJO_KGDHENNMJEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean __IsHasSameConnectPointKeyInReverseTransInfos_b__26_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO___ISHASSAMECONNECTPOINTKEYINREVERSETRANSINFOS_B__26_0_OFFSET))(this);
		}

	};

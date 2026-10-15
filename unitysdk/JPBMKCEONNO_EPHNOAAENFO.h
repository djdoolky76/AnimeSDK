#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class EHJCIMNBLOD;
class EIKBBAPBBAB;
class HGANMGEOOCC;
class MNIKFAGNMCJ;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPBMKCEONNO_EPHNOAAENFO_AMLLDAJIPHM_OFFSET UNITYSDK_OFFSET(0xB2B3110)
#define JPBMKCEONNO_EPHNOAAENFO_APCINIFLOPJ_OFFSET UNITYSDK_OFFSET(0xB2B2A30)
#define JPBMKCEONNO_EPHNOAAENFO_CFNDFFIOGNA_OFFSET UNITYSDK_OFFSET(0xB2B2CF0)
#define JPBMKCEONNO_EPHNOAAENFO_CJGJDNDJCBF_OFFSET UNITYSDK_OFFSET(0xB2B04C0)
#define JPBMKCEONNO_EPHNOAAENFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B00D0)
#define JPBMKCEONNO_EPHNOAAENFO_DLFJGFAMNDF_OFFSET UNITYSDK_OFFSET(0xB2B2100)
#define JPBMKCEONNO_EPHNOAAENFO_DPHNLLBLBGH_OFFSET UNITYSDK_OFFSET(0xB2B2740)
#define JPBMKCEONNO_EPHNOAAENFO_EIPDHEDNGMH_OFFSET UNITYSDK_OFFSET(0xB2B2540)
#define JPBMKCEONNO_EPHNOAAENFO_EKCPIHJOIJE_OFFSET UNITYSDK_OFFSET(0xB2B0AD0)
#define JPBMKCEONNO_EPHNOAAENFO_FPFENINGKMO_OFFSET UNITYSDK_OFFSET(0xB2B2190)
#define JPBMKCEONNO_EPHNOAAENFO_GFOALKNEGOL_OFFSET UNITYSDK_OFFSET(0xB2B3250)
#define JPBMKCEONNO_EPHNOAAENFO_GIMBPLILIHG_OFFSET UNITYSDK_OFFSET(0xB2B2340)
#define JPBMKCEONNO_EPHNOAAENFO_GPJJJLIMOPA_OFFSET UNITYSDK_OFFSET(0xB2B2450)
#define JPBMKCEONNO_EPHNOAAENFO_HEJOLKOJJPC_OFFSET UNITYSDK_OFFSET(0xB2B06A0)
#define JPBMKCEONNO_EPHNOAAENFO_HGLNNHALJNO_OFFSET UNITYSDK_OFFSET(0xB2B1860)
#define JPBMKCEONNO_EPHNOAAENFO_HLIFDHJICAD_OFFSET UNITYSDK_OFFSET(0xB2B1A80)
#define JPBMKCEONNO_EPHNOAAENFO_IBCGEDECHDE_OFFSET UNITYSDK_OFFSET(0xB2B1280)
#define JPBMKCEONNO_EPHNOAAENFO_ICKKKLACGHC_OFFSET UNITYSDK_OFFSET(0xB2B21D0)
#define JPBMKCEONNO_EPHNOAAENFO_IMECJCFHNOF_OFFSET UNITYSDK_OFFSET(0xB2B1C70)
#define JPBMKCEONNO_EPHNOAAENFO_INIIEGABEOA_OFFSET UNITYSDK_OFFSET(0xB2B3B10)
#define JPBMKCEONNO_EPHNOAAENFO_KJBICPFEBHC_OFFSET UNITYSDK_OFFSET(0xB2B3890)
#define JPBMKCEONNO_EPHNOAAENFO_NKKPKABGGHN_OFFSET UNITYSDK_OFFSET(0xB2B34B0)
#define JPBMKCEONNO_EPHNOAAENFO_PBFOHPINBLG_OFFSET UNITYSDK_OFFSET(0xB2B2EC0)

inline static constexpr unsigned int JPBMKCEONNO_EPHNOAAENFO_TypeDefinitionIndex = 57619;

	class JPBMKCEONNO_EPHNOAAENFO : public ::System::Object
	{
	public:
		::MNIKFAGNMCJ* EHMGEFNKCHA; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint>* JLMDEHPGAOP; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CJIAIHGIIBF; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* OOBGJFKMOHD; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* CPBMHPNFHCP; // 0x30
		::RPG::GameCore::FixPoint BNMAMHMLNOF; // 0x38
		::RPG::GameCore::FixPoint PMKILFJDPLB; // 0x40
		::RPG::GameCore::FixPoint PHLNKEHCOFA; // 0x48
		::RPG::GameCore::FixPoint NKKKKPNPAHM; // 0x50
		::System::Boolean DLGFMPNEHGO; // 0x58
		::System::Boolean HLEIFCEGIKL; // 0x59
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FixPoint MCNAENIBFFH; // 0x60
		::System::Void _ctor(::MNIKFAGNMCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNIKFAGNMCJ*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void EKCPIHJOIJE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_EKCPIHJOIJE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GIMBPLILIHG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_GIMBPLILIHG_OFFSET))(this, a1);
		}

		::System::Boolean IBCGEDECHDE(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_IBCGEDECHDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CJGJDNDJCBF(::EHJCIMNBLOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHJCIMNBLOD*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_CJGJDNDJCBF_OFFSET))(this, a1);
		}

		::HGANMGEOOCC* ICKKKLACGHC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::HGANMGEOOCC*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_ICKKKLACGHC_OFFSET))(this, a1);
		}

		::System::Void HEJOLKOJJPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_HEJOLKOJJPC_OFFSET))(this);
		}

		::System::Void HGLNNHALJNO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_HGLNNHALJNO_OFFSET))(this, a1);
		}

		::System::Void HLIFDHJICAD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_HLIFDHJICAD_OFFSET))(this, a1);
		}

		::System::Void IMECJCFHNOF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_IMECJCFHNOF_OFFSET))(this, a1);
		}

		::System::Void DLFJGFAMNDF(::EIKBBAPBBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIKBBAPBBAB*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_DLFJGFAMNDF_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint EIPDHEDNGMH()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_EIPDHEDNGMH_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GPJJJLIMOPA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_GPJJJLIMOPA_OFFSET))(this);
		}

		::System::Void FPFENINGKMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_FPFENINGKMO_OFFSET))(this);
		}

		::System::Void APCINIFLOPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_APCINIFLOPJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GFOALKNEGOL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_GFOALKNEGOL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PBFOHPINBLG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_PBFOHPINBLG_OFFSET))(this, a1);
		}

		::System::UInt32 DPHNLLBLBGH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_DPHNLLBLBGH_OFFSET))(this, a1);
		}

		::System::Void CFNDFFIOGNA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_CFNDFFIOGNA_OFFSET))(this, a1, a2);
		}

		::System::Void AMLLDAJIPHM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_AMLLDAJIPHM_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint KJBICPFEBHC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_KJBICPFEBHC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint INIIEGABEOA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_INIIEGABEOA_OFFSET))(this, a1, a2);
		}

		::System::Void NKKPKABGGHN(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JPBMKCEONNO_EPHNOAAENFO_NKKPKABGGHN_OFFSET))(this, a1, a2, a3);
		}

	};

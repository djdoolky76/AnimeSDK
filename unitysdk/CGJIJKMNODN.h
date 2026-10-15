#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
class JODOCGMOPJJ;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CGJIJKMNODN_CIHMAFEBEIK_OFFSET UNITYSDK_OFFSET(0x1C8E3A90)
#define CGJIJKMNODN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E1350)
#define CGJIJKMNODN_DPFOFDBHNMC_OFFSET UNITYSDK_OFFSET(0x1C8E3960)
#define CGJIJKMNODN_EFMDLDPINIL_OFFSET UNITYSDK_OFFSET(0x1C8E1960)
#define CGJIJKMNODN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8E13D0)
#define CGJIJKMNODN_FGDNBMCBANC_OFFSET UNITYSDK_OFFSET(0x1C8E1E00)
#define CGJIJKMNODN_GEHIJLEDCCI_OFFSET UNITYSDK_OFFSET(0x1C8E44B0)
#define CGJIJKMNODN_HGBIBKHENAI_OFFSET UNITYSDK_OFFSET(0x1C8E1560)
#define CGJIJKMNODN_HMCDLICJPFL_OFFSET UNITYSDK_OFFSET(0x1C8E2960)
#define CGJIJKMNODN_IIFODFKIEGE_OFFSET UNITYSDK_OFFSET(0x1C8E1FB0)
#define CGJIJKMNODN_LDBILLGKEBF_OFFSET UNITYSDK_OFFSET(0x1C8E23E0)
#define CGJIJKMNODN_LFELGAMFHHD_OFFSET UNITYSDK_OFFSET(0x1C8E22A0)
#define CGJIJKMNODN_LOLKDEJOGJH_OFFSET UNITYSDK_OFFSET(0x1C8E45F0)
#define CGJIJKMNODN_MDANBOEGAFH_OFFSET UNITYSDK_OFFSET(0x1C8E3100)
#define CGJIJKMNODN_MLIDOPEKIHJ_OFFSET UNITYSDK_OFFSET(0x1C8E4170)
#define CGJIJKMNODN_OPPCPBBFLJL_OFFSET UNITYSDK_OFFSET(0x1C8E1600)
#define CGJIJKMNODN_PLLJFFGFOHP_OFFSET UNITYSDK_OFFSET(0x1C8E3B60)
#define CGJIJKMNODN_PPGCJBEPDMI_OFFSET UNITYSDK_OFFSET(0x1C8E2B80)
#define CGJIJKMNODN___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C8E46C0)

inline static constexpr unsigned int CGJIJKMNODN_TypeDefinitionIndex = 42301;

	class CGJIJKMNODN : public ::System::Object
	{
	public:
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x10
		::System::Func_2<::System::ValueTuple, ::System::Boolean>* CKCDEDKJKEE; // 0x18
		::FDPALAEIHPB* FKINCGODJEP; // 0x20
		::RPG::GameCore::MatchThreePropType PCKPIJADNLP; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + CGJIJKMNODN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJIJKMNODN_EXECUTE_OFFSET))(this);
		}

		::System::Void OPPCPBBFLJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJIJKMNODN_OPPCPBBFLJL_OFFSET))(this);
		}

		::System::Boolean EFMDLDPINIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJIJKMNODN_EFMDLDPINIL_OFFSET))(this);
		}

		::System::Void IIFODFKIEGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGJIJKMNODN_IIFODFKIEGE_OFFSET))(this, a1);
		}

		::System::Boolean HMCDLICJPFL(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CGJIJKMNODN_HMCDLICJPFL_OFFSET))(this, a1, a2);
		}

		::System::Boolean PPGCJBEPDMI(::RPG::GameCore::MatchThreePropType a1, ::System::ValueTuple a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CGJIJKMNODN_PPGCJBEPDMI_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDANBOEGAFH(::RPG::GameCore::MatchThreePropType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::UInt32))((::PBYTE)hIl2Cpp + CGJIJKMNODN_MDANBOEGAFH_OFFSET))(this, a1, a2);
		}

		::System::Boolean DPFOFDBHNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJIJKMNODN_DPFOFDBHNMC_OFFSET))(this);
		}

		::System::Boolean LFELGAMFHHD(::System::ValueTuple a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple, ::System::Boolean))((::PBYTE)hIl2Cpp + CGJIJKMNODN_LFELGAMFHHD_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDBILLGKEBF(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CGJIJKMNODN_LDBILLGKEBF_OFFSET))(this, a1);
		}

		::System::Boolean CIHMAFEBEIK(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CGJIJKMNODN_CIHMAFEBEIK_OFFSET))(this, a1);
		}

		::System::Boolean PLLJFFGFOHP(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CGJIJKMNODN_PLLJFFGFOHP_OFFSET))(this, a1);
		}

		::System::Boolean MLIDOPEKIHJ(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CGJIJKMNODN_MLIDOPEKIHJ_OFFSET))(this, a1);
		}

		::System::UInt32 LOLKDEJOGJH(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGJIJKMNODN_LOLKDEJOGJH_OFFSET))(this, a1);
		}

		::System::Void GEHIJLEDCCI(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CGJIJKMNODN_GEHIJLEDCCI_OFFSET))(this, a1, a2);
		}

		::System::Void FGDNBMCBANC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJIJKMNODN_FGDNBMCBANC_OFFSET))(this);
		}

		::JODOCGMOPJJ* HGBIBKHENAI()
		{
			return ((::JODOCGMOPJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJIJKMNODN_HGBIBKHENAI_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0_0(::System::ValueTuple a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CGJIJKMNODN___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};

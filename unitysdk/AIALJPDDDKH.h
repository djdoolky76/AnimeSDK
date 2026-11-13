#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIALJPDDDKH_EOperationAbortReason.h"
#include "unitysdk/INGNCPPMOFG.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIALJPDDDKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B2EFB0)
#define AIALJPDDDKH_CTOR_OFFSET UNITYSDK_OFFSET(0x19B2EE60)
#define AIALJPDDDKH_DGGPJBDJDGL_OFFSET UNITYSDK_OFFSET(0x19B31890)
#define AIALJPDDDKH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B2F050)
#define AIALJPDDDKH_DKEKCIJCPAC_OFFSET UNITYSDK_OFFSET(0x19B30B40)
#define AIALJPDDDKH_EHAMHCIPOFO_OFFSET UNITYSDK_OFFSET(0x19B31280)
#define AIALJPDDDKH_FLJIMOGDIMK_OFFSET UNITYSDK_OFFSET(0x19B30910)
#define AIALJPDDDKH_GBBBJKFEANP_OFFSET UNITYSDK_OFFSET(0x19B2EF00)
#define AIALJPDDDKH_GET_BATTLEGAMEPHASEREF_OFFSET UNITYSDK_OFFSET(0x19B31F40)
#define AIALJPDDDKH_GET_OPERATIONS_OFFSET UNITYSDK_OFFSET(0x19B31F60)
#define AIALJPDDDKH_GET__BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0x19B31F80)
#define AIALJPDDDKH_GHDDKPJFJBN_OFFSET UNITYSDK_OFFSET(0x19B31410)
#define AIALJPDDDKH_GODFMHKKEGF_OFFSET UNITYSDK_OFFSET(0x19B31B80)
#define AIALJPDDDKH_HJPMIFLGCHB_OFFSET UNITYSDK_OFFSET(0x19B2F1B0)
#define AIALJPDDDKH_HLEPLILPJNA_OFFSET UNITYSDK_OFFSET(0x19B30A20)
#define AIALJPDDDKH_IEDFGAHMKAH_OFFSET UNITYSDK_OFFSET(0x19B30470)
#define AIALJPDDDKH_IGLMLJAFAFH_OFFSET UNITYSDK_OFFSET(0x19B2FBC0)
#define AIALJPDDDKH_JBGIGGDICEI_OFFSET UNITYSDK_OFFSET(0x19B2F150)
#define AIALJPDDDKH_JEFNMHHGDPP_OFFSET UNITYSDK_OFFSET(0x19B2F620)
#define AIALJPDDDKH_JJAJMNHGIIL_OFFSET UNITYSDK_OFFSET(0x19B30AB0)
#define AIALJPDDDKH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19B2F0C0)
#define AIALJPDDDKH_KAGMJCEMJFB_OFFSET UNITYSDK_OFFSET(0x19B2EF60)
#define AIALJPDDDKH_KDPNCEEGNDD_OFFSET UNITYSDK_OFFSET(0x19B30D60)
#define AIALJPDDDKH_KGHMMEGFGND_OFFSET UNITYSDK_OFFSET(0x19B2F860)
#define AIALJPDDDKH_KJCHELDAJEB_OFFSET UNITYSDK_OFFSET(0x19B305F0)
#define AIALJPDDDKH_LACEJOBKNPC_OFFSET UNITYSDK_OFFSET(0x19B316B0)
#define AIALJPDDDKH_LKCCANBGCBJ_OFFSET UNITYSDK_OFFSET(0x19B31500)
#define AIALJPDDDKH_MGIOJLIICGK_OFFSET UNITYSDK_OFFSET(0x19B30560)
#define AIALJPDDDKH_NMBJOAEDMMG_OFFSET UNITYSDK_OFFSET(0x19B2FA00)
#define AIALJPDDDKH_NPCOGGCCPGA_OFFSET UNITYSDK_OFFSET(0x19B315C0)
#define AIALJPDDDKH_OBGCLNLKHND_OFFSET UNITYSDK_OFFSET(0x19B2F670)
#define AIALJPDDDKH_OFFGKJPMMAA_OFFSET UNITYSDK_OFFSET(0x19B309A0)
#define AIALJPDDDKH_OFIAHKNFGDM_OFFSET UNITYSDK_OFFSET(0x19B31090)
#define AIALJPDDDKH_OKJNHGHELHO_OFFSET UNITYSDK_OFFSET(0x19B31D30)
#define AIALJPDDDKH_PAGHKOBCJGC_OFFSET UNITYSDK_OFFSET(0x19B2FDE0)
#define AIALJPDDDKH_PBFOFJCJMLL_OFFSET UNITYSDK_OFFSET(0x19B2F7C0)
#define AIALJPDDDKH_PBPLBILGIJH_OFFSET UNITYSDK_OFFSET(0x19B31A40)
#define AIALJPDDDKH_PIBFJDMHKJL_OFFSET UNITYSDK_OFFSET(0x19B317E0)
#define AIALJPDDDKH_SET_BATTLEGAMEPHASEREF_OFFSET UNITYSDK_OFFSET(0x19B31F50)
#define AIALJPDDDKH_SET_OPERATIONS_OFFSET UNITYSDK_OFFSET(0x19B31F70)
#define AIALJPDDDKH_SET__BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0x19B31F90)

inline static constexpr unsigned int AIALJPDDDKH_TypeDefinitionIndex = 60259;

	class AIALJPDDDKH : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleInstance* __BattleInstanceRef_k__BackingField; // 0x10
		::RPG::Client::BattleGamePhase* _BattleGamePhaseRef_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::INGNCPPMOFG>* _Operations_k__BackingField; // 0x20
		::System::Nullable_1<::INGNCPPMOFG> IEKEDAEKPNO; // 0x28
		::System::Byte _padding0[0x30];
		::System::Int32 EBDMAPCCHAP; // 0x60
		::System::Boolean PIIPAJLAMCH; // 0x64
		::System::Boolean MMOONEJGONB; // 0x65
		::System::Byte _padding1[0x2];
		::System::Int32 BELFBDIMOBG; // 0x68
		::System::Void _ctor(::System::Collections::Generic::List_1<::INGNCPPMOFG>* a1, ::RPG::GameCore::BattleInstance* a2, ::RPG::Client::BattleGamePhase* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::INGNCPPMOFG>*, ::RPG::GameCore::BattleInstance*, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + AIALJPDDDKH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::INGNCPPMOFG>* a1, ::RPG::GameCore::BattleInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::INGNCPPMOFG>*, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + AIALJPDDDKH_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIALJPDDDKH_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIALJPDDDKH_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void KAGMJCEMJFB(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + AIALJPDDDKH_KAGMJCEMJFB_OFFSET))(this, a1);
		}

		::System::Void JBGIGGDICEI(::RPG::GameCore::OperationTypeMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OperationTypeMask))((::PBYTE)hIl2Cpp + AIALJPDDDKH_JBGIGGDICEI_OFFSET))(this, a1);
		}

		::System::Boolean JEFNMHHGDPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIALJPDDDKH_JEFNMHHGDPP_OFFSET))(this);
		}

		::System::Void GBBBJKFEANP(::System::Collections::Generic::List_1<::INGNCPPMOFG>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::INGNCPPMOFG>*))((::PBYTE)hIl2Cpp + AIALJPDDDKH_GBBBJKFEANP_OFFSET))(this, a1);
		}

		::System::Boolean HJPMIFLGCHB(::RPG::GameCore::OperationTypeMask a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OperationTypeMask))((::PBYTE)hIl2Cpp + AIALJPDDDKH_HJPMIFLGCHB_OFFSET))(this, a1);
		}

		::System::Void MGIOJLIICGK(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_MGIOJLIICGK_OFFSET))(this, a1);
		}

		::System::Void IEDFGAHMKAH(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_IEDFGAHMKAH_OFFSET))(this, a1);
		}

		::System::Boolean PBFOFJCJMLL(::INGNCPPMOFG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_PBFOFJCJMLL_OFFSET))(this, a1);
		}

		::AIALJPDDDKH_EOperationAbortReason OBGCLNLKHND(::INGNCPPMOFG a1, ::RPG::GameCore::OperationTypeMask a2)
		{
			return ((::AIALJPDDDKH_EOperationAbortReason(*)(::PVOID, ::INGNCPPMOFG, ::RPG::GameCore::OperationTypeMask))((::PBYTE)hIl2Cpp + AIALJPDDDKH_OBGCLNLKHND_OFFSET))(this, a1, a2);
		}

		::System::Boolean NMBJOAEDMMG(::INGNCPPMOFG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_NMBJOAEDMMG_OFFSET))(this, a1);
		}

		::System::Boolean IGLMLJAFAFH(::INGNCPPMOFG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_IGLMLJAFAFH_OFFSET))(this, a1);
		}

		::System::Boolean KGHMMEGFGND(::INGNCPPMOFG a1, ::RPG::GameCore::OperationTypeMask a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INGNCPPMOFG, ::RPG::GameCore::OperationTypeMask))((::PBYTE)hIl2Cpp + AIALJPDDDKH_KGHMMEGFGND_OFFSET))(this, a1, a2);
		}

		::System::Void KJCHELDAJEB(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_KJCHELDAJEB_OFFSET))(this, a1);
		}

		::System::Void FLJIMOGDIMK(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_FLJIMOGDIMK_OFFSET))(this, a1);
		}

		::System::Void OFFGKJPMMAA(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_OFFGKJPMMAA_OFFSET))(this, a1);
		}

		::System::Void HLEPLILPJNA(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_HLEPLILPJNA_OFFSET))(this, a1);
		}

		::System::Void JJAJMNHGIIL(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_JJAJMNHGIIL_OFFSET))(this, a1);
		}

		::System::Void DKEKCIJCPAC(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_DKEKCIJCPAC_OFFSET))(this, a1);
		}

		::System::Void KDPNCEEGNDD(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_KDPNCEEGNDD_OFFSET))(this, a1);
		}

		::System::Void OFIAHKNFGDM(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_OFIAHKNFGDM_OFFSET))(this, a1);
		}

		::System::Void EHAMHCIPOFO(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_EHAMHCIPOFO_OFFSET))(this, a1);
		}

		::System::Void GHDDKPJFJBN(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_GHDDKPJFJBN_OFFSET))(this, a1);
		}

		::System::Void LKCCANBGCBJ(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_LKCCANBGCBJ_OFFSET))(this, a1);
		}

		::System::Void NPCOGGCCPGA(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_NPCOGGCCPGA_OFFSET))(this, a1);
		}

		::System::Void LACEJOBKNPC(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_LACEJOBKNPC_OFFSET))(this, a1);
		}

		::System::Void PIBFJDMHKJL(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_PIBFJDMHKJL_OFFSET))(this, a1);
		}

		::System::Void DGGPJBDJDGL(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_DGGPJBDJDGL_OFFSET))(this, a1);
		}

		::System::Void PBPLBILGIJH(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_PBPLBILGIJH_OFFSET))(this, a1);
		}

		::System::Void GODFMHKKEGF(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_GODFMHKKEGF_OFFSET))(this, a1);
		}

		::System::Void OKJNHGHELHO(::INGNCPPMOFG a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGNCPPMOFG))((::PBYTE)hIl2Cpp + AIALJPDDDKH_OKJNHGHELHO_OFFSET))(this, a1);
		}

		::System::Void PAGHKOBCJGC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIALJPDDDKH_PAGHKOBCJGC_OFFSET))(this, a1);
		}

		::RPG::Client::BattleGamePhase* get_BattleGamePhaseRef()
		{
			return ((::RPG::Client::BattleGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIALJPDDDKH_GET_BATTLEGAMEPHASEREF_OFFSET))(this);
		}

		::System::Void set_BattleGamePhaseRef(::RPG::Client::BattleGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + AIALJPDDDKH_SET_BATTLEGAMEPHASEREF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::INGNCPPMOFG>* get_Operations()
		{
			return ((::System::Collections::Generic::List_1<::INGNCPPMOFG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIALJPDDDKH_GET_OPERATIONS_OFFSET))(this);
		}

		::System::Void set_Operations(::System::Collections::Generic::List_1<::INGNCPPMOFG>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::INGNCPPMOFG>*))((::PBYTE)hIl2Cpp + AIALJPDDDKH_SET_OPERATIONS_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleInstance* get__BattleInstanceRef()
		{
			return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIALJPDDDKH_GET__BATTLEINSTANCEREF_OFFSET))(this);
		}

		::System::Void set__BattleInstanceRef(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + AIALJPDDDKH_SET__BATTLEINSTANCEREF_OFFSET))(this, a1);
		}

	};

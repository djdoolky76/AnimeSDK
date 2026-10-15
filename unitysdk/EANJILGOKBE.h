#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EANJILGOKBE;
class GBJHJNNIFMB;
class HPKFLCMEFOI;
class MCHDMDIPBCL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EANJILGOKBE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x126839E0)
#define EANJILGOKBE_CBFBHLACLPC_OFFSET UNITYSDK_OFFSET(0x12683EB0)
#define EANJILGOKBE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x12683C00)
#define EANJILGOKBE_CTOR_OFFSET UNITYSDK_OFFSET(0x12683A70)
#define EANJILGOKBE_EECBOHAFLAP_OFFSET UNITYSDK_OFFSET(0x12684710)
#define EANJILGOKBE_EGBFJCFEJBN_OFFSET UNITYSDK_OFFSET(0x12683B00)
#define EANJILGOKBE_GET_NEEDSHOW_OFFSET UNITYSDK_OFFSET(0x12684880)
#define EANJILGOKBE_GET_TOGGLEUITOPPARAMS_OFFSET UNITYSDK_OFFSET(0x12684840)
#define EANJILGOKBE_GET_TRIGGERUITOPEFFECTPARAM_OFFSET UNITYSDK_OFFSET(0x12684860)
#define EANJILGOKBE_GJADDMAOFHC_OFFSET UNITYSDK_OFFSET(0x12684120)
#define EANJILGOKBE_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x12684380)
#define EANJILGOKBE_LHGFDOFLLBM_OFFSET UNITYSDK_OFFSET(0x12683FF0)
#define EANJILGOKBE_MBMFEMBBCJE_OFFSET UNITYSDK_OFFSET(0x12684250)
#define EANJILGOKBE_MILLEPMGMNG_OFFSET UNITYSDK_OFFSET(0x12683BB0)
#define EANJILGOKBE_NHOCLKNNDIJ_OFFSET UNITYSDK_OFFSET(0x126845E0)
#define EANJILGOKBE_OHHJCALLOEA_OFFSET UNITYSDK_OFFSET(0x126844B0)
#define EANJILGOKBE_PGFGOFPJHJP_OFFSET UNITYSDK_OFFSET(0x12683AB0)
#define EANJILGOKBE_SET_NEEDSHOW_OFFSET UNITYSDK_OFFSET(0x12684890)
#define EANJILGOKBE_SET_TOGGLEUITOPPARAMS_OFFSET UNITYSDK_OFFSET(0x12684850)
#define EANJILGOKBE_SET_TRIGGERUITOPEFFECTPARAM_OFFSET UNITYSDK_OFFSET(0x12684870)

	class EANJILGOKBE : public ::System::Object
	{
	public:
		::MCHDMDIPBCL* NBHJNGJIIEA; // 0x10
		::System::Collections::Generic::List_1<::GBJHJNNIFMB*>* _ToggleUITopParams_k__BackingField; // 0x18
		::HPKFLCMEFOI* _TriggerUITopEffectParam_k__BackingField; // 0x20
		::System::Boolean _NeedShow_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_CTOR_OFFSET))(this);
		}

		static ::EANJILGOKBE* BPLPBPMEODA(::MCHDMDIPBCL* a1)
		{
			return ((::EANJILGOKBE*(*)(::MCHDMDIPBCL*))((::PBYTE)hIl2Cpp + EANJILGOKBE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PGFGOFPJHJP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EANJILGOKBE_PGFGOFPJHJP_OFFSET))(this, a1);
		}

		::System::Void EGBFJCFEJBN(::GBJHJNNIFMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJHJNNIFMB*))((::PBYTE)hIl2Cpp + EANJILGOKBE_EGBFJCFEJBN_OFFSET))(this, a1);
		}

		::System::Void MILLEPMGMNG(::HPKFLCMEFOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKFLCMEFOI*))((::PBYTE)hIl2Cpp + EANJILGOKBE_MILLEPMGMNG_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::EANJILGOKBE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + EANJILGOKBE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean CBFBHLACLPC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EANJILGOKBE_CBFBHLACLPC_OFFSET))(this, a1);
		}

		::System::Boolean LHGFDOFLLBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_LHGFDOFLLBM_OFFSET))(this);
		}

		::System::Boolean GJADDMAOFHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_GJADDMAOFHC_OFFSET))(this);
		}

		::System::Boolean MBMFEMBBCJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_MBMFEMBBCJE_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_IAMCNOAAALI_OFFSET))(this);
		}

		::System::String* OHHJCALLOEA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_OHHJCALLOEA_OFFSET))(this);
		}

		::System::Int32 NHOCLKNNDIJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_NHOCLKNNDIJ_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* EECBOHAFLAP()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_EECBOHAFLAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GBJHJNNIFMB*>* get_ToggleUITopParams()
		{
			return ((::System::Collections::Generic::List_1<::GBJHJNNIFMB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_GET_TOGGLEUITOPPARAMS_OFFSET))(this);
		}

		::System::Void set_ToggleUITopParams(::System::Collections::Generic::List_1<::GBJHJNNIFMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GBJHJNNIFMB*>*))((::PBYTE)hIl2Cpp + EANJILGOKBE_SET_TOGGLEUITOPPARAMS_OFFSET))(this, a1);
		}

		::HPKFLCMEFOI* get_TriggerUITopEffectParam()
		{
			return ((::HPKFLCMEFOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_GET_TRIGGERUITOPEFFECTPARAM_OFFSET))(this);
		}

		::System::Void set_TriggerUITopEffectParam(::HPKFLCMEFOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKFLCMEFOI*))((::PBYTE)hIl2Cpp + EANJILGOKBE_SET_TRIGGERUITOPEFFECTPARAM_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJILGOKBE_GET_NEEDSHOW_OFFSET))(this);
		}

		::System::Void set_NeedShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EANJILGOKBE_SET_NEEDSHOW_OFFSET))(this, a1);
		}

	};

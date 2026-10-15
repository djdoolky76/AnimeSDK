#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
class FANLJJIBNJH;
class FCAFLGBOMFN;
class ODPGEKCDNCJ;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FANLJJIBNJH_BLNODHGPHIP_OFFSET UNITYSDK_OFFSET(0x1567B9A0)
#define FANLJJIBNJH_BOCMDPBHPLB_OFFSET UNITYSDK_OFFSET(0x1567B880)
#define FANLJJIBNJH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1567B1D0)
#define FANLJJIBNJH_CCLHPIFFMCP_OFFSET UNITYSDK_OFFSET(0x1567B810)
#define FANLJJIBNJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1567B2A0)
#define FANLJJIBNJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1567B480)
#define FANLJJIBNJH_EMGHAJAHCOE_OFFSET UNITYSDK_OFFSET(0x1567B700)
#define FANLJJIBNJH_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x1567BA60)
#define FANLJJIBNJH_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1567BA80)
#define FANLJJIBNJH_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x1567B510)
#define FANLJJIBNJH_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x1567B5F0)
#define FANLJJIBNJH_ONJICMEONGF_OFFSET UNITYSDK_OFFSET(0x1567B660)
#define FANLJJIBNJH_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0x1567B2B0)
#define FANLJJIBNJH_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x1567BA70)
#define FANLJJIBNJH_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1567BA90)

inline static constexpr unsigned int FANLJJIBNJH_TypeDefinitionIndex = 71698;

	class FANLJJIBNJH : public ::System::Object
	{
	public:
		::System::Action_1<::FCAFLGBOMFN*>* JLBLEBFNIIM; // 0x10
		::System::String* _UniqueName_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
		::RPG::Client::BattleShowUIPageParam* _Param_k__BackingField; // 0x28
		::System::Action_1<::FCAFLGBOMFN*>* OPHEBAAKIHB; // 0x30
		::RPG::GameCore::TurnBasedGameMode* BHJDJDPLCLP; // 0x38
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x40
		::System::Boolean EINNACFPAEN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_CTOR_OFFSET))(this);
		}

		static ::FANLJJIBNJH* BPLPBPMEODA(::ODPGEKCDNCJ* a1, ::System::Action_1<::FCAFLGBOMFN*>* a2, ::System::Action_1<::FCAFLGBOMFN*>* a3)
		{
			return ((::FANLJJIBNJH*(*)(::ODPGEKCDNCJ*, ::System::Action_1<::FCAFLGBOMFN*>*, ::System::Action_1<::FCAFLGBOMFN*>*))((::PBYTE)hIl2Cpp + FANLJJIBNJH_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_DISPOSE_OFFSET))(this);
		}

		::System::Void ONJICMEONGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_ONJICMEONGF_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void BOCMDPBHPLB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FANLJJIBNJH_BOCMDPBHPLB_OFFSET))(this, a1);
		}

		::System::Boolean EMGHAJAHCOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_EMGHAJAHCOE_OFFSET))(this);
		}

		::System::Boolean BLNODHGPHIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FANLJJIBNJH_BLNODHGPHIP_OFFSET))(this, a1);
		}

		::System::Void CCLHPIFFMCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_CCLHPIFFMCP_OFFSET))(this);
		}

		::System::Void OCCIFHOEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_OCCIFHOEJMI_OFFSET))(this);
		}

		::RPG::Client::BattleShowUIPageParam* get_Param()
		{
			return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::RPG::Client::BattleShowUIPageParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + FANLJJIBNJH_SET_PARAM_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANLJJIBNJH_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FANLJJIBNJH_SET_UNIQUENAME_OFFSET))(this, a1);
		}

	};

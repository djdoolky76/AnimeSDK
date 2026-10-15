#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class JMCHDIEPEJP;
namespace RPG::Client { class HeartDialScriptInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelHeartDialNPCConfig; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMMEIHJOHGJ_ABHHCHEOMDJ_OFFSET UNITYSDK_OFFSET(0xBF328D0)
#define OMMEIHJOHGJ_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0xBF336B0)
#define OMMEIHJOHGJ_BMNKPFGLFBN_OFFSET UNITYSDK_OFFSET(0xBF33530)
#define OMMEIHJOHGJ_CBMDCHCDFGP_OFFSET UNITYSDK_OFFSET(0xBF33010)
#define OMMEIHJOHGJ_CMIMNIKFMMN_OFFSET UNITYSDK_OFFSET(0xBF33C10)
#define OMMEIHJOHGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBF328A0)
#define OMMEIHJOHGJ_DAKKNIMBNME_OFFSET UNITYSDK_OFFSET(0xBF33A40)
#define OMMEIHJOHGJ_DGPPJOKEKAP_OFFSET UNITYSDK_OFFSET(0xBF33890)
#define OMMEIHJOHGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF32A90)
#define OMMEIHJOHGJ_FIPCAAPFIOD_OFFSET UNITYSDK_OFFSET(0xBF33440)
#define OMMEIHJOHGJ_FLFABNEAOEO_OFFSET UNITYSDK_OFFSET(0xBF32BF0)
#define OMMEIHJOHGJ_GET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0xBF327E0)
#define OMMEIHJOHGJ_GET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0xBF32800)
#define OMMEIHJOHGJ_GET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0xBF327C0)
#define OMMEIHJOHGJ_HBJLIIJNCLP_OFFSET UNITYSDK_OFFSET(0xBF32860)
#define OMMEIHJOHGJ_HEKKBIHMABB_OFFSET UNITYSDK_OFFSET(0xBF33340)
#define OMMEIHJOHGJ_IABOGIGNHNJ_OFFSET UNITYSDK_OFFSET(0xBF32820)
#define OMMEIHJOHGJ_IMGHABJMLFD_OFFSET UNITYSDK_OFFSET(0xBF33980)
#define OMMEIHJOHGJ_IMPHBBFJKDD_OFFSET UNITYSDK_OFFSET(0xBF32DB0)
#define OMMEIHJOHGJ_JLIONLENCJF_OFFSET UNITYSDK_OFFSET(0xBF332F0)
#define OMMEIHJOHGJ_MAHLPCAONCE_OFFSET UNITYSDK_OFFSET(0xBF32C80)
#define OMMEIHJOHGJ_MOHDIFANDEA_OFFSET UNITYSDK_OFFSET(0xBF33060)
#define OMMEIHJOHGJ_PFDMIJEFNFL_OFFSET UNITYSDK_OFFSET(0xBF33630)
#define OMMEIHJOHGJ_PJDIKMLKLPA_OFFSET UNITYSDK_OFFSET(0xBF33130)
#define OMMEIHJOHGJ_POHKIAKJNJC_OFFSET UNITYSDK_OFFSET(0xBF339F0)
#define OMMEIHJOHGJ_SET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0xBF327F0)
#define OMMEIHJOHGJ_SET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0xBF32810)
#define OMMEIHJOHGJ_SET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0xBF327D0)

inline static constexpr unsigned int OMMEIHJOHGJ_TypeDefinitionIndex = 65658;

	class OMMEIHJOHGJ : public ::System::Object
	{
	public:
		::JMCHDIEPEJP* IPJLCHPGFKM; // 0x10
		::RPG::GameCore::GameLevelHeartDialNPCConfig* OLMHBMPGAKC; // 0x18
		::RPG::Client::HeartDialScriptInfo* _currentScript_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* _EmoBlackList_k__BackingField; // 0x28
		::RPG::GameCore::GameEntity* AFIMBNIENJM; // 0x30
		::RPG::Client::MapNpcDef* IIFECJIKIKN; // 0x38
		::System::ValueTuple KBPOHLKBJFJ; // 0x40
		::System::UInt32 _NpcServerID_k__BackingField; // 0x48
		::System::Boolean GEEIKIACBBE; // 0x4C
		::System::Void _ctor(::RPG::GameCore::GameLevelHeartDialNPCConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialNPCConfig*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_NpcServerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_GET_NPCSERVERID_OFFSET))(this);
		}

		::System::Void set_NpcServerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_SET_NPCSERVERID_OFFSET))(this, a1);
		}

		::RPG::Client::HeartDialScriptInfo* get_currentScript()
		{
			return ((::RPG::Client::HeartDialScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_GET_CURRENTSCRIPT_OFFSET))(this);
		}

		::System::Void set_currentScript(::RPG::Client::HeartDialScriptInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_SET_CURRENTSCRIPT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* get_EmoBlackList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_GET_EMOBLACKLIST_OFFSET))(this);
		}

		::System::Void set_EmoBlackList(::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_SET_EMOBLACKLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* IABOGIGNHNJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_IABOGIGNHNJ_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* HBJLIIJNCLP()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_HBJLIIJNCLP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void MAHLPCAONCE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_MAHLPCAONCE_OFFSET))(this, a1);
		}

		::System::Void CBMDCHCDFGP(::RPG::Client::HeartDialScriptInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeartDialScriptInfo*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_CBMDCHCDFGP_OFFSET))(this, a1);
		}

		::System::Void MOHDIFANDEA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_MOHDIFANDEA_OFFSET))(this, a1);
		}

		::System::Void FLFABNEAOEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_FLFABNEAOEO_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* PJDIKMLKLPA()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_PJDIKMLKLPA_OFFSET))(this);
		}

		::System::Void JLIONLENCJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_JLIONLENCJF_OFFSET))(this);
		}

		::System::Void HEKKBIHMABB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_HEKKBIHMABB_OFFSET))(this);
		}

		::System::Void FIPCAAPFIOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_FIPCAAPFIOD_OFFSET))(this);
		}

		::System::Void PFDMIJEFNFL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_PFDMIJEFNFL_OFFSET))(this, a1);
		}

		::System::Void IMGHABJMLFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_IMGHABJMLFD_OFFSET))(this);
		}

		::System::Void AGPHBLGBODG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_AGPHBLGBODG_OFFSET))(this, a1);
		}

		::System::Void DGPPJOKEKAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_DGPPJOKEKAP_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCInfoOverride* BMNKPFGLFBN(::RPG::Client::MapNpcDef* a1)
		{
			return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_BMNKPFGLFBN_OFFSET))(this, a1);
		}

		::System::Void ABHHCHEOMDJ(::RPG::GameCore::GameLevelHeartDialNPCConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameLevelHeartDialNPCConfig*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_ABHHCHEOMDJ_OFFSET))(this, a1);
		}

		::System::Void POHKIAKJNJC(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_POHKIAKJNJC_OFFSET))(this, a1);
		}

		::System::Void IMPHBBFJKDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_IMPHBBFJKDD_OFFSET))(this);
		}

		::System::Void DAKKNIMBNME(::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>*))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_DAKKNIMBNME_OFFSET))(this, a1);
		}

		::System::Void CMIMNIKFMMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_CMIMNIKFMMN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class JMCHDIEPEJP;
namespace RPG::Client { class HeartDialScriptInfo; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelHeartDialNPCConfig; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMMEIHJOHGJ_ABHHCHEOMDJ_OFFSET UNITYSDK_OFFSET(0xBF2B2B0)
#define OMMEIHJOHGJ_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0xBF2C080)
#define OMMEIHJOHGJ_BMNKPFGLFBN_OFFSET UNITYSDK_OFFSET(0xBF2BF10)
#define OMMEIHJOHGJ_CBMDCHCDFGP_OFFSET UNITYSDK_OFFSET(0xBF2B9F0)
#define OMMEIHJOHGJ_CMIMNIKFMMN_OFFSET UNITYSDK_OFFSET(0xBF2C5E0)
#define OMMEIHJOHGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2B280)
#define OMMEIHJOHGJ_DAKKNIMBNME_OFFSET UNITYSDK_OFFSET(0xBF2C410)
#define OMMEIHJOHGJ_DGPPJOKEKAP_OFFSET UNITYSDK_OFFSET(0xBF2C260)
#define OMMEIHJOHGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF2B470)
#define OMMEIHJOHGJ_FIPCAAPFIOD_OFFSET UNITYSDK_OFFSET(0xBF2BE20)
#define OMMEIHJOHGJ_FLFABNEAOEO_OFFSET UNITYSDK_OFFSET(0xBF2B5D0)
#define OMMEIHJOHGJ_GET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0xBF2B1C0)
#define OMMEIHJOHGJ_GET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0xBF2B1E0)
#define OMMEIHJOHGJ_GET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0xBF2B1A0)
#define OMMEIHJOHGJ_HBJLIIJNCLP_OFFSET UNITYSDK_OFFSET(0xBF2B240)
#define OMMEIHJOHGJ_HEKKBIHMABB_OFFSET UNITYSDK_OFFSET(0xBF2BD20)
#define OMMEIHJOHGJ_IABOGIGNHNJ_OFFSET UNITYSDK_OFFSET(0xBF2B200)
#define OMMEIHJOHGJ_IMGHABJMLFD_OFFSET UNITYSDK_OFFSET(0xBF2C350)
#define OMMEIHJOHGJ_IMPHBBFJKDD_OFFSET UNITYSDK_OFFSET(0xBF2B790)
#define OMMEIHJOHGJ_JLIONLENCJF_OFFSET UNITYSDK_OFFSET(0xBF2BCD0)
#define OMMEIHJOHGJ_MAHLPCAONCE_OFFSET UNITYSDK_OFFSET(0xBF2B660)
#define OMMEIHJOHGJ_MOHDIFANDEA_OFFSET UNITYSDK_OFFSET(0xBF2BA40)
#define OMMEIHJOHGJ_PFDMIJEFNFL_OFFSET UNITYSDK_OFFSET(0xBF2C000)
#define OMMEIHJOHGJ_PJDIKMLKLPA_OFFSET UNITYSDK_OFFSET(0xBF2BB10)
#define OMMEIHJOHGJ_POHKIAKJNJC_OFFSET UNITYSDK_OFFSET(0xBF2C3C0)
#define OMMEIHJOHGJ_SET_CURRENTSCRIPT_OFFSET UNITYSDK_OFFSET(0xBF2B1D0)
#define OMMEIHJOHGJ_SET_EMOBLACKLIST_OFFSET UNITYSDK_OFFSET(0xBF2B1F0)
#define OMMEIHJOHGJ_SET_NPCSERVERID_OFFSET UNITYSDK_OFFSET(0xBF2B1B0)

inline static constexpr unsigned int OMMEIHJOHGJ_TypeDefinitionIndex = 65658;

	class OMMEIHJOHGJ : public ::System::Object
	{
	public:
		::JMCHDIEPEJP* IPJLCHPGFKM; // 0x10
		::RPG::GameCore::GameLevelHeartDialNPCConfig* OLMHBMPGAKC; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::HeartDialEmoType>* _EmoBlackList_k__BackingField; // 0x20
		::RPG::Client::MapNpcDef* IIFECJIKIKN; // 0x28
		::RPG::GameCore::GameEntity* AFIMBNIENJM; // 0x30
		::RPG::Client::HeartDialScriptInfo* _currentScript_k__BackingField; // 0x38
		::System::UInt32 _NpcServerID_k__BackingField; // 0x40
		::System::Boolean GEEIKIACBBE; // 0x44
		::System::Byte _padding0[0x3];
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> KBPOHLKBJFJ; // 0x48
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

		::System::Void POHKIAKJNJC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + OMMEIHJOHGJ_POHKIAKJNJC_OFFSET))(this, a1);
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

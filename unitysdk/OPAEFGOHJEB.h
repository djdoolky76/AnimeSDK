#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMNHIKPLAFP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BLOBBPLCDDM;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define OPAEFGOHJEB_AAAHOELPCLB_OFFSET UNITYSDK_OFFSET(0xBF99900)
#define OPAEFGOHJEB_BCGBEGHOJPO_OFFSET UNITYSDK_OFFSET(0xBF98E30)
#define OPAEFGOHJEB_BEGDEJMBMNB_OFFSET UNITYSDK_OFFSET(0xBF99550)
#define OPAEFGOHJEB_CBFAFMABBIL_OFFSET UNITYSDK_OFFSET(0xBF98E90)
#define OPAEFGOHJEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF98820)
#define OPAEFGOHJEB_DEMJOKGNHJK_OFFSET UNITYSDK_OFFSET(0xBF99960)
#define OPAEFGOHJEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF988B0)
#define OPAEFGOHJEB_EDENHGABEAF_OFFSET UNITYSDK_OFFSET(0xBF99020)
#define OPAEFGOHJEB_EMHHHCMMJND_OFFSET UNITYSDK_OFFSET(0xBF99950)
#define OPAEFGOHJEB_GPAHANKJJGJ_OFFSET UNITYSDK_OFFSET(0xBF99A30)
#define OPAEFGOHJEB_HJCCAAPIAKB_OFFSET UNITYSDK_OFFSET(0xBF99940)
#define OPAEFGOHJEB_HKJLLEIMFDK_OFFSET UNITYSDK_OFFSET(0xBF98F80)
#define OPAEFGOHJEB_IGECHJIALMH_OFFSET UNITYSDK_OFFSET(0xBF98CC0)
#define OPAEFGOHJEB_KDNIHIDGIGB_OFFSET UNITYSDK_OFFSET(0xBF98F40)
#define OPAEFGOHJEB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF98980)
#define OPAEFGOHJEB_LDLDNLEIAIN_OFFSET UNITYSDK_OFFSET(0xBF98D20)
#define OPAEFGOHJEB_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0xBF99A50)
#define OPAEFGOHJEB_NPCJCINAJEH_OFFSET UNITYSDK_OFFSET(0xBF99600)
#define OPAEFGOHJEB_OPPBIKGNJLM_OFFSET UNITYSDK_OFFSET(0xBF99A40)
#define OPAEFGOHJEB_PNBBKGBLGBN_OFFSET UNITYSDK_OFFSET(0xBF99870)

inline static constexpr unsigned int OPAEFGOHJEB_TypeDefinitionIndex = 57787;

	class OPAEFGOHJEB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::BLOBBPLCDDM* ILGOFEJCNKG; // 0x18
		::RPG::GameCore::TransformComponent* PDJGEDNLBKJ; // 0x20
		::RPG::GameCore::CharacterModelComponent* JOKBAPFCJFM; // 0x28
		::HMNHIKPLAFP LLAPCMPOAAG; // 0x30
		::System::Int32 MHIHDPCDPLL; // 0x68
		::System::UInt32 EBMMDCNPLOG; // 0x6C
		::System::UInt32 OLEIDKBKEOE; // 0x70
		::System::Boolean FOBGFIPLPDN; // 0x74
		::System::Boolean HDGBMFEHJDD; // 0x75
		::System::Boolean JMEDIIAGHJC; // 0x76
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean KPJGDHLENIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void BCGBEGHOJPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_BCGBEGHOJPO_OFFSET))(this);
		}

		::System::Void CBFAFMABBIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_CBFAFMABBIL_OFFSET))(this);
		}

		::System::Void KDNIHIDGIGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_KDNIHIDGIGB_OFFSET))(this);
		}

		::System::Void IGECHJIALMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_IGECHJIALMH_OFFSET))(this);
		}

		::System::Void LDLDNLEIAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_LDLDNLEIAIN_OFFSET))(this);
		}

		::System::Void HKJLLEIMFDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_HKJLLEIMFDK_OFFSET))(this);
		}

		::System::Boolean EDENHGABEAF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_EDENHGABEAF_OFFSET))(this, a1);
		}

		::System::Void NPCJCINAJEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_NPCJCINAJEH_OFFSET))(this);
		}

		::System::Void PNBBKGBLGBN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_PNBBKGBLGBN_OFFSET))(this, a1, a2);
		}

		::System::Void AAAHOELPCLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_AAAHOELPCLB_OFFSET))(this);
		}

		::System::Boolean BEGDEJMBMNB(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_BEGDEJMBMNB_OFFSET))(this, a1);
		}

		::System::UInt32 HJCCAAPIAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_HJCCAAPIAKB_OFFSET))(this);
		}

		::System::Void EMHHHCMMJND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_EMHHHCMMJND_OFFSET))(this, a1);
		}

		::System::Int32 DEMJOKGNHJK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_DEMJOKGNHJK_OFFSET))(this);
		}

		::System::Boolean GPAHANKJJGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_GPAHANKJJGJ_OFFSET))(this);
		}

		::System::Void OPPBIKGNJLM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_OPPBIKGNJLM_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LHMKCOHPLMN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAEFGOHJEB_LHMKCOHPLMN_OFFSET))(this);
		}

	};

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

#define OPAEFGOHJEB_AAAHOELPCLB_OFFSET UNITYSDK_OFFSET(0xC89A7B0)
#define OPAEFGOHJEB_BCGBEGHOJPO_OFFSET UNITYSDK_OFFSET(0xC899D20)
#define OPAEFGOHJEB_BEGDEJMBMNB_OFFSET UNITYSDK_OFFSET(0xC89A400)
#define OPAEFGOHJEB_CBFAFMABBIL_OFFSET UNITYSDK_OFFSET(0xC899D80)
#define OPAEFGOHJEB_CTOR_OFFSET UNITYSDK_OFFSET(0xC899710)
#define OPAEFGOHJEB_DEMJOKGNHJK_OFFSET UNITYSDK_OFFSET(0xC89A810)
#define OPAEFGOHJEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8997A0)
#define OPAEFGOHJEB_EDENHGABEAF_OFFSET UNITYSDK_OFFSET(0xC899F10)
#define OPAEFGOHJEB_EMHHHCMMJND_OFFSET UNITYSDK_OFFSET(0xC89A800)
#define OPAEFGOHJEB_GPAHANKJJGJ_OFFSET UNITYSDK_OFFSET(0xC89A8E0)
#define OPAEFGOHJEB_HJCCAAPIAKB_OFFSET UNITYSDK_OFFSET(0xC89A7F0)
#define OPAEFGOHJEB_HKJLLEIMFDK_OFFSET UNITYSDK_OFFSET(0xC899E70)
#define OPAEFGOHJEB_IGECHJIALMH_OFFSET UNITYSDK_OFFSET(0xC899BB0)
#define OPAEFGOHJEB_KDNIHIDGIGB_OFFSET UNITYSDK_OFFSET(0xC899E30)
#define OPAEFGOHJEB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC899870)
#define OPAEFGOHJEB_LDLDNLEIAIN_OFFSET UNITYSDK_OFFSET(0xC899C10)
#define OPAEFGOHJEB_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0xC89A900)
#define OPAEFGOHJEB_NPCJCINAJEH_OFFSET UNITYSDK_OFFSET(0xC89A4B0)
#define OPAEFGOHJEB_OPPBIKGNJLM_OFFSET UNITYSDK_OFFSET(0xC89A8F0)
#define OPAEFGOHJEB_PNBBKGBLGBN_OFFSET UNITYSDK_OFFSET(0xC89A720)

inline static constexpr unsigned int OPAEFGOHJEB_TypeDefinitionIndex = 59022;

	class OPAEFGOHJEB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::BLOBBPLCDDM* ILGOFEJCNKG; // 0x18
		::HMNHIKPLAFP LLAPCMPOAAG; // 0x20
		::RPG::GameCore::CharacterModelComponent* JOKBAPFCJFM; // 0x58
		::RPG::GameCore::TransformComponent* PDJGEDNLBKJ; // 0x60
		::System::UInt32 OLEIDKBKEOE; // 0x68
		::System::UInt32 EBMMDCNPLOG; // 0x6C
		::System::Boolean JMEDIIAGHJC; // 0x70
		::System::Boolean HDGBMFEHJDD; // 0x71
		::System::Boolean FOBGFIPLPDN; // 0x72
		::System::Byte _padding0[0x1];
		::System::Int32 MHIHDPCDPLL; // 0x74
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

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

#define OPAEFGOHJEB_AAAHOELPCLB_OFFSET UNITYSDK_OFFSET(0x196B9930)
#define OPAEFGOHJEB_BCGBEGHOJPO_OFFSET UNITYSDK_OFFSET(0x196B8EA0)
#define OPAEFGOHJEB_BEGDEJMBMNB_OFFSET UNITYSDK_OFFSET(0x196B9580)
#define OPAEFGOHJEB_CBFAFMABBIL_OFFSET UNITYSDK_OFFSET(0x196B8F00)
#define OPAEFGOHJEB_CTOR_OFFSET UNITYSDK_OFFSET(0x196B8890)
#define OPAEFGOHJEB_DEMJOKGNHJK_OFFSET UNITYSDK_OFFSET(0x196B9990)
#define OPAEFGOHJEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x196B8920)
#define OPAEFGOHJEB_EDENHGABEAF_OFFSET UNITYSDK_OFFSET(0x196B9090)
#define OPAEFGOHJEB_EMHHHCMMJND_OFFSET UNITYSDK_OFFSET(0x196B9980)
#define OPAEFGOHJEB_GPAHANKJJGJ_OFFSET UNITYSDK_OFFSET(0x196B9A60)
#define OPAEFGOHJEB_HJCCAAPIAKB_OFFSET UNITYSDK_OFFSET(0x196B9970)
#define OPAEFGOHJEB_HKJLLEIMFDK_OFFSET UNITYSDK_OFFSET(0x196B8FF0)
#define OPAEFGOHJEB_IGECHJIALMH_OFFSET UNITYSDK_OFFSET(0x196B8D30)
#define OPAEFGOHJEB_KDNIHIDGIGB_OFFSET UNITYSDK_OFFSET(0x196B8FB0)
#define OPAEFGOHJEB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x196B89F0)
#define OPAEFGOHJEB_LDLDNLEIAIN_OFFSET UNITYSDK_OFFSET(0x196B8D90)
#define OPAEFGOHJEB_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0x196B9A80)
#define OPAEFGOHJEB_NPCJCINAJEH_OFFSET UNITYSDK_OFFSET(0x196B9630)
#define OPAEFGOHJEB_OPPBIKGNJLM_OFFSET UNITYSDK_OFFSET(0x196B9A70)
#define OPAEFGOHJEB_PNBBKGBLGBN_OFFSET UNITYSDK_OFFSET(0x196B98A0)

inline static constexpr unsigned int OPAEFGOHJEB_TypeDefinitionIndex = 59022;

	class OPAEFGOHJEB : public ::System::Object
	{
	public:
		::BLOBBPLCDDM* ILGOFEJCNKG; // 0x10
		::HMNHIKPLAFP LLAPCMPOAAG; // 0x18
		::RPG::GameCore::TransformComponent* PDJGEDNLBKJ; // 0x50
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x58
		::RPG::GameCore::CharacterModelComponent* JOKBAPFCJFM; // 0x60
		::System::UInt32 EBMMDCNPLOG; // 0x68
		::System::Boolean FOBGFIPLPDN; // 0x6C
		::System::Boolean JMEDIIAGHJC; // 0x6D
		::System::Boolean HDGBMFEHJDD; // 0x6E
		::System::Byte _padding0[0x1];
		::System::Int32 MHIHDPCDPLL; // 0x70
		::System::UInt32 OLEIDKBKEOE; // 0x74
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

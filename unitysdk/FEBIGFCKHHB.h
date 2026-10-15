#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKIBEPMJGMH.h"
#include "unitysdk/RPG/GameCore/RtBattleSkillMoveState.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
class LIIAKHPGLPO;
class NEJPLEFGALN;

#define FEBIGFCKHHB_CLEAR_OFFSET UNITYSDK_OFFSET(0x156D8D80)
#define FEBIGFCKHHB_CTOR_OFFSET UNITYSDK_OFFSET(0x156D8E00)
#define FEBIGFCKHHB_GET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x156D8DE0)
#define FEBIGFCKHHB_SET_TOKENQUEUE_OFFSET UNITYSDK_OFFSET(0x156D8DF0)

inline static constexpr unsigned int FEBIGFCKHHB_TypeDefinitionIndex = 54246;

	class FEBIGFCKHHB : public ::System::Object
	{
	public:
		::NEJPLEFGALN* _TokenQueue_k__BackingField; // 0x10
		::LIIAKHPGLPO* BNFHKFLNHHH; // 0x18
		::CENEFPOMFKG* IJGAPCNDIAG; // 0x20
		::OKIBEPMJGMH IFPCNCCENAL; // 0x28
		::RPG::GameCore::RtBattleSkillMoveState NPDNEEPHEKN; // 0x30
		::System::Boolean HOBIGCLPACO; // 0x34
		::System::Boolean GABIKMFIEHG; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBIGFCKHHB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBIGFCKHHB_CLEAR_OFFSET))(this);
		}

		::NEJPLEFGALN* get_TokenQueue()
		{
			return ((::NEJPLEFGALN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBIGFCKHHB_GET_TOKENQUEUE_OFFSET))(this);
		}

		::System::Void set_TokenQueue(::NEJPLEFGALN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEJPLEFGALN*))((::PBYTE)hIl2Cpp + FEBIGFCKHHB_SET_TOKENQUEUE_OFFSET))(this, a1);
		}

	};

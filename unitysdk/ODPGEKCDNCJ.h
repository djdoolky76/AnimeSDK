#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFFCBOJNNJF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define ODPGEKCDNCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x17616FF0)

inline static constexpr unsigned int ODPGEKCDNCJ_TypeDefinitionIndex = 59985;

	class ODPGEKCDNCJ : public ::System::Object
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::Client::BattleShowUIPageParam* NNACKOBKFGE; // 0x20
		::System::Single KIPAGNCANAJ; // 0x28
		::OFFCBOJNNJF GMPGDEINODK; // 0x2C
		::System::Boolean GNDCCBNILML; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPGEKCDNCJ_CTOR_OFFSET))(this);
		}

	};

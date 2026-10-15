#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFFCBOJNNJF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define ODPGEKCDNCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBDEB320)

inline static constexpr unsigned int ODPGEKCDNCJ_TypeDefinitionIndex = 58717;

	class ODPGEKCDNCJ : public ::System::Object
	{
	public:
		::RPG::Client::BattleShowUIPageParam* NNACKOBKFGE; // 0x10
		::System::String* GFNAPNFFGPJ; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single KIPAGNCANAJ; // 0x2C
		::OFFCBOJNNJF GMPGDEINODK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPGEKCDNCJ_CTOR_OFFSET))(this);
		}

	};

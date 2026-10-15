#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3BattleState.h"
#include "unitysdk/System/Object.h"

#define DKAIEPKJKNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2C000)

inline static constexpr unsigned int DKAIEPKJKNF_TypeDefinitionIndex = 42223;

	class DKAIEPKJKNF : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::Match3::Match3BattleState MEPFOEEGBEA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAIEPKJKNF_CTOR_OFFSET))(this);
		}

	};

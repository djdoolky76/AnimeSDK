#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define FEDDCDEFDCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x156DBD80)
#define FEDDCDEFDCE_CTOR_OFFSET UNITYSDK_OFFSET(0x156DBDD0)

inline static constexpr unsigned int FEDDCDEFDCE_TypeDefinitionIndex = 54260;

	class FEDDCDEFDCE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::Int32 FFCMNDCPBGN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDCDEFDCE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDCDEFDCE_CLEAR_OFFSET))(this);
		}

	};

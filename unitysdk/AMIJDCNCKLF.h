#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define AMIJDCNCKLF_BGGIFMCPKBB_OFFSET UNITYSDK_OFFSET(0x197DC270)

inline static constexpr unsigned int AMIJDCNCKLF_TypeDefinitionIndex = 57424;

	class AMIJDCNCKLF : public ::System::Object
	{
	public:
		static ::System::String* BGGIFMCPKBB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AMIJDCNCKLF_BGGIFMCPKBB_OFFSET))(a1);
		}

	};

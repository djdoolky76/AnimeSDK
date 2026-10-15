#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define DDJKNPCIALI_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4E0420)
#define DDJKNPCIALI_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E0470)

inline static constexpr unsigned int DDJKNPCIALI_TypeDefinitionIndex = 53720;

	class DDJKNPCIALI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::Int32 NALMBOOCCIN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJKNPCIALI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJKNPCIALI_CLEAR_OFFSET))(this);
		}

	};

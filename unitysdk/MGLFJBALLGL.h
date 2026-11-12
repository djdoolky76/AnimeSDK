#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class GameEntity; }

#define MGLFJBALLGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1DB940)
#define MGLFJBALLGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1DB8E0)
#define MGLFJBALLGL_HDKMDFOFIBG_OFFSET UNITYSDK_OFFSET(0xC1DB930)
#define MGLFJBALLGL_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC1DB890)

inline static constexpr unsigned int MGLFJBALLGL_TypeDefinitionIndex = 58166;

	class MGLFJBALLGL : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* IJLHOACGDBP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLFJBALLGL_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MGLFJBALLGL_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLFJBALLGL_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* HDKMDFOFIBG()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLFJBALLGL_HDKMDFOFIBG_OFFSET))(this);
		}

	};

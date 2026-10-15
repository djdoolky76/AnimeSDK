#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class GameEntity; }

#define HDFOFCNJBEN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C33420)
#define HDFOFCNJBEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C333D0)

inline static constexpr unsigned int HDFOFCNJBEN_TypeDefinitionIndex = 57565;

	class HDFOFCNJBEN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x18
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFOFCNJBEN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFOFCNJBEN_DISPOSE_OFFSET))(this);
		}

	};

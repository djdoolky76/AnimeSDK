#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define RPG_GAMECORE_CHENLINGFESPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5620C0)
#define RPG_GAMECORE_CHENLINGFESPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D561F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesPosition_TypeDefinitionIndex = 18437;

	class ChenLingFesPosition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 PositionX; // 0x10
		::System::Int32 PositionZ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

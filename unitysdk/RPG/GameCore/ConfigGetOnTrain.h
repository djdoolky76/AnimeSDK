#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConfigGetOnTrain; }
namespace System { class String; }

#define RPG_GAMECORE_CONFIGGETONTRAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A7C20)
#define RPG_GAMECORE_CONFIGGETONTRAIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A7710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigGetOnTrain_TypeDefinitionIndex = 16921;

	class ConfigGetOnTrain : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TrainName; // 0x10
		::System::String* LineUpPointName; // 0x18
		::System::Single LineUpPointMixGapTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGGETONTRAIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfigGetOnTrain* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfigGetOnTrain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGGETONTRAIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

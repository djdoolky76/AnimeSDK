#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConfigGetOffTrain; }
namespace System { class String; }

#define RPG_GAMECORE_CONFIGGETOFFTRAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D56A0)
#define RPG_GAMECORE_CONFIGGETOFFTRAIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D5320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigGetOffTrain_TypeDefinitionIndex = 16922;

	class ConfigGetOffTrain : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TrainName; // 0x10
		::System::UInt32 PathGroupID; // 0x18
		::System::UInt32 PathID; // 0x1C
		::System::UInt32 NodeIndex; // 0x20
		::System::UInt32 GetOffNumMin; // 0x24
		::System::UInt32 GetOffNumMax; // 0x28
		::System::Single GetOffTimeGap; // 0x2C
		::System::Single DelayTime; // 0x30
		::RPG::MVector3 Offset; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGGETOFFTRAIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfigGetOffTrain* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfigGetOffTrain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGGETOFFTRAIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

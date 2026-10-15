#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectMutexConfigData; }

#define RPG_GAMECORE_EFFECTMUTEXCONFIGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D630F60)
#define RPG_GAMECORE_EFFECTMUTEXCONFIGDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D630E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectMutexConfigData_TypeDefinitionIndex = 16488;

	class EffectMutexConfigData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MinMutexTime; // 0x10
		::RPG::GameCore::EffectMutexType MinMutexType; // 0x14
		::System::UInt32 MaxMutexCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMUTEXCONFIGDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectMutexConfigData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectMutexConfigData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMUTEXCONFIGDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

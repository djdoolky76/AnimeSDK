#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceRelatedConfigBase; }
namespace System { class String; }

#define RPG_GAMECORE_DEVICERELATEDCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FE9A0)
#define RPG_GAMECORE_DEVICERELATEDCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FEFA0)
#define RPG_GAMECORE_DEVICERELATEDCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FEC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedConfigBase_TypeDefinitionIndex = 16467;

	class DeviceRelatedConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PlatformName; // 0x10
		::System::Int32 MemoryMin; // 0x18
		::System::Int32 MemoryMax; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

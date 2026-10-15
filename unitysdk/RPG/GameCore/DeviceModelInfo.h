#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceModelInfo; }
namespace System { class String; }

#define RPG_GAMECORE_DEVICEMODELINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0CD0)
#define RPG_GAMECORE_DEVICEMODELINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceModelInfo_TypeDefinitionIndex = 18269;

	class DeviceModelInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DeviceModel; // 0x10
		::System::Int32 ApiLevel; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICEMODELINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceModelInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceModelInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICEMODELINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

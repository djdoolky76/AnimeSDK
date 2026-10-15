#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GraphicDeviceInfo; }
namespace System { class String; }

#define RPG_GAMECORE_GRAPHICDEVICEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D722AA0)
#define RPG_GAMECORE_GRAPHICDEVICEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D722950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GraphicDeviceInfo_TypeDefinitionIndex = 18270;

	class GraphicDeviceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GraphicDeviceName; // 0x10
		::System::Int32 ApiLevel; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICDEVICEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GraphicDeviceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GraphicDeviceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICDEVICEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

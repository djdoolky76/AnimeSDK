#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NodeGraphCheckConfig; }

#define RPG_GAMECORE_NODEGRAPHCHECKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49B6F0)
#define RPG_GAMECORE_NODEGRAPHCHECKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E49B6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NodeGraphCheckConfig_TypeDefinitionIndex = 16614;

	class NodeGraphCheckConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NODEGRAPHCHECKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NodeGraphCheckConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NodeGraphCheckConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NODEGRAPHCHECKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

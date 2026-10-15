#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphFreeStyleConfig; }
namespace RPG::GameCore { class PhotoGraphFreeStyleDataConfig; }

#define RPG_GAMECORE_PHOTOGRAPHFREESTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E34E0)
#define RPG_GAMECORE_PHOTOGRAPHFREESTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E3420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphFreeStyleConfig_TypeDefinitionIndex = 19049;

	class PhotoGraphFreeStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PhotoGraphFreeStyleDataConfig*>* FreeStyleDataList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFREESTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphFreeStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphFreeStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFREESTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

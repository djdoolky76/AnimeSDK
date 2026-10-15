#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphSetSingleTargetUniqueName; }
namespace RPG::GameCore { class PhotoGraphSetUniqueNameConfig; }

#define RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D912770)
#define RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSetUniqueNameConfig_TypeDefinitionIndex = 21627;

	class PhotoGraphSetUniqueNameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>* NpcUniqueNameInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphSetUniqueNameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphSetUniqueNameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupLookUpConfig; }
namespace RPG::GameCore { class GroupValueLookUpConfig; }

#define RPG_GAMECORE_GROUPLOOKUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74BAB0)
#define RPG_GAMECORE_GROUPLOOKUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74B950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupLookUpConfig_TypeDefinitionIndex = 16387;

	class GroupLookUpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Banks; // 0x10
		::Il2CppArray<::RPG::GameCore::GroupValueLookUpConfig*>* Condition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPLOOKUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupLookUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupLookUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPLOOKUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

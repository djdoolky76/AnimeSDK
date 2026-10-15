#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PriorityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PRIORITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D913270)
#define RPG_GAMECORE_PRIORITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D913190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PriorityConfig_TypeDefinitionIndex = 17125;

	class PriorityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PriorityKeys; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PriorityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PriorityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRIORITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

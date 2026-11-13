#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

#define RPG_CLIENT_ROGUEENDLESSUTILS_GETRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C7D1B60)
#define RPG_CLIENT_ROGUEENDLESSUTILS_ISAREAAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x1C7D3810)
#define RPG_CLIENT_ROGUEENDLESSUTILS_ISAREASEEN_OFFSET UNITYSDK_OFFSET(0x1C7CFDD0)
#define RPG_CLIENT_ROGUEENDLESSUTILS_RECORDAREASEEN_OFFSET UNITYSDK_OFFSET(0x1C7D3710)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessUtils_TypeDefinitionIndex = 69393;

	class RogueEndlessUtils : public ::System::Object
	{
	public:
		static ::System::Void RecordAreaSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSUTILS_RECORDAREASEEN_OFFSET))(a1);
		}

		static ::System::Boolean IsAreaSeen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSUTILS_ISAREASEEN_OFFSET))(a1);
		}

		static ::System::Boolean IsAreaAvailableReward(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSUTILS_ISAREAAVAILABLEREWARD_OFFSET))(a1);
		}

		static ::System::UInt32 GetRecommendLevel(::System::UInt32 a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSUTILS_GETRECOMMENDLEVEL_OFFSET))(a1, a2);
		}

	};
}

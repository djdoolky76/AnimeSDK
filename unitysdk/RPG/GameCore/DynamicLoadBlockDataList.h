#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicLoadBlockData; }
namespace RPG::GameCore { class DynamicLoadBlockDataList; }
namespace RPG::GameCore { class DynamicLoadBlockDatas; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D629210)
#define RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D629460)
#define RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6292F0)

namespace RPG::GameCore
{
	class DynamicLoadBlockDataList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicLoadBlockData*>* BLockDataList; // 0x10
		::System::String* EnvProfilePath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* StageOverrideEnvProfilePath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicLoadBlockDatas*>* StageOverrideStagePath; // 0x28
		::RPG::GameCore::EnviromentControlPriority Priority; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicLoadBlockDataList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicLoadBlockDataList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicLoadBlockDataList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicLoadBlockDataList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATALIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

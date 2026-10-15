#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetOperationConfigList; }
namespace RPG::GameCore { class TargetSeqOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TARGETOPERATIONCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6D3F0)
#define RPG_GAMECORE_TARGETOPERATIONCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6D310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetOperationConfigList_TypeDefinitionIndex = 23958;

	class TargetOperationConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetSeqOperation*>* OperationDict; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETOPERATIONCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetOperationConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetOperationConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETOPERATIONCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

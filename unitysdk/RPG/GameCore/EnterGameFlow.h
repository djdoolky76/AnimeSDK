#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class EnterGameFlow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTERGAMEFLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6448D0)
#define RPG_GAMECORE_ENTERGAMEFLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6448E0)
#define RPG_GAMECORE_ENTERGAMEFLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6448A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterGameFlow_TypeDefinitionIndex = 24061;

	class EnterGameFlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameFlowType Type; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Parameters; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterGameFlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterGameFlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterGameFlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterGameFlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

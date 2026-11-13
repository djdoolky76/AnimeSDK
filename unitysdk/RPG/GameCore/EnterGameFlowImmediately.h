#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class EnterGameFlowImmediately; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0EDA00)
#define RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F0EDA10)
#define RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F0ED9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterGameFlowImmediately_TypeDefinitionIndex = 24521;

	class EnterGameFlowImmediately : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameFlowType Type; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Parameters; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterGameFlowImmediately* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterGameFlowImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterGameFlowImmediately* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterGameFlowImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

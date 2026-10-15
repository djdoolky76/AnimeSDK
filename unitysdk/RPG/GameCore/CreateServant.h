#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateServant; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CREATESERVANT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E5AC0)
#define RPG_GAMECORE_CREATESERVANT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E5AD0)
#define RPG_GAMECORE_CREATESERVANT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E5A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateServant_TypeDefinitionIndex = 22981;

	class CreateServant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ServantID; // 0x18
		::RPG::GameCore::TargetEvaluator* SpecifyCaster; // 0x20
		::RPG::GameCore::TeamLocationType LocationType; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnServantCreate; // 0x38
		::System::Boolean IsDynamicPreload; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESERVANT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateServant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESERVANT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateServant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESERVANT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetLayerWeight; }
namespace System { class String; }

#define RPG_GAMECORE_SETLAYERWEIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB75D0)
#define RPG_GAMECORE_SETLAYERWEIGHT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB7640)
#define RPG_GAMECORE_SETLAYERWEIGHT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB7540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLayerWeight_TypeDefinitionIndex = 23089;

	class SetLayerWeight : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LayerName; // 0x18
		::RPG::GameCore::DynamicFloat* Weight; // 0x20
		::RPG::GameCore::DynamicFloat* Duration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLAYERWEIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLayerWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLayerWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLAYERWEIGHT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLayerWeight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLayerWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLAYERWEIGHT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

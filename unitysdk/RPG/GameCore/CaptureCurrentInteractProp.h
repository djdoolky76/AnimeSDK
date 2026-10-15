#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CaptureCurrentInteractProp; }
namespace System { class String; }

#define RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D529740)
#define RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D529750)
#define RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D529710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureCurrentInteractProp_TypeDefinitionIndex = 22290;

	class CaptureCurrentInteractProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureCurrentInteractProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureCurrentInteractProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureCurrentInteractProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureCurrentInteractProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURECURRENTINTERACTPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

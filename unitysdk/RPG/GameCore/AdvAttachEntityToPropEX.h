#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvAttachEntityToPropEX; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38E4F0)
#define RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38E500)
#define RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38E4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAttachEntityToPropEX_TypeDefinitionIndex = 21968;

	class AdvAttachEntityToPropEX : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AttachedTarget; // 0x18
		::RPG::GameCore::DynamicString* AttachPointName; // 0x20
		::RPG::GameCore::DynamicString* AttachedPointName; // 0x28
		::RPG::MVector3 PositionOffset; // 0x30
		::RPG::MVector3 RotationOffset; // 0x3C
		::System::Boolean IsStop; // 0x48
		::System::Boolean SyncOnce; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAttachEntityToPropEX* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAttachEntityToPropEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAttachEntityToPropEX* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAttachEntityToPropEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

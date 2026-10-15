#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchPhotographDragMode; }

#define RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB178B0)
#define RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB178C0)
#define RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB17880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchPhotographDragMode_TypeDefinitionIndex = 21636;

	class SwitchPhotographDragMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* ContainerName; // 0x20
		::RPG::GameCore::DynamicFloat* RectRangeX; // 0x28
		::RPG::GameCore::DynamicFloat* RectRangeY; // 0x30
		::RPG::GameCore::DynamicFloat* Damping; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchPhotographDragMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchPhotographDragMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchPhotographDragMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchPhotographDragMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitTakePhoto; }

#define RPG_GAMECORE_WAITTAKEPHOTO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA2DD0)
#define RPG_GAMECORE_WAITTAKEPHOTO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA2DE0)
#define RPG_GAMECORE_WAITTAKEPHOTO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA2D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTakePhoto_TypeDefinitionIndex = 22171;

	class WaitTakePhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShot; // 0x18
		::System::Boolean IsLoop; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTakePhoto* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTakePhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTakePhoto* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTakePhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

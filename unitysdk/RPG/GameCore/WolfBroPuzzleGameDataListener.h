#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WolfBroPuzzleGameDataListener; }

#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA8CF0)
#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA8D00)
#define RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA8CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroPuzzleGameDataListener_TypeDefinitionIndex = 21169;

	class WolfBroPuzzleGameDataListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBulletCntValid; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBulletCntInvalid; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroPuzzleGameDataListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroPuzzleGameDataListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroPuzzleGameDataListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroPuzzleGameDataListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROPUZZLEGAMEDATALISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

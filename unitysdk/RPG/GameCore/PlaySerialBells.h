#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlaySerialBells; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYSERIALBELLS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D903F20)
#define RPG_GAMECORE_PLAYSERIALBELLS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D903F30)
#define RPG_GAMECORE_PLAYSERIALBELLS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D903EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySerialBells_TypeDefinitionIndex = 22195;

	class PlaySerialBells : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SoundEvent; // 0x18
		::System::Int32 LoopTimes; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlaySerialBells* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlaySerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlaySerialBells* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlaySerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

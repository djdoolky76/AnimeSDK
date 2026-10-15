#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RegisterLittleGameSequences; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9772C0)
#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9772D0)
#define RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D977290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RegisterLittleGameSequences_TypeDefinitionIndex = 21423;

	class RegisterLittleGameSequences : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Init; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Start; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Stop; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RegisterLittleGameSequences* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RegisterLittleGameSequences*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RegisterLittleGameSequences* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RegisterLittleGameSequences*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REGISTERLITTLEGAMESEQUENCES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

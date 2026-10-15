#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CallBack; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D555200)
#define RPG_GAMECORE_CALLBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D555210)
#define RPG_GAMECORE_CALLBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5551D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CallBack_TypeDefinitionIndex = 21688;

	class CallBack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDispose; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CallBack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALLBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CallBack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALLBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

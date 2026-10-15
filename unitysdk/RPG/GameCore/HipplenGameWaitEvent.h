#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameWaitEvent; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMEWAITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73EAE0)
#define RPG_GAMECORE_HIPPLENGAMEWAITEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73EAF0)
#define RPG_GAMECORE_HIPPLENGAMEWAITEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73EAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameWaitEvent_TypeDefinitionIndex = 21320;

	class HipplenGameWaitEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EventName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEWAITEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameWaitEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEWAITEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameWaitEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEWAITEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

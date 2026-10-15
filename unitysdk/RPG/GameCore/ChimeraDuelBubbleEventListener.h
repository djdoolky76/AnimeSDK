#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELBUBBLEEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59B670)
#define RPG_GAMECORE_CHIMERADUELBUBBLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59B550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBubbleEventListener_TypeDefinitionIndex = 16024;

	class ChimeraDuelBubbleEventListener : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelBubbleEventType EventType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ChimeraDuelExcelValueGetter*>* ValueGetters; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUBBLEEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBubbleEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBubbleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUBBLEEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

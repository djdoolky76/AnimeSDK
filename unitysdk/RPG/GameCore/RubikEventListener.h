#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RubikEventListener; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RUBIKEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3FB40)
#define RPG_GAMECORE_RUBIKEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3FB50)
#define RPG_GAMECORE_RUBIKEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3FB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RubikEventListener_TypeDefinitionIndex = 22145;

	class RubikEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRotateFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUBIKEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RubikEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RubikEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUBIKEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RubikEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RubikEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUBIKEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

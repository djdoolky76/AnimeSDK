#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJMLHNALEJL;
namespace RPG::GameCore { class DynamicString; }

#define GJMLHNALEJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE29820)
#define GJMLHNALEJL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE29830)
#define GJMLHNALEJL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE297F0)

inline static constexpr unsigned int GJMLHNALEJL_TypeDefinitionIndex = 20992;

	class GJMLHNALEJL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* DDPFGAENEAD; // 0x18
		::RPG::GameCore::DynamicString* LKHIJJKHCNE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMLHNALEJL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJMLHNALEJL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJMLHNALEJL*))((::PBYTE)hIl2Cpp + GJMLHNALEJL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJMLHNALEJL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJMLHNALEJL*))((::PBYTE)hIl2Cpp + GJMLHNALEJL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

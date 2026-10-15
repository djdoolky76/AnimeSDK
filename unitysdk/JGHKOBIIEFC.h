#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
class JGHKOBIIEFC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define JGHKOBIIEFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D02A1E0)
#define JGHKOBIIEFC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D02A1F0)
#define JGHKOBIIEFC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D02A1A0)

inline static constexpr unsigned int JGHKOBIIEFC_TypeDefinitionIndex = 10189;

	class JGHKOBIIEFC : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LEAHACBFJBP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHKOBIIEFC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JGHKOBIIEFC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JGHKOBIIEFC*))((::PBYTE)hIl2Cpp + JGHKOBIIEFC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JGHKOBIIEFC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JGHKOBIIEFC*))((::PBYTE)hIl2Cpp + JGHKOBIIEFC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

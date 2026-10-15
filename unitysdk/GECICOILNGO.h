#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
class GECICOILNGO;
namespace RPG::GameCore { class TaskConfig; }

#define GECICOILNGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE05EB0)
#define GECICOILNGO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE05EC0)
#define GECICOILNGO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE05E70)

inline static constexpr unsigned int GECICOILNGO_TypeDefinitionIndex = 10203;

	class GECICOILNGO : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LEAHACBFJBP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECICOILNGO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GECICOILNGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GECICOILNGO*))((::PBYTE)hIl2Cpp + GECICOILNGO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GECICOILNGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GECICOILNGO*))((::PBYTE)hIl2Cpp + GECICOILNGO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

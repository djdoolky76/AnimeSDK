#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KLDJDLOEPPG;
namespace RPG::GameCore { class TaskConfig; }

#define KLDJDLOEPPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A41B0)
#define KLDJDLOEPPG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0A41C0)
#define KLDJDLOEPPG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0A4180)

inline static constexpr unsigned int KLDJDLOEPPG_TypeDefinitionIndex = 24099;

	class KLDJDLOEPPG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CEIJOJNNGGL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDJDLOEPPG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KLDJDLOEPPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLDJDLOEPPG*))((::PBYTE)hIl2Cpp + KLDJDLOEPPG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KLDJDLOEPPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLDJDLOEPPG*))((::PBYTE)hIl2Cpp + KLDJDLOEPPG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

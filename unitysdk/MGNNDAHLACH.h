#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MGNNDAHLACH;
namespace RPG::GameCore { class DynamicFloat; }

#define MGNNDAHLACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D168CC0)
#define MGNNDAHLACH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D168D20)
#define MGNNDAHLACH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D168C40)

inline static constexpr unsigned int MGNNDAHLACH_TypeDefinitionIndex = 24173;

	class MGNNDAHLACH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DKPPKAEDJEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNNDAHLACH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGNNDAHLACH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGNNDAHLACH*))((::PBYTE)hIl2Cpp + MGNNDAHLACH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MGNNDAHLACH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGNNDAHLACH*))((::PBYTE)hIl2Cpp + MGNNDAHLACH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

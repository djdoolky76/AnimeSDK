#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HEIMKDBGIOM;

#define HEIMKDBGIOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9A3F0)
#define HEIMKDBGIOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE9A400)
#define HEIMKDBGIOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE9A3C0)

inline static constexpr unsigned int HEIMKDBGIOM_TypeDefinitionIndex = 20925;

	class HEIMKDBGIOM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMKDBGIOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HEIMKDBGIOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEIMKDBGIOM*))((::PBYTE)hIl2Cpp + HEIMKDBGIOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HEIMKDBGIOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEIMKDBGIOM*))((::PBYTE)hIl2Cpp + HEIMKDBGIOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

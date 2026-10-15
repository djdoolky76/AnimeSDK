#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HELMBGJNNEN;

#define HELMBGJNNEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6E200)
#define HELMBGJNNEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE6E210)
#define HELMBGJNNEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE6E140)

inline static constexpr unsigned int HELMBGJNNEN_TypeDefinitionIndex = 24214;

	class HELMBGJNNEN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELMBGJNNEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HELMBGJNNEN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HELMBGJNNEN*))((::PBYTE)hIl2Cpp + HELMBGJNNEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HELMBGJNNEN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HELMBGJNNEN*))((::PBYTE)hIl2Cpp + HELMBGJNNEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GHDLDNPEKNI;

#define GHDLDNPEKNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE181D0)
#define GHDLDNPEKNI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE181E0)
#define GHDLDNPEKNI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE181A0)

inline static constexpr unsigned int GHDLDNPEKNI_TypeDefinitionIndex = 19919;

	class GHDLDNPEKNI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single NEMDKBKDFDN; // 0x18
		::System::Single IEHPFADHJFD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDLDNPEKNI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHDLDNPEKNI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHDLDNPEKNI*))((::PBYTE)hIl2Cpp + GHDLDNPEKNI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GHDLDNPEKNI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHDLDNPEKNI*))((::PBYTE)hIl2Cpp + GHDLDNPEKNI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

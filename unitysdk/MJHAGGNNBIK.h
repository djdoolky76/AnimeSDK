#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MJHAGGNNBIK;

#define MJHAGGNNBIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D187660)
#define MJHAGGNNBIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D187670)
#define MJHAGGNNBIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D187620)

inline static constexpr unsigned int MJHAGGNNBIK_TypeDefinitionIndex = 22727;

	class MJHAGGNNBIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KLCKBECJHFM; // 0x18
		::System::Boolean GAFJFMNACDO; // 0x19
		::System::Boolean PGLPJMGJNMO; // 0x1A
		::System::Boolean EADOPLLMICI; // 0x1B
		::System::Boolean IGFNFLBGLEP; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single NEMDKBKDFDN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHAGGNNBIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MJHAGGNNBIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJHAGGNNBIK*))((::PBYTE)hIl2Cpp + MJHAGGNNBIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MJHAGGNNBIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJHAGGNNBIK*))((::PBYTE)hIl2Cpp + MJHAGGNNBIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

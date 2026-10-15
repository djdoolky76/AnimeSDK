#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageByAttackProperty.h"
class FCOEMCEDLNL;
class MEDEPLMJCIC;

#define MEDEPLMJCIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1219C0)
#define MEDEPLMJCIC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D121A30)
#define MEDEPLMJCIC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D121930)

inline static constexpr unsigned int MEDEPLMJCIC_TypeDefinitionIndex = 19912;

	class MEDEPLMJCIC : public ::RPG::GameCore::DamageByAttackProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDEPLMJCIC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MEDEPLMJCIC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MEDEPLMJCIC*))((::PBYTE)hIl2Cpp + MEDEPLMJCIC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MEDEPLMJCIC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MEDEPLMJCIC*))((::PBYTE)hIl2Cpp + MEDEPLMJCIC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

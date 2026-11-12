#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HCEAOCCCDIB;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define HCEAOCCCDIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E068950)
#define HCEAOCCCDIB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E068960)
#define HCEAOCCCDIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E068920)

inline static constexpr unsigned int HCEAOCCCDIB_TypeDefinitionIndex = 23672;

	class HCEAOCCCDIB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BBDBJODPHOK; // 0x18
		::RPG::GameCore::DynamicFloat* BLOIGELEBPJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEAOCCCDIB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HCEAOCCCDIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCEAOCCCDIB*))((::PBYTE)hIl2Cpp + HCEAOCCCDIB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HCEAOCCCDIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCEAOCCCDIB*))((::PBYTE)hIl2Cpp + HCEAOCCCDIB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

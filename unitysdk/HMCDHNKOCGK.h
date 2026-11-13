#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueByPreCalcHPDamage.h"
class FCOEMCEDLNL;
class HMCDHNKOCGK;

#define HMCDHNKOCGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E835BD0)
#define HMCDHNKOCGK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E835BE0)
#define HMCDHNKOCGK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E835B90)

inline static constexpr unsigned int HMCDHNKOCGK_TypeDefinitionIndex = 20242;

	class HMCDHNKOCGK : public ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCDHNKOCGK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HMCDHNKOCGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HMCDHNKOCGK*))((::PBYTE)hIl2Cpp + HMCDHNKOCGK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HMCDHNKOCGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HMCDHNKOCGK*))((::PBYTE)hIl2Cpp + HMCDHNKOCGK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

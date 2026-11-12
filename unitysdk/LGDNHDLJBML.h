#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LGDNHDLJBML;

#define LGDNHDLJBML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E5540)
#define LGDNHDLJBML_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2E5550)
#define LGDNHDLJBML_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2E5510)

inline static constexpr unsigned int LGDNHDLJBML_TypeDefinitionIndex = 21888;

	class LGDNHDLJBML : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean BBLBNOJMIAE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDNHDLJBML_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LGDNHDLJBML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LGDNHDLJBML*))((::PBYTE)hIl2Cpp + LGDNHDLJBML_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LGDNHDLJBML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LGDNHDLJBML*))((::PBYTE)hIl2Cpp + LGDNHDLJBML_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAnimState.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class LNLOANLHMAA;

#define LNLOANLHMAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D11E840)
#define LNLOANLHMAA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D11E850)
#define LNLOANLHMAA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D11E810)

inline static constexpr unsigned int LNLOANLHMAA_TypeDefinitionIndex = 21334;

	class LNLOANLHMAA : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesAnimState MEPFOEEGBEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLOANLHMAA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LNLOANLHMAA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNLOANLHMAA*))((::PBYTE)hIl2Cpp + LNLOANLHMAA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LNLOANLHMAA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNLOANLHMAA*))((::PBYTE)hIl2Cpp + LNLOANLHMAA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

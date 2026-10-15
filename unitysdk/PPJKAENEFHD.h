#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PPJKAENEFHD;

#define PPJKAENEFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31C440)
#define PPJKAENEFHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31C450)
#define PPJKAENEFHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31C380)

inline static constexpr unsigned int PPJKAENEFHD_TypeDefinitionIndex = 24386;

	class PPJKAENEFHD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKAENEFHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PPJKAENEFHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PPJKAENEFHD*))((::PBYTE)hIl2Cpp + PPJKAENEFHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PPJKAENEFHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PPJKAENEFHD*))((::PBYTE)hIl2Cpp + PPJKAENEFHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

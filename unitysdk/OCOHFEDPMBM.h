#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OCOHFEDPMBM;

#define OCOHFEDPMBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D252940)
#define OCOHFEDPMBM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D252950)
#define OCOHFEDPMBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D252910)

inline static constexpr unsigned int OCOHFEDPMBM_TypeDefinitionIndex = 24310;

	class OCOHFEDPMBM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOHFEDPMBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OCOHFEDPMBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OCOHFEDPMBM*))((::PBYTE)hIl2Cpp + OCOHFEDPMBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OCOHFEDPMBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OCOHFEDPMBM*))((::PBYTE)hIl2Cpp + OCOHFEDPMBM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

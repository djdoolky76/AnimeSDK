#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OEAFCNFNPBP;

#define OEAFCNFNPBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D25B520)
#define OEAFCNFNPBP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D25B530)
#define OEAFCNFNPBP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D25B460)

inline static constexpr unsigned int OEAFCNFNPBP_TypeDefinitionIndex = 21562;

	class OEAFCNFNPBP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAFCNFNPBP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OEAFCNFNPBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OEAFCNFNPBP*))((::PBYTE)hIl2Cpp + OEAFCNFNPBP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OEAFCNFNPBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OEAFCNFNPBP*))((::PBYTE)hIl2Cpp + OEAFCNFNPBP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

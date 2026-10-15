#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GDEDFJOIPFA;

#define GDEDFJOIPFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFFAF0)
#define GDEDFJOIPFA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDFFB00)
#define GDEDFJOIPFA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFFAC0)

inline static constexpr unsigned int GDEDFJOIPFA_TypeDefinitionIndex = 21450;

	class GDEDFJOIPFA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean PJOBGMNIOIE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEDFJOIPFA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GDEDFJOIPFA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDEDFJOIPFA*))((::PBYTE)hIl2Cpp + GDEDFJOIPFA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GDEDFJOIPFA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDEDFJOIPFA*))((::PBYTE)hIl2Cpp + GDEDFJOIPFA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

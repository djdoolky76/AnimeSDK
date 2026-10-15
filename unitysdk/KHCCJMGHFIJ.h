#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KHCCJMGHFIJ;

#define KHCCJMGHFIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D091520)
#define KHCCJMGHFIJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D091530)
#define KHCCJMGHFIJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D091460)

inline static constexpr unsigned int KHCCJMGHFIJ_TypeDefinitionIndex = 19901;

	class KHCCJMGHFIJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCCJMGHFIJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KHCCJMGHFIJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHCCJMGHFIJ*))((::PBYTE)hIl2Cpp + KHCCJMGHFIJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KHCCJMGHFIJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHCCJMGHFIJ*))((::PBYTE)hIl2Cpp + KHCCJMGHFIJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

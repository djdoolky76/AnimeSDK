#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NBAJIOGLNNL;

#define NBAJIOGLNNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EC5F0)
#define NBAJIOGLNNL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1EC600)
#define NBAJIOGLNNL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1EC5C0)

	class NBAJIOGLNNL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean BAPHGAHMCIM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAJIOGLNNL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NBAJIOGLNNL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBAJIOGLNNL*))((::PBYTE)hIl2Cpp + NBAJIOGLNNL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NBAJIOGLNNL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBAJIOGLNNL*))((::PBYTE)hIl2Cpp + NBAJIOGLNNL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

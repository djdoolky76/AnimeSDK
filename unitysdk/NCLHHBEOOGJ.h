#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NCLHHBEOOGJ;

#define NCLHHBEOOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F5BB0)
#define NCLHHBEOOGJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1F5BC0)
#define NCLHHBEOOGJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1F5B80)

	class NCLHHBEOOGJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLHHBEOOGJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NCLHHBEOOGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NCLHHBEOOGJ*))((::PBYTE)hIl2Cpp + NCLHHBEOOGJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NCLHHBEOOGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NCLHHBEOOGJ*))((::PBYTE)hIl2Cpp + NCLHHBEOOGJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

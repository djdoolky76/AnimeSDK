#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HBFEMMFOLEA;

#define HBFEMMFOLEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE84D90)
#define HBFEMMFOLEA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE84DA0)
#define HBFEMMFOLEA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE84CD0)

	class HBFEMMFOLEA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFEMMFOLEA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HBFEMMFOLEA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HBFEMMFOLEA*))((::PBYTE)hIl2Cpp + HBFEMMFOLEA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HBFEMMFOLEA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HBFEMMFOLEA*))((::PBYTE)hIl2Cpp + HBFEMMFOLEA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

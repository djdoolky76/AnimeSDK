#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HLOAEFNDCLJ;

#define HLOAEFNDCLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC1740)
#define HLOAEFNDCLJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEC1750)
#define HLOAEFNDCLJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEC1680)

	class HLOAEFNDCLJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOAEFNDCLJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HLOAEFNDCLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HLOAEFNDCLJ*))((::PBYTE)hIl2Cpp + HLOAEFNDCLJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HLOAEFNDCLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HLOAEFNDCLJ*))((::PBYTE)hIl2Cpp + HLOAEFNDCLJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

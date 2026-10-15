#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJCIOLMFNAK;

#define GJCIOLMFNAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE55340)
#define GJCIOLMFNAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE55350)
#define GJCIOLMFNAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE55280)

	class GJCIOLMFNAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCIOLMFNAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJCIOLMFNAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJCIOLMFNAK*))((::PBYTE)hIl2Cpp + GJCIOLMFNAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJCIOLMFNAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJCIOLMFNAK*))((::PBYTE)hIl2Cpp + GJCIOLMFNAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ALGEKGNPOBF;
class FCOEMCEDLNL;

#define ALGEKGNPOBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD84B0)
#define ALGEKGNPOBF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCD84C0)
#define ALGEKGNPOBF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCD83C0)

	class ALGEKGNPOBF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGEKGNPOBF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ALGEKGNPOBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ALGEKGNPOBF*))((::PBYTE)hIl2Cpp + ALGEKGNPOBF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ALGEKGNPOBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ALGEKGNPOBF*))((::PBYTE)hIl2Cpp + ALGEKGNPOBF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

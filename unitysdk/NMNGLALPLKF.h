#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NMNGLALPLKF;

#define NMNGLALPLKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2398F0)
#define NMNGLALPLKF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D239900)
#define NMNGLALPLKF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2398C0)

inline static constexpr unsigned int NMNGLALPLKF_TypeDefinitionIndex = 10186;

	class NMNGLALPLKF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OIAGAKAANLG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNGLALPLKF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMNGLALPLKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMNGLALPLKF*))((::PBYTE)hIl2Cpp + NMNGLALPLKF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMNGLALPLKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMNGLALPLKF*))((::PBYTE)hIl2Cpp + NMNGLALPLKF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

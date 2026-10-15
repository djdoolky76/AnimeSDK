#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MIBMLOEAJII;

#define MIBMLOEAJII_CTOR_OFFSET UNITYSDK_OFFSET(0x1D182500)
#define MIBMLOEAJII_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D182510)
#define MIBMLOEAJII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1823B0)

inline static constexpr unsigned int MIBMLOEAJII_TypeDefinitionIndex = 21552;

	class MIBMLOEAJII : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ICJMOAILNCH; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::Single CKIFAIJPDEN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBMLOEAJII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MIBMLOEAJII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MIBMLOEAJII*))((::PBYTE)hIl2Cpp + MIBMLOEAJII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MIBMLOEAJII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MIBMLOEAJII*))((::PBYTE)hIl2Cpp + MIBMLOEAJII_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

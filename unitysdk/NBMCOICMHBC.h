#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NBMCOICMHBC;

#define NBMCOICMHBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C3060)
#define NBMCOICMHBC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1C3070)
#define NBMCOICMHBC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1C3030)

inline static constexpr unsigned int NBMCOICMHBC_TypeDefinitionIndex = 19977;

	class NBMCOICMHBC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LJOKOMCPPLL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMCOICMHBC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NBMCOICMHBC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBMCOICMHBC*))((::PBYTE)hIl2Cpp + NBMCOICMHBC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NBMCOICMHBC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBMCOICMHBC*))((::PBYTE)hIl2Cpp + NBMCOICMHBC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

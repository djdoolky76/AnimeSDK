#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JONKKMAJCAH;

#define JONKKMAJCAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D02A530)
#define JONKKMAJCAH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D02A540)
#define JONKKMAJCAH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D02A4F0)

inline static constexpr unsigned int JONKKMAJCAH_TypeDefinitionIndex = 23351;

	class JONKKMAJCAH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KJEDHNPEGLD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONKKMAJCAH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JONKKMAJCAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JONKKMAJCAH*))((::PBYTE)hIl2Cpp + JONKKMAJCAH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JONKKMAJCAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JONKKMAJCAH*))((::PBYTE)hIl2Cpp + JONKKMAJCAH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CDLPFFIKLOC;
class FCOEMCEDLNL;

#define CDLPFFIKLOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED43BE0)
#define CDLPFFIKLOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED43BF0)
#define CDLPFFIKLOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED43B20)

inline static constexpr unsigned int CDLPFFIKLOC_TypeDefinitionIndex = 23816;

	class CDLPFFIKLOC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLPFFIKLOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CDLPFFIKLOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CDLPFFIKLOC*))((::PBYTE)hIl2Cpp + CDLPFFIKLOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CDLPFFIKLOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CDLPFFIKLOC*))((::PBYTE)hIl2Cpp + CDLPFFIKLOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

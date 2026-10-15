#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFFPDOPONLA;

#define FFFPDOPONLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE6860)
#define FFFPDOPONLA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE6870)
#define FFFPDOPONLA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE6830)

inline static constexpr unsigned int FFFPDOPONLA_TypeDefinitionIndex = 22372;

	class FFFPDOPONLA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LOMMDIBKAJB; // 0x18
		::System::UInt32 KGCHOCCBMHK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFPDOPONLA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFFPDOPONLA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFFPDOPONLA*))((::PBYTE)hIl2Cpp + FFFPDOPONLA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFFPDOPONLA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFFPDOPONLA*))((::PBYTE)hIl2Cpp + FFFPDOPONLA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

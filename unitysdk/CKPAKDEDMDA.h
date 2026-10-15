#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CKPAKDEDMDA;
class FCOEMCEDLNL;

#define CKPAKDEDMDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1F3E0)
#define CKPAKDEDMDA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC1F3F0)
#define CKPAKDEDMDA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC1F3B0)

	class CKPAKDEDMDA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LIFHGBNGGHK; // 0x18
		::System::UInt32 NMBKAIEIAPE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAKDEDMDA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CKPAKDEDMDA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKPAKDEDMDA*))((::PBYTE)hIl2Cpp + CKPAKDEDMDA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CKPAKDEDMDA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKPAKDEDMDA*))((::PBYTE)hIl2Cpp + CKPAKDEDMDA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NFFBDBNDOCG;
namespace System { class String; }

#define NFFBDBNDOCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E740670)
#define NFFBDBNDOCG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E740680)
#define NFFBDBNDOCG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E740640)

inline static constexpr unsigned int NFFBDBNDOCG_TypeDefinitionIndex = 23280;

	class NFFBDBNDOCG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NECBFCLKAJI; // 0x18
		::System::String* APIFGFCGEPG; // 0x20
		::System::String* ILOCBPNKFGN; // 0x28
		::System::String* JIKLHKCEFNL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFBDBNDOCG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NFFBDBNDOCG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NFFBDBNDOCG*))((::PBYTE)hIl2Cpp + NFFBDBNDOCG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NFFBDBNDOCG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NFFBDBNDOCG*))((::PBYTE)hIl2Cpp + NFFBDBNDOCG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

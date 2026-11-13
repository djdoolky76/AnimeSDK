#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BNFINJANAGB;
class FCOEMCEDLNL;

#define BNFINJANAGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF88D0)
#define BNFINJANAGB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EAF88E0)
#define BNFINJANAGB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAF8810)

inline static constexpr unsigned int BNFINJANAGB_TypeDefinitionIndex = 20305;

	class BNFINJANAGB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFINJANAGB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BNFINJANAGB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNFINJANAGB*))((::PBYTE)hIl2Cpp + BNFINJANAGB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BNFINJANAGB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNFINJANAGB*))((::PBYTE)hIl2Cpp + BNFINJANAGB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

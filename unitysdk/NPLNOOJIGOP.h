#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NPLNOOJIGOP;

#define NPLNOOJIGOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D246800)
#define NPLNOOJIGOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D246810)
#define NPLNOOJIGOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2467D0)

inline static constexpr unsigned int NPLNOOJIGOP_TypeDefinitionIndex = 19884;

	class NPLNOOJIGOP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FEBKPBMKMKH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLNOOJIGOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NPLNOOJIGOP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPLNOOJIGOP*))((::PBYTE)hIl2Cpp + NPLNOOJIGOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NPLNOOJIGOP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPLNOOJIGOP*))((::PBYTE)hIl2Cpp + NPLNOOJIGOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

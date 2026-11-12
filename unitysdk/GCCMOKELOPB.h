#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GCCMOKELOPB;

#define GCCMOKELOPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E006A20)
#define GCCMOKELOPB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E006A30)
#define GCCMOKELOPB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E006960)

inline static constexpr unsigned int GCCMOKELOPB_TypeDefinitionIndex = 24649;

	class GCCMOKELOPB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCMOKELOPB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GCCMOKELOPB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCCMOKELOPB*))((::PBYTE)hIl2Cpp + GCCMOKELOPB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GCCMOKELOPB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCCMOKELOPB*))((::PBYTE)hIl2Cpp + GCCMOKELOPB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

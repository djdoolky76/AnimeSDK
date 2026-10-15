#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JCILHCAJAFM;

#define JCILHCAJAFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEAC80)
#define JCILHCAJAFM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CFEAC90)
#define JCILHCAJAFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFEAC50)

inline static constexpr unsigned int JCILHCAJAFM_TypeDefinitionIndex = 21466;

	class JCILHCAJAFM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DCFCHKHEMPK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCILHCAJAFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JCILHCAJAFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JCILHCAJAFM*))((::PBYTE)hIl2Cpp + JCILHCAJAFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JCILHCAJAFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JCILHCAJAFM*))((::PBYTE)hIl2Cpp + JCILHCAJAFM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

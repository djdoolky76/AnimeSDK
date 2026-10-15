#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AFENBMDDEDG;
class FCOEMCEDLNL;
namespace System { class String; }

#define AFENBMDDEDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB3B90)
#define AFENBMDDEDG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCB3BA0)
#define AFENBMDDEDG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB3B60)

inline static constexpr unsigned int AFENBMDDEDG_TypeDefinitionIndex = 21824;

	class AFENBMDDEDG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DHMDAEKJENF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFENBMDDEDG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFENBMDDEDG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFENBMDDEDG*))((::PBYTE)hIl2Cpp + AFENBMDDEDG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AFENBMDDEDG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFENBMDDEDG*))((::PBYTE)hIl2Cpp + AFENBMDDEDG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

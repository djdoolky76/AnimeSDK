#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GMBDKAAEDOJ;
namespace RPG::GameCore { class DynamicString; }

#define GMBDKAAEDOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE67B00)
#define GMBDKAAEDOJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE67B10)
#define GMBDKAAEDOJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE67AD0)

	class GMBDKAAEDOJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MCLLALGABAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBDKAAEDOJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GMBDKAAEDOJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMBDKAAEDOJ*))((::PBYTE)hIl2Cpp + GMBDKAAEDOJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GMBDKAAEDOJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMBDKAAEDOJ*))((::PBYTE)hIl2Cpp + GMBDKAAEDOJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

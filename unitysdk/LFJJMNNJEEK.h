#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LFJJMNNJEEK;
namespace System { class String; }

#define LFJJMNNJEEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E93F0)
#define LFJJMNNJEEK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0E9400)
#define LFJJMNNJEEK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0E93C0)

	class LFJJMNNJEEK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x20
		::System::UInt32 NNKMEMKEPPA; // 0x24
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJJMNNJEEK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LFJJMNNJEEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LFJJMNNJEEK*))((::PBYTE)hIl2Cpp + LFJJMNNJEEK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LFJJMNNJEEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LFJJMNNJEEK*))((::PBYTE)hIl2Cpp + LFJJMNNJEEK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJGBFOPABCB;
namespace RPG::GameCore { class BossInfoBarCustomizedTutorialConfig; }

#define LJGBFOPABCB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1732F310)
#define LJGBFOPABCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1732F3A0)
#define LJGBFOPABCB_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1732F3B0)

inline static constexpr unsigned int LJGBFOPABCB_TypeDefinitionIndex = 73743;

	class LJGBFOPABCB : public ::System::Object
	{
	public:
		::System::UInt32 LKGLNFBMHOG; // 0x10
		::System::Boolean JAJEFDODIIM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGBFOPABCB_CTOR_OFFSET))(this);
		}

		static ::LJGBFOPABCB* BPLPBPMEODA(::RPG::GameCore::BossInfoBarCustomizedTutorialConfig* a1)
		{
			return ((::LJGBFOPABCB*(*)(::RPG::GameCore::BossInfoBarCustomizedTutorialConfig*))((::PBYTE)hIl2Cpp + LJGBFOPABCB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGBFOPABCB_HKKFFCBJOKM_OFFSET))(this);
		}

	};

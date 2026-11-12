#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJGBFOPABCB;
namespace RPG::GameCore { class BossInfoBarCustomizedTutorialConfig; }

#define LJGBFOPABCB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFB3F50)
#define LJGBFOPABCB_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB3FE0)
#define LJGBFOPABCB_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBFB3FF0)

inline static constexpr unsigned int LJGBFOPABCB_TypeDefinitionIndex = 73744;

	class LJGBFOPABCB : public ::System::Object
	{
	public:
		::System::Boolean JAJEFDODIIM; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 LKGLNFBMHOG; // 0x14
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

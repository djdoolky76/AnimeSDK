#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TalkEmotionData; }
namespace System { class String; }

#define PEPNFLNCDHG___C__DISPLAYCLASS98_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F7060)
#define PEPNFLNCDHG___C__DISPLAYCLASS98_0___GETTALKEMOTIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC1F8C50)

inline static constexpr unsigned int PEPNFLNCDHG___c__DisplayClass98_0_TypeDefinitionIndex = 57248;

	class PEPNFLNCDHG___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::System::String* emotionName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG___C__DISPLAYCLASS98_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetTalkEmotionData_b__0(::RPG::Client::TalkEmotionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TalkEmotionData*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG___C__DISPLAYCLASS98_0___GETTALKEMOTIONDATA_B__0_OFFSET))(this, a1);
		}

	};

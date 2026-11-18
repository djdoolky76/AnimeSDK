#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGHFICOEKBH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AIPAFAGLLGH;

#define MOLEMOLE_UICINEMASINGLERESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17564A90)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleResultContext_TypeDefinitionIndex = 57978;

	class UICinemaSingleResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AIPAFAGLLGH* singlePlayController; // 0x28
		::System::Int32 multiClickBubbleCount; // 0x30
		::System::Int32 currMaxCount; // 0x34
		::BGHFICOEKBH currLevel; // 0x38
		::System::Int32 clearAllBubbleCount; // 0x3C
		::System::Int32 historyMaxCount; // 0x40
		::System::Int32 historyMaxScore; // 0x44
		::System::Int32 normalBubbleCount; // 0x48
		::System::Boolean hasClearAllBubble; // 0x4C
		::System::Boolean hasMultiClickBubble; // 0x4D
		::System::Byte _padding0[0x2];
		::System::Int32 currScore; // 0x50
		::System::Int32 levelID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

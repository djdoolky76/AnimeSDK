#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/ScreenPlayData.h"

namespace MoleMole { class TextureSheetLoopFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define TEXTUREFRAMESCREENPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80BCF0)

inline static constexpr unsigned int TextureFrameScreenPlayData_TypeDefinitionIndex = 69622;

class TextureFrameScreenPlayData : public ::ScreenPlayData
{
public:
	::MoleMole::TextureSheetType textureSheetType; // 0x50
	::System::Byte _padding0[0x4];
	::UnityEngine::Events::UnityAction* loopEvent; // 0x58
	::System::Boolean isOverrideLoopFrames; // 0x60
	::System::Byte _padding1[0x7];
	::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* overrideLoopFrames; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTUREFRAMESCREENPLAYDATA__CTOR_OFFSET))(this);
	}
};

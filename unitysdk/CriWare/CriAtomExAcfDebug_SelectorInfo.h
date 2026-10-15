#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace CriWare
{
	struct alignas(8) CriAtomExAcfDebug_SelectorInfo
	{
		::System::String* name; // 0x10
		::System::UInt16 index; // 0x18
		::System::UInt16 numLabels; // 0x1A
		::System::UInt16 globalLabelIndex; // 0x1C
	};
}

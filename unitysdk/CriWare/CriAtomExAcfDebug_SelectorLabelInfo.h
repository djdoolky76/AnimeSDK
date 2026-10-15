#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace CriWare
{
	struct alignas(8) CriAtomExAcfDebug_SelectorLabelInfo
	{
		::System::String* selectorName; // 0x10
		::System::String* labelName; // 0x18
	};
}

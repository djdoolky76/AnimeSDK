#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace CriWare
{
	struct alignas(8) CriAtomExAcfDebug_AisacControlInfo
	{
		::System::String* name; // 0x10
		::System::UInt32 id; // 0x18
	};
}

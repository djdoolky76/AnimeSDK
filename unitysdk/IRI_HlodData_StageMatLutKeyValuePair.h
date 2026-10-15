#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

	struct alignas(8) IRI_HlodData_StageMatLutKeyValuePair
	{
		::System::String* stageRootName; // 0x10
		::System::String* matLutPath; // 0x18
	};

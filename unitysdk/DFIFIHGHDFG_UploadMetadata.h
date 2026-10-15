#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

inline static constexpr unsigned int DFIFIHGHDFG_UploadMetadata_TypeDefinitionIndex = 47413;

	struct alignas(8) DFIFIHGHDFG_UploadMetadata
	{
		::System::UInt32 version; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* platform; // 0x18
		::System::String* resourceBranch; // 0x20
		::System::String* api; // 0x28
	};

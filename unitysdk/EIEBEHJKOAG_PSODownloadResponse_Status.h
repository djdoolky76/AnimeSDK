#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

inline static constexpr unsigned int EIEBEHJKOAG_PSODownloadResponse_Status_TypeDefinitionIndex = 47409;

	struct alignas(8) EIEBEHJKOAG_PSODownloadResponse_Status
	{
		::System::Int32 code; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x18
	};

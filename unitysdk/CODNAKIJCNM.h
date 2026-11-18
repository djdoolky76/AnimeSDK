#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

inline static constexpr unsigned int CODNAKIJCNM_TypeDefinitionIndex = 96501;

struct alignas(8) CODNAKIJCNM
{
	::UnityEngine::Texture2D* FPNKAGADALJ; // 0x10
	::UnityEngine::Vector2Int CIMKKNBIEDH; // 0x18
	::System::Int32 BIOGEIHKABE; // 0x20
	::System::Int32 IAKPGBCAAKM; // 0x24
	::System::Boolean HAFDIMGJBHC; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 OCALHHLFBAF; // 0x2C
	::System::String* FDCDHPGECCC; // 0x30
};

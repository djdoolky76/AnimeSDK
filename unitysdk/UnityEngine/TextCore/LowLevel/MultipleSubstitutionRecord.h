#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int MultipleSubstitutionRecord_TypeDefinitionIndex = 21199;

	struct alignas(8) MultipleSubstitutionRecord
	{
		::System::UInt32 m_TargetGlyphID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* m_SubstituteGlyphIDs; // 0x18
	};
}

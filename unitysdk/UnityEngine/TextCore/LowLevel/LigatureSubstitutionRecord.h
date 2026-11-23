#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_TEXTCORE_LOWLEVEL_LIGATURESUBSTITUTIONRECORD_GET_COMPONENTGLYPHIDS_OFFSET UNITYSDK_OFFSET(0x2C141F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_LIGATURESUBSTITUTIONRECORD_GET_LIGATUREGLYPHID_OFFSET UNITYSDK_OFFSET(0x2E79A30)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int LigatureSubstitutionRecord_TypeDefinitionIndex = 21186;

	struct alignas(8) LigatureSubstitutionRecord
	{
		::Il2CppArray<::System::UInt32>* m_ComponentGlyphIDs; // 0x10
		::System::UInt32 m_LigatureGlyphID; // 0x18

		::System::UInt32 get_ligatureGlyphID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_LIGATURESUBSTITUTIONRECORD_GET_LIGATUREGLYPHID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_componentGlyphIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_LIGATURESUBSTITUTIONRECORD_GET_COMPONENTGLYPHIDS_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define PDHJKBBGLAB__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA6B90)

inline static constexpr unsigned int PDHJKBBGLAB_TypeDefinitionIndex = 61238;

class PDHJKBBGLAB : public ::IOONMNPCCNF
{
public:
	::System::Single OCLCJKHLBKI; // 0x18
	::UnityEngine::Vector2 MPLDDNMCECG; // 0x1C
	::UnityEngine::Color JBBFCGAMDHI; // 0x24
	::System::Boolean FBAFACLKIID; // 0x34
	::System::Byte _padding0[0x3];
	::System::Single FHAKFKGKCCH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHJKBBGLAB__CTOR_OFFSET))(this);
	}
};

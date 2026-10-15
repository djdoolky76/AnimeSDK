#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JIJDLGOGDPK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CBA12D0)
#define JIJDLGOGDPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA1350)

inline static constexpr unsigned int JIJDLGOGDPK_TypeDefinitionIndex = 43541;

	class JIJDLGOGDPK : public ::NOOHPODHIAA
	{
	public:
		::UnityEngine::Vector3 KEJAHHOADEC; // 0x338
		::System::Boolean AOEBHLBJIOP; // 0x344
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 EBDGPICAGAC; // 0x348
		::System::Single KIPAGNCANAJ; // 0x354
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJDLGOGDPK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJDLGOGDPK_CLEAR_OFFSET))(this);
		}

	};

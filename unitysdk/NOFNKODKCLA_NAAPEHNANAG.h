#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/NOFNKODKCLA_KMNHALFPKNG.h"

#define NOFNKODKCLA_NAAPEHNANAG_CEKOCFKIJDO_OFFSET UNITYSDK_OFFSET(0xE5A1600)
#define NOFNKODKCLA_NAAPEHNANAG__CTOR_OFFSET UNITYSDK_OFFSET(0xE5A15F0)

inline static constexpr unsigned int NOFNKODKCLA_NAAPEHNANAG_TypeDefinitionIndex = 63879;

class NOFNKODKCLA_NAAPEHNANAG : public ::System::Object
{
public:
	::UnityEngine::Vector3 KACJMJDKKCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_NAAPEHNANAG__CTOR_OFFSET))(this);
	}

	::System::Int32 CEKOCFKIJDO(::NOFNKODKCLA_KMNHALFPKNG EJCBEJMGFAJ, ::NOFNKODKCLA_KMNHALFPKNG EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::NOFNKODKCLA_KMNHALFPKNG, ::NOFNKODKCLA_KMNHALFPKNG))((::PBYTE)hIl2Cpp + NOFNKODKCLA_NAAPEHNANAG_CEKOCFKIJDO_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define FMCHBGCGKAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4B110)

inline static constexpr unsigned int FMCHBGCGKAN_TypeDefinitionIndex = 94034;

class FMCHBGCGKAN : public ::BIHPBFHEOOA
{
public:
	::System::Int32 OBNIAHNMHPF; // 0x10
	::System::UInt32 KCNOHOOPNAH; // 0x14
	::System::UInt32 PHMHPKGBDEC; // 0x18
	::System::UInt32 NPOKKENNIPM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCHBGCGKAN__CTOR_OFFSET))(this);
	}
};

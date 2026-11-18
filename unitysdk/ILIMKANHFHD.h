#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ILIMKANHFHD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x775AD0)

inline static constexpr unsigned int ILIMKANHFHD_TypeDefinitionIndex = 87973;

struct alignas(4) ILIMKANHFHD
{
	::UnityEngine::Vector3 JHIJLNJECKO; // 0x10
	::UnityEngine::Vector3 PLLKPKODJEN; // 0x1C
	::UnityEngine::Vector3 BHOBFHLOCOF; // 0x28
	::UnityEngine::Vector3 JDKGFILKOII; // 0x34
	::System::Single BNCNHGABIFP; // 0x40
	::System::Single OKDPFOKIGIK; // 0x44
	::System::Boolean DEELDJNFLLK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Single HONJNEGDEAE; // 0x4C
	::System::Int32 AECANAPOKLL; // 0x50

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIMKANHFHD_NPOLNFDBOOD_OFFSET))(this);
	}
};

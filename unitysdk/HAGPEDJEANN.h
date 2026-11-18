#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NDKCOKHJJPF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GPBHLAEECMC;

#define HAGPEDJEANN_FNMKPJANFJJ_OFFSET UNITYSDK_OFFSET(0x7426E0)
#define HAGPEDJEANN_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x5FA570)

inline static constexpr unsigned int HAGPEDJEANN_TypeDefinitionIndex = 75914;

struct alignas(4) HAGPEDJEANN
{
	::System::UInt32 LACJPGJJLCH; // 0x10
	::System::Byte _padding0[0x4];
	::MoleMole::EntityHandle HPADNAEINPK; // 0x18
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x28
	::UnityEngine::Vector3 BFBELMDIAHI; // 0x34
	::NDKCOKHJJPF LKOCEPJLFDK; // 0x40
	::System::Boolean DHOONKMJEMC; // 0x44

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGPEDJEANN_JDAPDDEOCEA_OFFSET))(this);
	}

	::GPBHLAEECMC* FNMKPJANFJJ()
	{
		return ((::GPBHLAEECMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGPEDJEANN_FNMKPJANFJJ_OFFSET))(this);
	}
};

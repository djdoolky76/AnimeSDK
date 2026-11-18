#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KELPHNNDEDF.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/System/Object.h"

#define NFCNGACBIJF_KBLHPDGBIDL_EHAFLNMNNJA_OFFSET UNITYSDK_OFFSET(0x131418B0)
#define NFCNGACBIJF_KBLHPDGBIDL__CTOR_OFFSET UNITYSDK_OFFSET(0x131418A0)

inline static constexpr unsigned int NFCNGACBIJF_KBLHPDGBIDL_TypeDefinitionIndex = 49774;

class NFCNGACBIJF_KBLHPDGBIDL : public ::System::Object
{
public:
	::MoleMole::Config::InputGroup IKGCPMHOFJJ; // 0x10
	::System::Boolean FBILHHBPEHD; // 0x14
	::System::Byte _padding0[0x3];
	::KELPHNNDEDF FCPCLIJNDLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCNGACBIJF_KBLHPDGBIDL__CTOR_OFFSET))(this);
	}

	::System::Void EHAFLNMNNJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCNGACBIJF_KBLHPDGBIDL_EHAFLNMNNJA_OFFSET))(this);
	}
};

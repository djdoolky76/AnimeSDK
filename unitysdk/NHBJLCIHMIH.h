#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define NHBJLCIHMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE6D50)

inline static constexpr unsigned int NHBJLCIHMIH_TypeDefinitionIndex = 56333;

class NHBJLCIHMIH : public ::System::Object
{
public:
	// static const ::System::Int32 FDJHEBHLJLD = 0x0; // 0x0
	// static const ::System::Int32 IMIFCCKIAKG = 0x1; // 0x0
	// static const ::System::Int32 ODBGELHPDLJ = 0x2; // 0x0
	// static const ::System::Int32 AIHGNHJGOHP = 0x3; // 0x0
	::MoleMole::EntityHandle LJENMCPCPCL; // 0x10
	::System::Int32 ILHGDABOMPE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBJLCIHMIH__CTOR_OFFSET))(this);
	}
};

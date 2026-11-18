#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDGDIFDMIDP;

#define OFOAFKKLMFN__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5E9A0)

inline static constexpr unsigned int OFOAFKKLMFN_TypeDefinitionIndex = 47883;

class OFOAFKKLMFN : public ::System::Object
{
public:
	::IDGDIFDMIDP* GGODNFDLEGE; // 0x10
	::System::Int64 EHDGDIEAPEP; // 0x18

	::System::Void _ctor(::IDGDIFDMIDP* GGODNFDLEGE, ::System::Int64 EHDGDIEAPEP)
	{
		return ((::System::Void(*)(::PVOID, ::IDGDIFDMIDP*, ::System::Int64))((::PBYTE)hIl2Cpp + OFOAFKKLMFN__CTOR_OFFSET))(this, GGODNFDLEGE, EHDGDIEAPEP);
	}
};

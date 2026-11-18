#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COBPHGPKPLN;
namespace System { class Type; }

#define KKKFBHELCFC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xD3FF160)
#define KKKFBHELCFC__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FF080)

inline static constexpr unsigned int KKKFBHELCFC_TypeDefinitionIndex = 87114;

class KKKFBHELCFC : public ::System::Object
{
public:
	::COBPHGPKPLN* OOAFHHFCKLO; // 0x10
	::System::Type* FNLGDLHAEGD; // 0x18
	::System::UInt32 KNNFFJGOFPK; // 0x20
	::System::UInt32 BBGNHGABNDA; // 0x24

	::System::Void _ctor(::System::Type* OBNIAHNMHPF, ::System::UInt32 FONJEJLMJNK, ::System::UInt32 BIOGEIHKABE, ::System::Int32 JMFMFADJDCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KKKFBHELCFC__CTOR_OFFSET))(this, OBNIAHNMHPF, FONJEJLMJNK, BIOGEIHKABE, JMFMFADJDCP);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKFBHELCFC_NPOLNFDBOOD_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class LGINJIKKBJA;

#define JGFEAGAFBFC_EBIELMMBIOH_OFFSET UNITYSDK_OFFSET(0x198113C0)
#define JGFEAGAFBFC_GKMOBBGLFII_OFFSET UNITYSDK_OFFSET(0x19811420)
#define JGFEAGAFBFC_PGHIKKCHHCP_OFFSET UNITYSDK_OFFSET(0x19811720)
#define JGFEAGAFBFC__CTOR_OFFSET UNITYSDK_OFFSET(0x198113B0)

inline static constexpr unsigned int JGFEAGAFBFC_TypeDefinitionIndex = 44987;

class JGFEAGAFBFC : public ::System::Object
{
public:
	::FGCOIBFFCHB* FNIPKCPDOEM; // 0x10
	::LGINJIKKBJA* DNLDJKDCCEP; // 0x18
	::FGCOIBFFCHB* FFELKHNJOHG; // 0x20
	::FGCOIBFFCHB* PBNOPGCPMAP; // 0x28
	::System::Boolean FIOGLGKFCDO; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 OIKFFGKDHME; // 0x34
	::System::Int32 HKEHLELHHJB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFEAGAFBFC__CTOR_OFFSET))(this);
	}

	::System::Void EBIELMMBIOH(::System::Int32 FFNJIGENDFE, ::System::Int32 HKEHLELHHJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JGFEAGAFBFC_EBIELMMBIOH_OFFSET))(this, FFNJIGENDFE, HKEHLELHHJB);
	}

	::System::Void PGHIKKCHHCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFEAGAFBFC_PGHIKKCHHCP_OFFSET))(this);
	}

	::System::Void GKMOBBGLFII(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGFEAGAFBFC_GKMOBBGLFII_OFFSET))(this, OIKFFGKDHME);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIMDOBJBNDF;
namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HIJCGEKONDJ_CBDMCJFPDKE_OFFSET UNITYSDK_OFFSET(0x1F126010)
#define HIJCGEKONDJ_NKLNCMGDCJO_OFFSET UNITYSDK_OFFSET(0x1F125F00)
#define HIJCGEKONDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F125EF0)

inline static constexpr unsigned int HIJCGEKONDJ_TypeDefinitionIndex = 95165;

class HIJCGEKONDJ : public ::System::Object
{
public:
	::CIMDOBJBNDF* EMAGOPDOCDK; // 0x10
	::System::Int32 GGAOPCILMFK; // 0x18
	::System::Int32 CFPMALEHIFL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCGEKONDJ__CTOR_OFFSET))(this);
	}

	::System::Void NKLNCMGDCJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCGEKONDJ_NKLNCMGDCJO_OFFSET))(this);
	}

	::FlatBuffers::ByteBuffer* CBDMCJFPDKE(::System::String* CMFPFPJHDHJ)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIJCGEKONDJ_CBDMCJFPDKE_OFFSET))(this, CMFPFPJHDHJ);
	}
};

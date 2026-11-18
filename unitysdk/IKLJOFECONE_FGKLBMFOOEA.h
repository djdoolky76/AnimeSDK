#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKLJOFECONE;

#define IKLJOFECONE_FGKLBMFOOEA_FCHBLBBFENM_OFFSET UNITYSDK_OFFSET(0x138151B0)
#define IKLJOFECONE_FGKLBMFOOEA_GHLBCELMCEE_OFFSET UNITYSDK_OFFSET(0x138151C0)
#define IKLJOFECONE_FGKLBMFOOEA_HHDOKCAMEOK_OFFSET UNITYSDK_OFFSET(0x13815170)
#define IKLJOFECONE_FGKLBMFOOEA__CTOR_OFFSET UNITYSDK_OFFSET(0x13815160)

inline static constexpr unsigned int IKLJOFECONE_FGKLBMFOOEA_TypeDefinitionIndex = 50557;

class IKLJOFECONE_FGKLBMFOOEA : public ::System::Object
{
public:
	::IKLJOFECONE* KLHPEBKNIFB; // 0x10
	::System::Single IMLLDOHDCNC; // 0x18
	::System::Int32 PPELJIHKBBD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_FGKLBMFOOEA__CTOR_OFFSET))(this);
	}

	::System::Void HHDOKCAMEOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_FGKLBMFOOEA_HHDOKCAMEOK_OFFSET))(this);
	}

	::System::Single FCHBLBBFENM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLJOFECONE_FGKLBMFOOEA_FCHBLBBFENM_OFFSET))(this);
	}

	::System::Void GHLBCELMCEE(::System::Single FOOBONOEPGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLJOFECONE_FGKLBMFOOEA_GHLBCELMCEE_OFFSET))(this, FOOBONOEPGD);
	}
};

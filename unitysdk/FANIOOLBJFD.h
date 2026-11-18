#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FANIOOLBJFD_AALNPHOJJPC_1_OFFSET UNITYSDK_OFFSET(0x169BD800)
#define FANIOOLBJFD_AALNPHOJJPC_OFFSET UNITYSDK_OFFSET(0x169BD6C0)
#define FANIOOLBJFD_BOKMJMOAONH_OFFSET UNITYSDK_OFFSET(0x169BD720)
#define FANIOOLBJFD_FDEMMNCMLGD_OFFSET UNITYSDK_OFFSET(0x169BD790)

inline static constexpr unsigned int FANIOOLBJFD_TypeDefinitionIndex = 69996;

class FANIOOLBJFD : public ::System::Object
{
public:
	static ::System::Int32 AALNPHOJJPC(::System::Int32 HAAEBCOBKFF, ::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FANIOOLBJFD_AALNPHOJJPC_OFFSET))(HAAEBCOBKFF, GDBANLBHNJK, DNFNKBNBJHM);
	}

	static ::System::Single BOKMJMOAONH(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FANIOOLBJFD_BOKMJMOAONH_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}

	static ::System::Single FDEMMNCMLGD(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FANIOOLBJFD_FDEMMNCMLGD_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}

	static ::System::Single AALNPHOJJPC_1(::System::Single HAAEBCOBKFF, ::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FANIOOLBJFD_AALNPHOJJPC_1_OFFSET))(HAAEBCOBKFF, GDBANLBHNJK, DNFNKBNBJHM);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMANAHJIDLO.h"

class NILGNGDBENM;

#define FDAEFGJPNKL_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x11AC1FB0)
#define FDAEFGJPNKL__CTOR_OFFSET UNITYSDK_OFFSET(0x11AC2060)

inline static constexpr unsigned int FDAEFGJPNKL_TypeDefinitionIndex = 87298;

class FDAEFGJPNKL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDAEFGJPNKL__CTOR_OFFSET))(this);
	}

	::System::Int32 FHDJDIIPGGP(::NILGNGDBENM* DEKJDEPKKLH, ::BMANAHJIDLO OBIPHBKODPP)
	{
		return ((::System::Int32(*)(::PVOID, ::NILGNGDBENM*, ::BMANAHJIDLO))((::PBYTE)hIl2Cpp + FDAEFGJPNKL_FHDJDIIPGGP_OFFSET))(this, DEKJDEPKKLH, OBIPHBKODPP);
	}
};

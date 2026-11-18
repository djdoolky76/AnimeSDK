#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKLEOKFNLH.h"

class NILGNGDBENM;

#define BHNMLKFHMJI_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x128AA920)
#define BHNMLKFHMJI__CTOR_OFFSET UNITYSDK_OFFSET(0x128AA9D0)

inline static constexpr unsigned int BHNMLKFHMJI_TypeDefinitionIndex = 47353;

class BHNMLKFHMJI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNMLKFHMJI__CTOR_OFFSET))(this);
	}

	::System::Int32 FHDJDIIPGGP(::NILGNGDBENM* DEKJDEPKKLH, ::ABKLEOKFNLH OBIPHBKODPP)
	{
		return ((::System::Int32(*)(::PVOID, ::NILGNGDBENM*, ::ABKLEOKFNLH))((::PBYTE)hIl2Cpp + BHNMLKFHMJI_FHDJDIIPGGP_OFFSET))(this, DEKJDEPKKLH, OBIPHBKODPP);
	}
};

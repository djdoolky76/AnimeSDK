#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define IJKPADCDJBP_EPMMEDHAAKL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x138111A0)
#define IJKPADCDJBP_EPMMEDHAAKL__CTOR_OFFSET UNITYSDK_OFFSET(0x13811190)

inline static constexpr unsigned int IJKPADCDJBP_EPMMEDHAAKL_TypeDefinitionIndex = 90803;

class IJKPADCDJBP_EPMMEDHAAKL : public ::System::Object
{
public:
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKPADCDJBP_EPMMEDHAAKL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IJKPADCDJBP_EPMMEDHAAKL_LIDNPLMPHAL_OFFSET))(this, NAPFALLANDL);
	}
};

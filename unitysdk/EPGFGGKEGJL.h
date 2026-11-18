#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPGFGGKEGJL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A6FDF30)
#define EPGFGGKEGJL_DEIGIAGDABD_OFFSET UNITYSDK_OFFSET(0x1A6FDFD0)
#define EPGFGGKEGJL_HFFKHAFNDKE_OFFSET UNITYSDK_OFFSET(0x1A6F94C0)
#define EPGFGGKEGJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F94B0)

inline static constexpr unsigned int EPGFGGKEGJL_TypeDefinitionIndex = 22417;

class EPGFGGKEGJL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGFGGKEGJL__CTOR_OFFSET))(this);
	}

	::System::Void HFFKHAFNDKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGFGGKEGJL_HFFKHAFNDKE_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGFGGKEGJL_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void DEIGIAGDABD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGFGGKEGJL_DEIGIAGDABD_OFFSET))(this);
	}
};

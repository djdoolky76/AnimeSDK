#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDKEFEJMOIO__CTOR_OFFSET UNITYSDK_OFFSET(0x10D70D40)

inline static constexpr unsigned int NDKEFEJMOIO_TypeDefinitionIndex = 45265;

class NDKEFEJMOIO : public ::System::Object
{
public:
	// static const ::System::Int32 BIOLDDLEJNN = 0x0; // 0x0
	// static const ::System::Int32 PAFFHKDNPKF = 0x1; // 0x0
	// static const ::System::Int32 MDJJINKODOD = 0x2; // 0x0
	// static const ::System::Int32 DIEDBDNMEHL = 0x3; // 0x0
	// static const ::System::Int32 NEFLELJHMJP = 0x4; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKEFEJMOIO__CTOR_OFFSET))(this);
	}
};

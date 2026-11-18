#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GHPOBBJGPCM__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDA340)

inline static constexpr unsigned int GHPOBBJGPCM_TypeDefinitionIndex = 48950;

class GHPOBBJGPCM : public ::System::Object
{
public:
	// static const ::System::Int32 OCEHDHGIOBN = 0x1; // 0x0
	// static const ::System::Int32 HFFCCLJDLFM = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPOBBJGPCM__CTOR_OFFSET))(this);
	}
};

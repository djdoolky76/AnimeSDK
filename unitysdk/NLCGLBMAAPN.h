#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NLCGLBMAAPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE28260)

inline static constexpr unsigned int NLCGLBMAAPN_TypeDefinitionIndex = 86137;

class NLCGLBMAAPN : public ::System::Object
{
public:
	// static const ::System::Int32 DLLGBAPBMLA = 0x1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCGLBMAAPN__CTOR_OFFSET))(this);
	}
};

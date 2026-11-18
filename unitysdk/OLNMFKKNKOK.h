#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OLNMFKKNKOK__CTOR_OFFSET UNITYSDK_OFFSET(0x11B46300)

inline static constexpr unsigned int OLNMFKKNKOK_TypeDefinitionIndex = 45722;

class OLNMFKKNKOK : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNMFKKNKOK__CTOR_OFFSET))(this);
	}
};

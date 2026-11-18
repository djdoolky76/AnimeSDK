#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define BMHCJPNCLNF_CLCMALBBPCA_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1425CFA0)
#define BMHCJPNCLNF_CLCMALBBPCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1425CF90)

inline static constexpr unsigned int BMHCJPNCLNF_CLCMALBBPCA_TypeDefinitionIndex = 49875;

class BMHCJPNCLNF_CLCMALBBPCA : public ::System::Object
{
public:
	::HOCDHMEPPEG IHLBALNBGKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHCJPNCLNF_CLCMALBBPCA__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHCJPNCLNF_CLCMALBBPCA_LIDNPLMPHAL_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;

#define ILFCLMGCCPC_GLFNGFDCFEK_MNLHLLEHBPF_OFFSET UNITYSDK_OFFSET(0x13C9ABF0)
#define ILFCLMGCCPC_GLFNGFDCFEK__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9ABE0)

inline static constexpr unsigned int ILFCLMGCCPC_GLFNGFDCFEK_TypeDefinitionIndex = 82623;

class ILFCLMGCCPC_GLFNGFDCFEK : public ::System::Object
{
public:
	::System::Int32 KCNOHOOPNAH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFCLMGCCPC_GLFNGFDCFEK__CTOR_OFFSET))(this);
	}

	::System::Void MNLHLLEHBPF(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + ILFCLMGCCPC_GLFNGFDCFEK_MNLHLLEHBPF_OFFSET))(this, JOLDOMEIKEF);
	}
};

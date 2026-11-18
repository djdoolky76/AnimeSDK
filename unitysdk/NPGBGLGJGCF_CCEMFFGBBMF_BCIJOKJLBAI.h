#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_NJGMAAGPODN.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPGBGLGJGCF_CCEMFFGBBMF_BCIJOKJLBAI_LIBDGNNMHFB_OFFSET UNITYSDK_OFFSET(0x5FA570)
#define NPGBGLGJGCF_CCEMFFGBBMF_BCIJOKJLBAI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x5FA580)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_BCIJOKJLBAI_TypeDefinitionIndex = 59320;

struct alignas(8) NPGBGLGJGCF_CCEMFFGBBMF_BCIJOKJLBAI
{
	::NPGBGLGJGCF_CCEMFFGBBMF_NJGMAAGPODN CEDLNFLCACM; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* PJKPKAFIOHO; // 0x18
	::UnityEngine::Vector3 BGIENLNGBBD; // 0x20
	::System::Byte _padding1[0x4];
	::System::String* ADEDOIBECFA; // 0x30
	::System::String* BHHDGOEDJAG; // 0x38

	::System::Boolean LIBDGNNMHFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BCIJOKJLBAI_LIBDGNNMHFB_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BCIJOKJLBAI_NPOLNFDBOOD_OFFSET))(this);
	}
};

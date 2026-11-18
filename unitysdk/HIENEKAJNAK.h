#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEOKPBGNDPA.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"

#define HIENEKAJNAK__CTOR_OFFSET UNITYSDK_OFFSET(0x748BE0)

inline static constexpr unsigned int HIENEKAJNAK_TypeDefinitionIndex = 67112;

struct alignas(4) HIENEKAJNAK
{
	::NEOKPBGNDPA JPNOHKCEJJP; // 0x10
	::PipelineCamera::WorldBasicCameraData IIPOALFEFHI; // 0x64

	::System::Void _ctor(::NEOKPBGNDPA KHPKNBLPNOO, ::PipelineCamera::WorldBasicCameraData JFLDAALEMGB)
	{
		return ((::System::Void(*)(::PVOID, ::NEOKPBGNDPA, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + HIENEKAJNAK__CTOR_OFFSET))(this, KHPKNBLPNOO, JFLDAALEMGB);
	}
};

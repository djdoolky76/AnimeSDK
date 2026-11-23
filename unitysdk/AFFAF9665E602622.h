#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class SSAO; }

#define AFFAF9665E602622_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x27787F0)
#define AFFAF9665E602622__CTOR_OFFSET UNITYSDK_OFFSET(0x2778920)

inline static constexpr unsigned int AFFAF9665E602622_TypeDefinitionIndex = 16470;

class AFFAF9665E602622 : public ::System::Object
{
public:
	::System::Single F3D50DA876564E4F; // 0x10
	::System::Single E5B9EEC496E38CD1; // 0x14
	::System::Single B9B585D932D81052; // 0x18
	::System::Single ED8ACE0CB3F56041; // 0x1C
	::System::Single A904CE9E9DDD7778; // 0x20
	::System::Single EBFA41B8BCC4BC75; // 0x24
	::System::Single ABFBA1D309608262; // 0x28

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::SSAO* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::SSAO*))((::PBYTE)hIl2Cpp + AFFAF9665E602622_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::SSAO* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::SSAO*))((::PBYTE)hIl2Cpp + AFFAF9665E602622__CTOR_OFFSET))(this, A567F659199E4401);
	}
};

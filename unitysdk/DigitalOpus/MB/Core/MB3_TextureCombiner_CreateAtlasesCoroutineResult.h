#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_CREATEATLASESCOROUTINERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F228C00)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombiner_CreateAtlasesCoroutineResult_TypeDefinitionIndex = 96313;

	class MB3_TextureCombiner_CreateAtlasesCoroutineResult : public ::System::Object
	{
	public:
		::System::Boolean success; // 0x10
		::System::Boolean isFinished; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_CREATEATLASESCOROUTINERESULT__CTOR_OFFSET))(this);
		}
	};
}

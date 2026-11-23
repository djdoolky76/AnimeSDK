#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_BaseSync.h"

class E1153259FC38F47B;
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_GEOSYNC_BE76AA8ADDE81437_OFFSET UNITYSDK_OFFSET(0x3814460)
#define HOUDINIENGINEUNITY_HEU_GEOSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x3814530)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeoSync_TypeDefinitionIndex = 17898;

	class HEU_GeoSync : public ::HoudiniEngineUnity::HEU_BaseSync
	{
	public:
		::System::String* _filePath; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOSYNC__CTOR_OFFSET))(this);
		}

		::System::Void BE76AA8ADDE81437(::E1153259FC38F47B* AF4435B7B5FB505E)
		{
			return ((::System::Void(*)(::PVOID, ::E1153259FC38F47B*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GEOSYNC_BE76AA8ADDE81437_OFFSET))(this, AF4435B7B5FB505E);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/AK/Wwise/BaseType.h"

class WwiseAcousticTextureReference;
class WwiseObjectReference;

#define AK_WWISE_ACOUSTICTEXTURE_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define AK_WWISE_ACOUSTICTEXTURE_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x2912850)
#define AK_WWISE_ACOUSTICTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int AcousticTexture_TypeDefinitionIndex = 21566;

	class AcousticTexture : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseAcousticTextureReference* WwiseObjectReference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_ACOUSTICTEXTURE__CTOR_OFFSET))(this);
		}

		::A2F3E384E505AFEB get_WwiseObjectType()
		{
			return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_ACOUSTICTEXTURE_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_ACOUSTICTEXTURE_GET_OBJECTREFERENCE_OFFSET))(this);
		}
	};
}

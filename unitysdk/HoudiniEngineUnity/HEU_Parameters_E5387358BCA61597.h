#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERS_E5387358BCA61597_A68E56EB07B273F4_OFFSET UNITYSDK_OFFSET(0x38979F0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS_E5387358BCA61597__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Parameters_E5387358BCA61597_TypeDefinitionIndex = 18096;

	class HEU_Parameters_E5387358BCA61597 : public ::System::Object
	{
	public:
		::System::Int32 F3F0115C26C3B279; // 0x10
		::System::Byte _padding0[0x4];
		::System::E891BA3236FD13E7<::HoudiniEngineUnity::HAPI_ParmInfo>* F422651CC4956382; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_E5387358BCA61597__CTOR_OFFSET))(this);
		}

		::System::Boolean A68E56EB07B273F4(::HoudiniEngineUnity::HAPI_ParmInfo B5459FABA90E20BD)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS_E5387358BCA61597_A68E56EB07B273F4_OFFSET))(this, B5459FABA90E20BD);
		}
	};
}

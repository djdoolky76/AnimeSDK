#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/A7F2C5994AC126B4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_CUSTOMRENDERPIPELINE_RENDEROBJECTREGISTER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x27D9AA0)
#define ABC_CUSTOMRENDERPIPELINE_RENDEROBJECTREGISTER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x27D9B10)
#define ABC_CUSTOMRENDERPIPELINE_RENDEROBJECTREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE66A0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int RenderObjectRegister_TypeDefinitionIndex = 16736;

	class RenderObjectRegister : public ::UnityEngine::MonoBehaviour
	{
	public:
		::B88870E9FB4B8C1A::A7F2C5994AC126B4 renderObjectType; // 0x20

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDEROBJECTREGISTER_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDEROBJECTREGISTER__CTOR_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDEROBJECTREGISTER_BF13C91AD80643D2_OFFSET))(this);
		}
	};
}

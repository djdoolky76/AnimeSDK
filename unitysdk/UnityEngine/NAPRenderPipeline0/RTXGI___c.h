#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED87130)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED87170)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI___C___CCTOR_B__72_0_OFFSET UNITYSDK_OFFSET(0x1ED87180)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXGI___c_TypeDefinitionIndex = 5807;

	class RTXGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RTXGI___c_TypeDefinitionIndex)->GetStaticField(0x5070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__72_0(::System::String* arg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI___C___CCTOR_B__72_0_OFFSET))(this, arg);
		}
	};
}

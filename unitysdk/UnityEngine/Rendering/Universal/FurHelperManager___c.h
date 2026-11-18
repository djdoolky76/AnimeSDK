#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FurHelper_ObjectInfos.h"

namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED17E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED1820)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__DRAWFURLAYERS_B__17_0_OFFSET UNITYSDK_OFFSET(0x1CED1830)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FurHelperManager___c_TypeDefinitionIndex = 26298;

	class FurHelperManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager___c_TypeDefinitionIndex)->GetStaticField(0x23AE0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager___c_TypeDefinitionIndex)->GetStaticField(0x23AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _DrawFurLayers_b__17_0(::FurHelper_ObjectInfos a, ::FurHelper_ObjectInfos b)
		{
			return ((::System::Int32(*)(::PVOID, ::FurHelper_ObjectInfos, ::FurHelper_ObjectInfos))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__DRAWFURLAYERS_B__17_0_OFFSET))(this, a, b);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING_F5628F8349D4A8A6_F9119873186ED596_OFFSET UNITYSDK_OFFSET(0x27DE690)
#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x27DE860)
#define ABC_CUSTOMRENDERPIPELINE_COLORGRADING_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ColorGrading_F5628F8349D4A8A6_TypeDefinitionIndex = 16733;

	class ColorGrading_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ABC::CustomRenderPipeline::ColorGrading_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ABC::CustomRenderPipeline::ColorGrading_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ColorGrading_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::UnityEngine::E8984F4E44AE20E5, ::System::Single, ::UnityEngine::E8984F4E44AE20E5>** StaticGet_B79B0E089A29B2E7()
		{
			return (::System::Func_3<::UnityEngine::E8984F4E44AE20E5, ::System::Single, ::UnityEngine::E8984F4E44AE20E5>**)Il2CppClass::FromTypeDefinitionIndex(ColorGrading_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::UnityEngine::E8984F4E44AE20E5 F9119873186ED596(::UnityEngine::E8984F4E44AE20E5 FD6BEC6563AC7110, ::System::Single A73B96BE7F2DEBF7)
		{
			return ((::UnityEngine::E8984F4E44AE20E5(*)(::PVOID, ::UnityEngine::E8984F4E44AE20E5, ::System::Single))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_COLORGRADING_F5628F8349D4A8A6_F9119873186ED596_OFFSET))(this, FD6BEC6563AC7110, A73B96BE7F2DEBF7);
		}
	};
}

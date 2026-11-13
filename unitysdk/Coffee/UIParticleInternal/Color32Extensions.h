#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x2081C1E0)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_1_OFFSET UNITYSDK_OFFSET(0x2081BF70)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_OFFSET UNITYSDK_OFFSET(0x2081BB60)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_1_OFFSET UNITYSDK_OFFSET(0x2081BD00)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_OFFSET UNITYSDK_OFFSET(0x2081B9C0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Color32Extensions_TypeDefinitionIndex = 40835;

	class Color32Extensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Color32>** StaticGet_s_Colors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color32>**)UnitySDK::FromName("Coffee.UIParticleInternal", "Color32Extensions")->GetStaticField(0xBB0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_s_LinearToGammaLut()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Coffee.UIParticleInternal", "Color32Extensions")->GetStaticField(0xBB8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_s_GammaToLinearLut()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Coffee.UIParticleInternal", "Color32Extensions")->GetStaticField(0xBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_CCTOR_OFFSET))();
		}

		static ::System::Byte LinearToGamma(::System::Byte a1)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_OFFSET))(a1);
		}

		static ::System::Byte GammaToLinear(::System::Byte a1)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_OFFSET))(a1);
		}

		static ::System::Void LinearToGamma_1(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_1_OFFSET))(a1);
		}

		static ::System::Void GammaToLinear_1(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_1_OFFSET))(a1);
		}

	};
}

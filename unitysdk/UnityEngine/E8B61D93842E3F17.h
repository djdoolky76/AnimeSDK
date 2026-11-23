#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class E8B61D93842E3F17_A7033D734686AE40; }

#define UNITYENGINE_E8B61D93842E3F17_BF07C297AD2C4C16_OFFSET UNITYSDK_OFFSET(0x43DC560)
#define UNITYENGINE_E8B61D93842E3F17_ED57A1D8D0EDC1FA_OFFSET UNITYSDK_OFFSET(0x43DC630)
#define UNITYENGINE_E8B61D93842E3F17_FFF3593FF6C073D5_OFFSET UNITYSDK_OFFSET(0x43DC5B0)

namespace UnityEngine
{
	inline static constexpr unsigned int E8B61D93842E3F17_TypeDefinitionIndex = 21489;

	class E8B61D93842E3F17 : public ::System::Object
	{
	public:
		static ::UnityEngine::E8B61D93842E3F17_A7033D734686AE40** StaticGet_ABEE1671F2183D65()
		{
			return (::UnityEngine::E8B61D93842E3F17_A7033D734686AE40**)Il2CppClass::FromTypeDefinitionIndex(E8B61D93842E3F17_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_B85393FDA29B3AAC()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(E8B61D93842E3F17_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Int32>** StaticGet_F50D57B0F37AD04B()
		{
			return (::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(E8B61D93842E3F17_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void BF07C297AD2C4C16()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_E8B61D93842E3F17_BF07C297AD2C4C16_OFFSET))();
		}

		static ::System::Void FFF3593FF6C073D5(::System::Boolean AE4D9C8A59AC8A1D, ::System::Boolean B264F0103D3993C4, ::System::Int32 A6CAE7339066B0FB)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_E8B61D93842E3F17_FFF3593FF6C073D5_OFFSET))(AE4D9C8A59AC8A1D, B264F0103D3993C4, A6CAE7339066B0FB);
		}

		static ::System::Void ED57A1D8D0EDC1FA(::System::Boolean AE4D9C8A59AC8A1D)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_E8B61D93842E3F17_ED57A1D8D0EDC1FA_OFFSET))(AE4D9C8A59AC8A1D);
		}
	};
}

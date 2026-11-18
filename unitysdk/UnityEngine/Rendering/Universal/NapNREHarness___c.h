#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8D3530)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__COMPAREMONOPOSREGISTRY_B__95_0_OFFSET UNITYSDK_OFFSET(0x1D8D3580)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__COMPAREMONOPOSREGISTRY_B__95_1_OFFSET UNITYSDK_OFFSET(0x1D8D37F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D3570)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness___c_TypeDefinitionIndex = 26857;

	class NapNREHarness___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness___c_TypeDefinitionIndex)->GetStaticField(0x22B20);
		}
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__95_1()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness___c_TypeDefinitionIndex)->GetStaticField(0x22B28);
		}
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__95_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapNREHarness___c_TypeDefinitionIndex)->GetStaticField(0x22B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__CTOR_OFFSET))(this);
		}

		::System::String* _CompareMonoPOSRegistry_b__95_0(::System::Int32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__COMPAREMONOPOSREGISTRY_B__95_0_OFFSET))(this, id);
		}

		::System::String* _CompareMonoPOSRegistry_b__95_1(::System::Int32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__COMPAREMONOPOSREGISTRY_B__95_1_OFFSET))(this, id);
		}
	};
}

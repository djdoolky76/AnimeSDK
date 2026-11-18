#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class NapRenderEntity;
namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF90170)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF901B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__UPDATELIGHTDATA_B__109_9_OFFSET UNITYSDK_OFFSET(0x1CF90200)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__UPDATEPERFRAME_B__101_0_OFFSET UNITYSDK_OFFSET(0x1CF901C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderEntityManager___c_TypeDefinitionIndex = 26511;

	class NapRenderEntityManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::NapRenderEntity*>** StaticGet___9__101_0()
		{
			return (::System::Comparison_1<::NapRenderEntity*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager___c_TypeDefinitionIndex)->GetStaticField(0x22D40);
		}
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>** StaticGet___9__109_9()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager___c_TypeDefinitionIndex)->GetStaticField(0x22D48);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEntityManager___c_TypeDefinitionIndex)->GetStaticField(0x22D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdatePerFrame_b__101_0(::NapRenderEntity* a, ::NapRenderEntity* b)
		{
			return ((::System::Int32(*)(::PVOID, ::NapRenderEntity*, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__UPDATEPERFRAME_B__101_0_OFFSET))(this, a, b);
		}

		::System::Int32 _UpdateLightData_b__109_9(::System::ValueTuple_2<::System::Int32, ::System::Single> a, ::System::ValueTuple_2<::System::Int32, ::System::Single> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Single>, ::System::ValueTuple_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERENTITYMANAGER___C__UPDATELIGHTDATA_B__109_9_OFFSET))(this, a, b);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderEntity;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS20_0__COMPAREVISIBILITY_B__0_OFFSET UNITYSDK_OFFSET(0x1D28F490)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS20_0__COMPAREVISIBILITY_B__1_OFFSET UNITYSDK_OFFSET(0x1D28F920)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28F480)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness___c__DisplayClass20_0_TypeDefinitionIndex = 26853;

	class NapNREHarness___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* managedNameById; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* nativeById; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* nativeVisById; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NapRenderEntity*>* managedEntityById; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* nativeAllVisById; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* managedVisById; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::String* _CompareVisibility_b__0(::System::Int32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS20_0__COMPAREVISIBILITY_B__0_OFFSET))(this, id);
		}

		::System::String* _CompareVisibility_b__1(::System::Int32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS20_0__COMPAREVISIBILITY_B__1_OFFSET))(this, id);
		}
	};
}

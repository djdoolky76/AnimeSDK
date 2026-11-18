#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MeshDecimator/Math/Vector2.h"
#include "unitysdk/MeshDecimator/Math/Vector3.h"
#include "unitysdk/MeshDecimator/Math/Vector3d.h"
#include "unitysdk/MeshDecimator/Math/Vector4.h"
#include "unitysdk/MeshDecimator/BoneWeight.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/StreamInClipInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__CCTOR_OFFSET UNITYSDK_OFFSET(0x1107DC30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__CTOR_OFFSET UNITYSDK_OFFSET(0x1107BCC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_0_OFFSET UNITYSDK_OFFSET(0x1107BCD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_10_OFFSET UNITYSDK_OFFSET(0x1102F1C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_11_OFFSET UNITYSDK_OFFSET(0x1107BEB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_12_OFFSET UNITYSDK_OFFSET(0x1102D1F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_13_OFFSET UNITYSDK_OFFSET(0x1102DC50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_14_OFFSET UNITYSDK_OFFSET(0x1107BFF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_15_OFFSET UNITYSDK_OFFSET(0x1107C1B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_16_OFFSET UNITYSDK_OFFSET(0x1107C3B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_17_OFFSET UNITYSDK_OFFSET(0x1107C5C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_18_OFFSET UNITYSDK_OFFSET(0x1107C7D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_19_OFFSET UNITYSDK_OFFSET(0x1107C9B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_1_OFFSET UNITYSDK_OFFSET(0x1102B940)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_20_OFFSET UNITYSDK_OFFSET(0x1107CBD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_21_OFFSET UNITYSDK_OFFSET(0x1107CE10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_22_OFFSET UNITYSDK_OFFSET(0x1107D010)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_23_OFFSET UNITYSDK_OFFSET(0x1107D1F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_24_OFFSET UNITYSDK_OFFSET(0x1107D3D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_25_OFFSET UNITYSDK_OFFSET(0x1107D520)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_26_OFFSET UNITYSDK_OFFSET(0x1107D670)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_27_OFFSET UNITYSDK_OFFSET(0x1107D800)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_28_OFFSET UNITYSDK_OFFSET(0x1107D930)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_29_OFFSET UNITYSDK_OFFSET(0x1107DAC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_2_OFFSET UNITYSDK_OFFSET(0x11027A50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_3_OFFSET UNITYSDK_OFFSET(0x1102C250)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_4_OFFSET UNITYSDK_OFFSET(0x1102B550)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_5_OFFSET UNITYSDK_OFFSET(0x1102BE80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_6_OFFSET UNITYSDK_OFFSET(0x1102C050)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_7_OFFSET UNITYSDK_OFFSET(0x1102BCC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_8_OFFSET UNITYSDK_OFFSET(0x1102B6A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_9_OFFSET UNITYSDK_OFFSET(0x1102BA90)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_17A8B8AA95016408_TypeDefinitionIndex = 96744;

	class ILFixDynamicMethodWrapper_17A8B8AA95016408 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_17A8B8AA95016408_TypeDefinitionIndex)->GetStaticField(0x53010);
		}
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__CCTOR_OFFSET))();
		}

		::System::Int32 _GW_0(::UnityEngine::StreamInClipInfo P0, ::UnityEngine::StreamInClipInfo P1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::StreamInClipInfo, ::UnityEngine::StreamInClipInfo))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_0_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_1(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_1_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_2(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_2_OFFSET))(this, P0);
		}

		::System::Object* _GW_3(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_3_OFFSET))(this, P0);
		}

		::System::Single _GW_4(::System::Object* P0)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_4_OFFSET))(this, P0);
		}

		::System::Void _GW_5(::System::Object* P0, ::UnityEngine::Rect P1, ::UnityEngine::Color P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Rect, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_5_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_6(::System::UInt64 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_6_OFFSET))(this, P0);
		}

		::System::Boolean _GW_7(::System::Object* P0, ::UnityEngine::Rect P1, ::System::Object* P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::UnityEngine::Rect, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_7_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_8(::System::Object* P0, ::UnityEngine::Rect P1, ::System::UInt64 P2, ::System::UInt64 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Rect, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_8_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Object* _GW_9(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_9_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_10(::System::Object* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_10_OFFSET))(this, P0);
		}

		::System::Boolean _GW_11()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_11_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _GW_12(::System::Object* P0)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_12_OFFSET))(this, P0);
		}

		::System::Void _GW_13(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_13_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_14(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Int32 P3, ::System::Object* P4, ::System::Object* P5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_14_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Object* _GW_15(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_15_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_16(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_16_OFFSET))(this, P0, P1);
		}

		::MeshDecimator::Math::Vector3d _GW_17(::UnityEngine::Vector3 P0)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_17_OFFSET))(this, P0);
		}

		::MeshDecimator::Math::Vector2 _GW_18(::UnityEngine::Vector2 P0)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_18_OFFSET))(this, P0);
		}

		::MeshDecimator::Math::Vector4 _GW_19(::UnityEngine::Color P0)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_19_OFFSET))(this, P0);
		}

		::MeshDecimator::BoneWeight _GW_20(::UnityEngine::BoneWeight P0)
		{
			return ((::MeshDecimator::BoneWeight(*)(::PVOID, ::UnityEngine::BoneWeight))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_20_OFFSET))(this, P0);
		}

		::MeshDecimator::Math::Vector3 _GW_21(::UnityEngine::Vector3 P0)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_21_OFFSET))(this, P0);
		}

		::System::Object* _GW_22()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_22_OFFSET))(this);
		}

		::UnityEngine::Bounds _GW_23(::System::Object* P0)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_23_OFFSET))(this, P0);
		}

		::System::Boolean _GW_24(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_24_OFFSET))(this, P0);
		}

		::System::Boolean _GW_25(::System::Reflection::MethodInfo* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_25_OFFSET))(this, P0);
		}

		::System::Boolean _GW_26(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_26_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_27()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_27_OFFSET))(this);
		}

		::System::Void _GW_28(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_28_OFFSET))(this, P0);
		}

		::System::Void _GW_29(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_17A8B8AA95016408__GW_29_OFFSET))(this, P0);
		}
	};
}

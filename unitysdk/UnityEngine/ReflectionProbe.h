#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/ReflectionProbe_E05EA2F6F825DC0A.h"
#include "unitysdk/B8C48C8BF406E9BC/EF22C423CB30F1A1.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_REFLECTIONPROBE_A4EB194B84E346B3_OFFSET UNITYSDK_OFFSET(0x4187ED0)
#define UNITYENGINE_REFLECTIONPROBE_AF11B879BAE6FA04_1_OFFSET UNITYSDK_OFFSET(0x4187CA0)
#define UNITYENGINE_REFLECTIONPROBE_AF11B879BAE6FA04_OFFSET UNITYSDK_OFFSET(0x4187D00)
#define UNITYENGINE_REFLECTIONPROBE_AF463F53AC82034A_OFFSET UNITYSDK_OFFSET(0x4187B60)
#define UNITYENGINE_REFLECTIONPROBE_E789DD984F9509D0_OFFSET UNITYSDK_OFFSET(0x4187F20)
#define UNITYENGINE_REFLECTIONPROBE_EDF73A03EE5E2F5B_OFFSET UNITYSDK_OFFSET(0x4187FC0)
#define UNITYENGINE_REFLECTIONPROBE_F485F627FA8750EF_OFFSET UNITYSDK_OFFSET(0x4187AE0)
#define UNITYENGINE_REFLECTIONPROBE_F9E9EF53B6CD24C1_OFFSET UNITYSDK_OFFSET(0x4188010)
#define UNITYENGINE_REFLECTIONPROBE_FA2C9A92926D0CF3_OFFSET UNITYSDK_OFFSET(0x4187E80)
#define UNITYENGINE_REFLECTIONPROBE_FD4987BC3E5D912A_OFFSET UNITYSDK_OFFSET(0x4187F70)
#define UNITYENGINE_REFLECTIONPROBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x4187DA0)

namespace UnityEngine
{
	inline static constexpr unsigned int ReflectionProbe_TypeDefinitionIndex = 17702;

	class ReflectionProbe : public ::UnityEngine::Behaviour
	{
	public:
		static ::System::Action_2<::UnityEngine::ReflectionProbe*, ::System::Object*>** StaticGet_F3D866F71D3ADA20()
		{
			return (::System::Action_2<::UnityEngine::ReflectionProbe*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::UnityEngine::Texture*>*>** StaticGet_FE5E2F6BC09732C3()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::UnityEngine::Texture*>*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Texture*>*>** StaticGet_B53897314C87B75E()
		{
			return (::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Texture*>*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionProbe_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		::System::Void F9E9EF53B6CD24C1(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_F9E9EF53B6CD24C1_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void F485F627FA8750EF(::UnityEngine::ReflectionProbe* E3D2BAF120A159E8, ::UnityEngine::ReflectionProbe_E05EA2F6F825DC0A A6A6369E62661E0F)
		{
			return ((::System::Void(*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_E05EA2F6F825DC0A))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_F485F627FA8750EF_OFFSET))(E3D2BAF120A159E8, A6A6369E62661E0F);
		}

		::System::Void E789DD984F9509D0(::UnityEngine::Vector3& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_E789DD984F9509D0_OFFSET))(this, FEC8DC0392823C8D);
		}

		::System::Void AF11B879BAE6FA04(::B8C48C8BF406E9BC::EF22C423CB30F1A1<::UnityEngine::E8984F4E44AE20E5> B2C6E0731FCE2DB3)
		{
			return ((::System::Void(*)(::PVOID, ::B8C48C8BF406E9BC::EF22C423CB30F1A1<::UnityEngine::E8984F4E44AE20E5>))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_AF11B879BAE6FA04_OFFSET))(this, B2C6E0731FCE2DB3);
		}

		::System::Void AF11B879BAE6FA04_1(::System::IntPtr B2C6E0731FCE2DB3, ::System::Int32 A70E5C58B2C7A692)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_AF11B879BAE6FA04_1_OFFSET))(this, B2C6E0731FCE2DB3, A70E5C58B2C7A692);
		}

		::System::Void FA2C9A92926D0CF3(::UnityEngine::Vector3& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_FA2C9A92926D0CF3_OFFSET))(this, FEC8DC0392823C8D);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE__CCTOR_OFFSET))();
		}

		static ::System::Void AF463F53AC82034A(::UnityEngine::Texture* E8E7DE4F6476C78D)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_AF463F53AC82034A_OFFSET))(E8E7DE4F6476C78D);
		}

		::UnityEngine::Vector3 FD4987BC3E5D912A()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_FD4987BC3E5D912A_OFFSET))(this);
		}

		::UnityEngine::Vector3 A4EB194B84E346B3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_A4EB194B84E346B3_OFFSET))(this);
		}

		::System::Void EDF73A03EE5E2F5B(::UnityEngine::Texture* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_EDF73A03EE5E2F5B_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}

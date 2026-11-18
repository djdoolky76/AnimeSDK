#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_AWAKE_OFFSET UNITYSDK_OFFSET(0x18108BD0)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_INJECTIONWIDTHSCALE_OFFSET UNITYSDK_OFFSET(0x18108610)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_MODIFYEFFECTWIDTH_OFFSET UNITYSDK_OFFSET(0x18108650)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18108C20)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18108B70)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18108F00)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x18108E20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWallEffectWidthModify_TypeDefinitionIndex = 53604;

	class MonoWallEffectWidthModify : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_MCMFDIEAMCD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoWallEffectWidthModify_TypeDefinitionIndex)->GetStaticField(0x13AF0);
		}
		// static const ::System::String* PLIILNHCJNI; // 0x0
		// static const ::System::Single KNFNIMJKKJE; // 0x0
		::System::Single scaleX; // 0x18
		::System::Boolean ACBDDHOAMKE; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* JAHDFOBFOEG; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY__CCTOR_OFFSET))();
		}

		::System::Void InjectionWidthScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_INJECTIONWIDTHSCALE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_ONDESTROY_OFFSET))(this);
		}

		::System::Void ModifyEffectWidth(::System::Boolean KDJCHFODOGB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_MODIFYEFFECTWIDTH_OFFSET))(this, KDJCHFODOGB);
		}
	};
}

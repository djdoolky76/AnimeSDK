#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRendererFullJob_FullJob.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobMeshUpdateState.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobRendererData.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobRendererUpdate.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobTransformSnapshot.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_UIParticleMaterialJob.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_UIParticleMatrixBoundsJob.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_UIParticleReadOnlyTransformJob.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ParticleSystemRenderer_UIParticleRendererFullJobData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }
namespace UnityEngine { class ParticleSystem; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E211B00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__CTOR_OFFSET UNITYSDK_OFFSET(0x1E211430)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_0_OFFSET UNITYSDK_OFFSET(0x1E1DB650)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_10_OFFSET UNITYSDK_OFFSET(0x1E1DC630)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_11_OFFSET UNITYSDK_OFFSET(0x1E210B30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_12_OFFSET UNITYSDK_OFFSET(0x1E1DCF80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_13_OFFSET UNITYSDK_OFFSET(0x1E1F2F00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_14_OFFSET UNITYSDK_OFFSET(0x1E1E4010)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_15_OFFSET UNITYSDK_OFFSET(0x1E2053F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_16_OFFSET UNITYSDK_OFFSET(0x1E211260)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_17_OFFSET UNITYSDK_OFFSET(0x1E2002A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_18_OFFSET UNITYSDK_OFFSET(0x1E1FF0E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_19_OFFSET UNITYSDK_OFFSET(0x1E1FB120)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_1_OFFSET UNITYSDK_OFFSET(0x1E1DC090)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_20_OFFSET UNITYSDK_OFFSET(0x1E1EDEB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_21_OFFSET UNITYSDK_OFFSET(0x1E210950)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_22_OFFSET UNITYSDK_OFFSET(0x1E210FB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_23_OFFSET UNITYSDK_OFFSET(0x1E1FAC60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_24_OFFSET UNITYSDK_OFFSET(0x1E1F4350)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_25_OFFSET UNITYSDK_OFFSET(0x1E1FAF80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_26_OFFSET UNITYSDK_OFFSET(0x1E1F7D80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_27_OFFSET UNITYSDK_OFFSET(0x1E20D7C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_28_OFFSET UNITYSDK_OFFSET(0x1E1F9B80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_29_OFFSET UNITYSDK_OFFSET(0x1E1F84D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_2_OFFSET UNITYSDK_OFFSET(0x1E1DBAD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_30_OFFSET UNITYSDK_OFFSET(0x1E1F7A10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_31_OFFSET UNITYSDK_OFFSET(0x1E1F9080)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_32_OFFSET UNITYSDK_OFFSET(0x1E1F99E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_33_OFFSET UNITYSDK_OFFSET(0x1E1FB410)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_34_OFFSET UNITYSDK_OFFSET(0x1E20E2F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_35_OFFSET UNITYSDK_OFFSET(0x1E1FB560)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_36_OFFSET UNITYSDK_OFFSET(0x1E1E8BF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_37_OFFSET UNITYSDK_OFFSET(0x1E1E5980)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_38_OFFSET UNITYSDK_OFFSET(0x1E2116D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_39_OFFSET UNITYSDK_OFFSET(0x1E1DCC90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_3_OFFSET UNITYSDK_OFFSET(0x1E211440)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_40_OFFSET UNITYSDK_OFFSET(0x1E1E01A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_41_OFFSET UNITYSDK_OFFSET(0x1E210D50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_42_OFFSET UNITYSDK_OFFSET(0x1E1EC1E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_43_OFFSET UNITYSDK_OFFSET(0x1E1FCA30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_44_OFFSET UNITYSDK_OFFSET(0x1E205880)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_45_OFFSET UNITYSDK_OFFSET(0x1E1FE620)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_46_OFFSET UNITYSDK_OFFSET(0x1E209920)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_47_OFFSET UNITYSDK_OFFSET(0x1E1FBB90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_48_OFFSET UNITYSDK_OFFSET(0x1E203E10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_49_OFFSET UNITYSDK_OFFSET(0x1E2033B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_4_OFFSET UNITYSDK_OFFSET(0x1E211580)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_50_OFFSET UNITYSDK_OFFSET(0x1E2069B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_51_OFFSET UNITYSDK_OFFSET(0x1E207B70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_52_OFFSET UNITYSDK_OFFSET(0x1E202E00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_53_OFFSET UNITYSDK_OFFSET(0x1E1FE060)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_54_OFFSET UNITYSDK_OFFSET(0x1E1EDA60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_55_OFFSET UNITYSDK_OFFSET(0x1E1FF650)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_56_OFFSET UNITYSDK_OFFSET(0x1E1FFA00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_57_OFFSET UNITYSDK_OFFSET(0x1E20F310)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_58_OFFSET UNITYSDK_OFFSET(0x1E1F18B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_59_OFFSET UNITYSDK_OFFSET(0x1E1FEF20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_5_OFFSET UNITYSDK_OFFSET(0x1E1DFB50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_60_OFFSET UNITYSDK_OFFSET(0x1E207340)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_61_OFFSET UNITYSDK_OFFSET(0x1E2066D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_62_OFFSET UNITYSDK_OFFSET(0x1E202B90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_63_OFFSET UNITYSDK_OFFSET(0x1E208CA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_64_OFFSET UNITYSDK_OFFSET(0x1E209170)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_65_OFFSET UNITYSDK_OFFSET(0x1E209640)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_66_OFFSET UNITYSDK_OFFSET(0x1E20ADE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_67_OFFSET UNITYSDK_OFFSET(0x1E20AA40)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_68_OFFSET UNITYSDK_OFFSET(0x1E20A050)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_69_OFFSET UNITYSDK_OFFSET(0x1E20E0B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_6_OFFSET UNITYSDK_OFFSET(0x1E2029D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_70_OFFSET UNITYSDK_OFFSET(0x1E20FAD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_71_OFFSET UNITYSDK_OFFSET(0x1E211810)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_72_OFFSET UNITYSDK_OFFSET(0x1E211970)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_7_OFFSET UNITYSDK_OFFSET(0x1E1DC330)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_8_OFFSET UNITYSDK_OFFSET(0x1E1E3A90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_9_OFFSET UNITYSDK_OFFSET(0x1E1DCA10)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_2EC74FC9B8DF383B_TypeDefinitionIndex = 34424;

	class ILFixDynamicMethodWrapper_2EC74FC9B8DF383B : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_2EC74FC9B8DF383B_TypeDefinitionIndex)->GetStaticField(0x2A410);
		}
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__CCTOR_OFFSET))();
		}

		::System::Void _GW_0(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_0_OFFSET))(this, P0);
		}

		::System::Void _GW_1(::System::Object* P0, ::System::Object* P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_1_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_2(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_2_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_3(::UnityEngine::ParticleSystem* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_3_OFFSET))(this, P0);
		}

		::System::Boolean _GW_4(::UnityEngine::ParticleSystem* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_4_OFFSET))(this, P0);
		}

		::System::Void _GW_5(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_5_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_6_OFFSET))(this);
		}

		::System::Void _GW_7(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_7_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_8(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_8_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_9(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_9_OFFSET))(this, P0);
		}

		::System::Void _GW_10(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_10_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Vector3 _GW_11(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_11_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Vector3 _GW_12(::System::Object* P0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_12_OFFSET))(this, P0);
		}

		::System::Void _GW_13(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_13_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Object* _GW_14(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_14_OFFSET))(this, P0);
		}

		::System::Boolean _GW_15(::System::Int32 P0, ::Coffee::UIExtensions::UIParticleRenderer_JobTransformSnapshot& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Coffee::UIExtensions::UIParticleRenderer_JobTransformSnapshot&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_15_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_16(::UnityEngine::Vector3 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_16_OFFSET))(this, P0);
		}

		::System::Boolean _GW_17(::System::Object* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_17_OFFSET))(this, P0, P1, P2);
		}

		::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate _GW_18(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2, ::System::Boolean P3, ::System::Boolean P4)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_18_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Int32 _GW_19(::System::Object* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_19_OFFSET))(this, P0);
		}

		::System::Boolean _GW_20(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_20_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Vector3 _GW_21(::UnityEngine::Vector3 P0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_21_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 _GW_22(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2, ::UnityEngine::Vector3 P3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_22_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_23(::System::Object* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2, ::UnityEngine::Vector2Int P3, ::System::Boolean P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_23_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_24(::System::Object* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_24_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_25(::System::Object* P0, ::UnityEngine::Vector3 P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_25_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Matrix4x4 _GW_26(::System::Object* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_26_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_27(::System::Int32 P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_27_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_28(::System::Object* P0, ::System::Object* P1, ::UnityEngine::Vector3 P2, ::UnityEngine::Vector3 P3, ::System::Boolean P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_28_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::UnityEngine::Matrix4x4 _GW_29(::System::Object* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2, ::UnityEngine::Vector3 P3)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_29_OFFSET))(this, P0, P1, P2, P3);
		}

		::UnityEngine::Bounds _GW_30(::System::Object* P0)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_30_OFFSET))(this, P0);
		}

		::UnityEngine::Bounds _GW_31(::System::Object* P0, ::UnityEngine::Matrix4x4 P1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Object*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_31_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_32(::System::Object* P0, ::System::Object* P1, ::UnityEngine::Matrix4x4 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_32_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_33(::System::Int32 P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_33_OFFSET))(this, P0);
		}

		::System::Void _GW_34(::System::Int32 P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_34_OFFSET))(this, P0, P1);
		}

		::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData _GW_35(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Int32 P3, ::UnityEngine::Vector3 P4, ::UnityEngine::Vector3 P5, ::System::Object* P6, ::System::Int32 P7, ::System::Int32 P8, ::System::Int32 P9)
		{
			return ((::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_35_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9);
		}

		::System::Void _GW_36(::System::Object* P0, ::System::Object* P1, ::System::Int32& P2, ::System::Int32& P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_36_OFFSET))(this, P0, P1, P2, P3);
		}

		::UnityEngine::Vector3 _GW_37(::System::Object* P0, ::System::Object* P1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_37_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_38(::Coffee::UIExtensions::UIParticleRenderer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_38_OFFSET))(this, P0);
		}

		::System::Void _GW_39(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_39_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_40(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_40_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Vector3 _GW_41(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_41_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Vector3 _GW_42(::System::Object* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2, ::System::Single P3, ::System::Single P4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_42_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_43(::System::Object* P0, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_43_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_44(::System::Object* P0, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_44_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_45(::System::Object* P0, ::System::Object* P1, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_45_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_46(::System::Int32 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_46_OFFSET))(this, P0);
		}

		::System::Void _GW_47(::System::Object* P0, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& P1, ::System::Int32& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_47_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Bounds _GW_48(::UnityEngine::Bounds P0, ::UnityEngine::Matrix4x4 P1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_48_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Matrix4x4 _GW_49(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData& P0)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobRendererData&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_49_OFFSET))(this, P0);
		}

		::System::Void _GW_50(::System::Object* P0, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_50_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_51(::System::Object* P0, ::System::Int32 P1, ::UnityEngine::Matrix4x4& P2, ::System::Int32 P3, ::System::Boolean P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_51_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_52(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_52_OFFSET))(this, P0);
		}

		::System::Void _GW_53(::System::Object* P0, ::UnityEngine::Matrix4x4 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_53_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Rect _GW_54(::System::Object* P0)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_54_OFFSET))(this, P0);
		}

		::UnityEngine::Quaternion _GW_55(::System::Object* P0)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_55_OFFSET))(this, P0);
		}

		::UnityEngine::Matrix4x4 _GW_56(::System::Object* P0)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_56_OFFSET))(this, P0);
		}

		::System::Object* _GW_57(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_57_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_58(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_58_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_59(::System::Object* P0, ::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_59_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_60(::System::Object* P0, ::System::Object* P1, ::UnityEngine::Matrix4x4& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_60_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_61(::System::Object* P0, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_61_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_62(::System::Int32 P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_62_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_63(::Coffee::UIExtensions::UIParticleRenderer_UIParticleMaterialJob& P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_UIParticleMaterialJob&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_63_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_64(::Coffee::UIExtensions::UIParticleRenderer_UIParticleMatrixBoundsJob& P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_UIParticleMatrixBoundsJob&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_64_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_65(::Coffee::UIExtensions::UIParticleRenderer_UIParticleReadOnlyTransformJob& P0, ::System::Int32 P1, ::UnityEngine::Jobs::TransformAccess P2)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_UIParticleReadOnlyTransformJob&, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_65_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_66(::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob& P0, ::System::Int32 P1, ::System::Int32 P2, ::System::Int32 P3, ::System::Int32 P4)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_66_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_67(::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob& P0, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& P1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob&, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_67_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_68(::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob& P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_68_OFFSET))(this, P0, P1);
		}

		::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob _GW_69()
		{
			return ((::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_69_OFFSET))(this);
		}

		::System::Int32 _GW_70(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_70_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_71(::UnityEngine::ParticleSystem* P0, ::UnityEngine::ParticleSystem* P1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_71_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_72(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2EC74FC9B8DF383B__GW_72_OFFSET))(this, P0);
		}
	};
}

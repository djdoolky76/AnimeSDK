#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"
#include "unitysdk/miHoYoEmotion/BlendShapeDataIndexComparer.h"
#include "unitysdk/miHoYoEmotion/ClipEmoTrack_ClipCell.h"
#include "unitysdk/miHoYoEmotion/EyeKey_MouseShapeAnimationJob.h"
#include "unitysdk/miHoYoEmotion/FrameEmoTrack_FrameCell.h"
#include "unitysdk/miHoYoEmotion/FrameEmoTrack_FrameElementCell.h"

namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace miHoYoEmotion { class ClipShapeCurveCell; }
namespace miHoYoEmotion { class ClipShapeManager_CurveBinding; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5758C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1D569810)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_0_OFFSET UNITYSDK_OFFSET(0x1D569820)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_10_OFFSET UNITYSDK_OFFSET(0x1D56A8F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_11_OFFSET UNITYSDK_OFFSET(0x1D56AA50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_12_OFFSET UNITYSDK_OFFSET(0x1D56ABA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_13_OFFSET UNITYSDK_OFFSET(0x1D56AD10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_14_OFFSET UNITYSDK_OFFSET(0x1D56AE70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_15_OFFSET UNITYSDK_OFFSET(0x1D56AFE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_16_OFFSET UNITYSDK_OFFSET(0x1D56B170)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_17_OFFSET UNITYSDK_OFFSET(0x1D56B2C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_18_OFFSET UNITYSDK_OFFSET(0x1D56B420)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_19_OFFSET UNITYSDK_OFFSET(0x1D56B5C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_1_OFFSET UNITYSDK_OFFSET(0x1D569A60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_20_OFFSET UNITYSDK_OFFSET(0x1D56B720)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_21_OFFSET UNITYSDK_OFFSET(0x1D56B870)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_22_OFFSET UNITYSDK_OFFSET(0x1D56B9F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_23_OFFSET UNITYSDK_OFFSET(0x1D56BB80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_24_OFFSET UNITYSDK_OFFSET(0x1D56BCF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_25_OFFSET UNITYSDK_OFFSET(0x1D56BE90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_26_OFFSET UNITYSDK_OFFSET(0x1D56BFF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_27_OFFSET UNITYSDK_OFFSET(0x1D56C2D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_28_OFFSET UNITYSDK_OFFSET(0x1D56C570)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_29_OFFSET UNITYSDK_OFFSET(0x1D56C700)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_2_OFFSET UNITYSDK_OFFSET(0x1D569BB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_30_OFFSET UNITYSDK_OFFSET(0x1D56C890)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_31_OFFSET UNITYSDK_OFFSET(0x1D56CA20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_32_OFFSET UNITYSDK_OFFSET(0x1D56CBD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_33_OFFSET UNITYSDK_OFFSET(0x1D56CD70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_34_OFFSET UNITYSDK_OFFSET(0x1D56CEF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_35_OFFSET UNITYSDK_OFFSET(0x1D56D080)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_36_OFFSET UNITYSDK_OFFSET(0x1D56D200)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_37_OFFSET UNITYSDK_OFFSET(0x1D56D460)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_38_OFFSET UNITYSDK_OFFSET(0x1D56D7C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_39_OFFSET UNITYSDK_OFFSET(0x1D56DA20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_3_OFFSET UNITYSDK_OFFSET(0x1D569DA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_40_OFFSET UNITYSDK_OFFSET(0x1D56DD20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_41_OFFSET UNITYSDK_OFFSET(0x1D56DF80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_42_OFFSET UNITYSDK_OFFSET(0x1D56E0F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_43_OFFSET UNITYSDK_OFFSET(0x1D56E270)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_44_OFFSET UNITYSDK_OFFSET(0x1D56E430)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_45_OFFSET UNITYSDK_OFFSET(0x1D56E800)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_46_OFFSET UNITYSDK_OFFSET(0x1D56E9F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_47_OFFSET UNITYSDK_OFFSET(0x1D56EBC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_48_OFFSET UNITYSDK_OFFSET(0x1D56EF30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_49_OFFSET UNITYSDK_OFFSET(0x1D56F0A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_4_OFFSET UNITYSDK_OFFSET(0x1D569FC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_50_OFFSET UNITYSDK_OFFSET(0x1D56F370)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_51_OFFSET UNITYSDK_OFFSET(0x1D56F510)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_52_OFFSET UNITYSDK_OFFSET(0x1D56F6A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_53_OFFSET UNITYSDK_OFFSET(0x1D56F7F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_54_OFFSET UNITYSDK_OFFSET(0x1D56F9F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_55_OFFSET UNITYSDK_OFFSET(0x1D56FB20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_56_OFFSET UNITYSDK_OFFSET(0x1D56FD80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_57_OFFSET UNITYSDK_OFFSET(0x1D56FF70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_58_OFFSET UNITYSDK_OFFSET(0x1D570160)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_59_OFFSET UNITYSDK_OFFSET(0x1D570380)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_5_OFFSET UNITYSDK_OFFSET(0x1D56A110)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_60_OFFSET UNITYSDK_OFFSET(0x1D570670)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_61_OFFSET UNITYSDK_OFFSET(0x1D570B40)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_62_OFFSET UNITYSDK_OFFSET(0x1D571020)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_63_OFFSET UNITYSDK_OFFSET(0x1D5713A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_64_OFFSET UNITYSDK_OFFSET(0x1D571800)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_65_OFFSET UNITYSDK_OFFSET(0x1D571A90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_66_OFFSET UNITYSDK_OFFSET(0x1D571C20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_67_OFFSET UNITYSDK_OFFSET(0x1D571F50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_68_OFFSET UNITYSDK_OFFSET(0x1D572190)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_69_OFFSET UNITYSDK_OFFSET(0x1D5723F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_6_OFFSET UNITYSDK_OFFSET(0x1D56A280)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_70_OFFSET UNITYSDK_OFFSET(0x1D572710)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_71_OFFSET UNITYSDK_OFFSET(0x1D572990)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_72_OFFSET UNITYSDK_OFFSET(0x1D572C00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_73_OFFSET UNITYSDK_OFFSET(0x1D572E80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_74_OFFSET UNITYSDK_OFFSET(0x1D573110)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_75_OFFSET UNITYSDK_OFFSET(0x1D573390)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_76_OFFSET UNITYSDK_OFFSET(0x1D573640)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_77_OFFSET UNITYSDK_OFFSET(0x1D573A80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_78_OFFSET UNITYSDK_OFFSET(0x1D573C70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_79_OFFSET UNITYSDK_OFFSET(0x1D573E20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_7_OFFSET UNITYSDK_OFFSET(0x1D56A490)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_80_OFFSET UNITYSDK_OFFSET(0x1D5740D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_81_OFFSET UNITYSDK_OFFSET(0x1D574360)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_82_OFFSET UNITYSDK_OFFSET(0x1D5744E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_83_OFFSET UNITYSDK_OFFSET(0x1D5746C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_84_OFFSET UNITYSDK_OFFSET(0x1D574830)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_85_OFFSET UNITYSDK_OFFSET(0x1D5749D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_86_OFFSET UNITYSDK_OFFSET(0x1D574BD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_87_OFFSET UNITYSDK_OFFSET(0x1D574D10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_88_OFFSET UNITYSDK_OFFSET(0x1D574E50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_89_OFFSET UNITYSDK_OFFSET(0x1D574FB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_8_OFFSET UNITYSDK_OFFSET(0x1D56A610)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_90_OFFSET UNITYSDK_OFFSET(0x1D575190)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_91_OFFSET UNITYSDK_OFFSET(0x1D5753A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_92_OFFSET UNITYSDK_OFFSET(0x1D5755C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_93_OFFSET UNITYSDK_OFFSET(0x1D575750)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_9_OFFSET UNITYSDK_OFFSET(0x1D56A7B0)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_1F79DB679EC6C6D5_TypeDefinitionIndex = 38001;

	class ILFixDynamicMethodWrapper_1F79DB679EC6C6D5 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_1F79DB679EC6C6D5_TypeDefinitionIndex)->GetStaticField(0x2DB70);
		}
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10
		::System::Object* anonObj; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__CCTOR_OFFSET))();
		}

		::System::Boolean _GW_0(::UnityEngine::Keyframe P0, ::UnityEngine::Keyframe P1, ::UnityEngine::Keyframe P2, ::System::Single P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_0_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Single _GW_1(::System::Object* P0)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_1_OFFSET))(this, P0);
		}

		::System::Object* _GW_2(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_2_OFFSET))(this, P0);
		}

		::System::Object* _GW_3(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_3_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_4(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_4_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_5(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_5_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_6(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_6_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_7(::System::Object* P0, ::System::Object* P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_7_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_8(::System::Object* P0, ::System::Object* P1, ::System::Single P2, ::System::Int32 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_8_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_9(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_9_OFFSET))(this, P0);
		}

		::System::Void _GW_10(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_10_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_11(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_11_OFFSET))(this, P0);
		}

		::System::Boolean _GW_12(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_12_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_13(::System::Object* P0, ::System::Object* P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_13_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_14(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_14_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_15(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Object* P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_15_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_16(::miHoYoEmotion::ClipShapeCurveCell* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::ClipShapeCurveCell*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_16_OFFSET))(this, P0);
		}

		::System::Boolean _GW_17(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_17_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_18(::miHoYoEmotion::BlendShapeData P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_18_OFFSET))(this, P0);
		}

		::System::Boolean _GW_19(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_19_OFFSET))(this, P0);
		}

		::System::Int32 _GW_20(::System::Int32 P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_20_OFFSET))(this, P0);
		}

		::System::Void _GW_21(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_21_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_22(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2, ::System::Object* P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_22_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_23(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_23_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_24(::System::Object* P0, ::System::Boolean P1, ::System::Boolean P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_24_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_25(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_25_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_26(::miHoYoEmotion::BlendShapeDataIndexComparer& P0, ::miHoYoEmotion::BlendShapeData P1, ::miHoYoEmotion::BlendShapeData P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::BlendShapeDataIndexComparer&, ::miHoYoEmotion::BlendShapeData, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_26_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_27(::miHoYoEmotion::BlendShapeDataIndexComparer& P0, ::miHoYoEmotion::BlendShapeData P1)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::BlendShapeDataIndexComparer&, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_27_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_28(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_28_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_29(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_29_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 _GW_30(::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_30_OFFSET))(this, P0);
		}

		::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> _GW_31(::System::Int32 P0)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_31_OFFSET))(this, P0);
		}

		::System::Void _GW_32(::System::Object* P0, ::System::Object* P1, ::System::Single P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_32_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_33(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_33_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_34(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_34_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_35(::System::Object* P0, ::System::Single P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_35_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_36(::miHoYoEmotion::ClipEmoTrack_ClipCell& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::ClipEmoTrack_ClipCell&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_36_OFFSET))(this, P0);
		}

		::System::Boolean _GW_37(::System::Object* P0, ::miHoYoEmotion::ClipEmoTrack_ClipCell& P1, ::miHoYoEmotion::ClipEmoTrack_ClipCell& P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::miHoYoEmotion::ClipEmoTrack_ClipCell&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_37_OFFSET))(this, P0, P1, P2);
		}

		::System::Single _GW_38(::miHoYoEmotion::ClipEmoTrack_ClipCell& P0)
		{
			return ((::System::Single(*)(::PVOID, ::miHoYoEmotion::ClipEmoTrack_ClipCell&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_38_OFFSET))(this, P0);
		}

		::System::Object* _GW_39(::miHoYoEmotion::ClipEmoTrack_ClipCell& P0, ::System::Int32 P1)
		{
			return ((::System::Object*(*)(::PVOID, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_39_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_40(::miHoYoEmotion::ClipEmoTrack_ClipCell& P0)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::ClipEmoTrack_ClipCell&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_40_OFFSET))(this, P0);
		}

		::System::Int32 _GW_41(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_41_OFFSET))(this, P0, P1);
		}

		::System::Single _GW_42(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_42_OFFSET))(this, P0, P1, P2);
		}

		::System::Single _GW_43(::System::Object* P0, ::System::Boolean& P1, ::System::Object* P2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*, ::System::Boolean&, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_43_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_44(::System::Object* P0, ::miHoYoEmotion::ClipEmoTrack_ClipCell& P1, ::miHoYoEmotion::ClipEmoTrack_ClipCell& P2, ::System::Single& P3, ::System::Single P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_44_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::miHoYoEmotion::ClipEmoTrack_ClipCell _GW_45(::System::Object* P0, ::System::Object* P1)
		{
			return ((::miHoYoEmotion::ClipEmoTrack_ClipCell(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_45_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_46(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Single P3, ::System::Boolean P4, ::System::Boolean P5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_46_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Void _GW_47(::System::Object* P0, ::miHoYoEmotion::ClipEmoTrack_ClipCell& P1, ::miHoYoEmotion::ClipEmoTrack_ClipCell& P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_47_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_48(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_48_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_49(::miHoYoEmotion::EyeKey_MouseShapeAnimationJob& P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EyeKey_MouseShapeAnimationJob&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_49_OFFSET))(this, P0);
		}

		::System::Boolean _GW_50(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2, ::System::Object* P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_50_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_51(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2, ::System::Object* P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_51_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_52(::miHoYoEmotion::ClipShapeManager_CurveBinding* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::ClipShapeManager_CurveBinding*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_52_OFFSET))(this, P0);
		}

		::System::Object* _GW_53(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_53_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_54_OFFSET))(this);
		}

		::System::Void _GW_55(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::UnityEngine::Vector3 P3, ::UnityEngine::Vector3 P4, ::UnityEngine::Vector3 P5, ::UnityEngine::Vector3 P6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_55_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::System::Void _GW_56(::System::Object* P0, ::System::Single P1, ::UnityEngine::Vector3 P2, ::UnityEngine::Vector3 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_56_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_57(::System::Object* P0, ::System::Object* P1, ::UnityEngine::Vector3 P2, ::UnityEngine::Vector3 P3, ::System::Single P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_57_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_58(::System::Object* P0, ::UnityEngine::Vector3& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_58_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_59(::System::Object* P0, ::UnityEngine::Vector3 P1, ::System::Object* P2, ::UnityEngine::Vector3 P3, ::UnityEngine::Vector3& P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_59_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_60(::System::Object* P0, ::System::Object* P1, ::UnityEngine::Vector3 P2, ::UnityEngine::Vector3 P3, ::UnityEngine::Vector3 P4, ::UnityEngine::Vector3& P5, ::UnityEngine::Vector3& P6, ::UnityEngine::Vector3& P7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_60_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7);
		}

		::System::Void _GW_61(::System::Object* P0, ::System::Object* P1, ::UnityEngine::Vector3& P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Vector3& P4, ::UnityEngine::Vector3& P5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_61_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Void _GW_62(::System::Object* P0, ::System::Object* P1, ::System::Int32& P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Vector3& P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_62_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_63(::System::Object* P0, ::System::Object* P1, ::System::Int32& P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Vector3& P4, ::UnityEngine::Vector3& P5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_63_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Void _GW_64(::System::Object* P0, ::UnityEngine::Transform*& P1, ::System::Int32 P2, ::UnityEngine::Vector3 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*&, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_64_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_65(::System::Object* P0, ::System::Single P1, ::System::Byte P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single, ::System::Byte))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_65_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_66(::miHoYoEmotion::EyeKey_MouseShapeAnimationJob& P0, ::UnityEngine::Animations::AnimationStream P1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EyeKey_MouseShapeAnimationJob&, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_66_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_67(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_67_OFFSET))(this, P0);
		}

		::System::Int32 _GW_68(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_68_OFFSET))(this, P0);
		}

		::miHoYoEmotion::FrameEmoTrack_FrameElementCell _GW_69(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0, ::System::Int32 P1)
		{
			return ((::miHoYoEmotion::FrameEmoTrack_FrameElementCell(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_69_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_70(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0, ::System::Int32 P1)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_70_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_71(::miHoYoEmotion::FrameEmoTrack_FrameElementCell& P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameElementCell&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_71_OFFSET))(this, P0);
		}

		::System::Void _GW_72(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0, ::System::Int32 P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_72_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_73(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0, ::System::Object* P1, ::System::Object* P2)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_73_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_74(::miHoYoEmotion::FrameEmoTrack_FrameElementCell& P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameElementCell&, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_74_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_75(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0, ::System::Int32 P1, ::miHoYoEmotion::FrameEmoTrack_FrameElementCell P2)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::System::Int32, ::miHoYoEmotion::FrameEmoTrack_FrameElementCell))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_75_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_76(::System::Object* P0, ::miHoYoEmotion::FrameEmoTrack_FrameCell& P1, ::miHoYoEmotion::FrameEmoTrack_FrameCell& P2, ::miHoYoEmotion::FrameEmoTrack_FrameCell& P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::miHoYoEmotion::FrameEmoTrack_FrameCell&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_76_OFFSET))(this, P0, P1, P2, P3);
		}

		::miHoYoEmotion::FrameEmoTrack_FrameCell _GW_77(::System::Object* P0, ::System::Object* P1)
		{
			return ((::miHoYoEmotion::FrameEmoTrack_FrameCell(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_77_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_78(::System::Object* P0, ::System::Object* P1, ::UnityEngine::Vector2 P2, ::UnityEngine::Vector2 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_78_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_79(::miHoYoEmotion::FrameEmoTrack_FrameElementCell& P0, ::System::Single P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameElementCell&, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_79_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_80(::miHoYoEmotion::FrameEmoTrack_FrameCell& P0, ::System::Single P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_80_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_81(::System::Object* P0, ::System::Int32 P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_81_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_82()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_82_OFFSET))(this);
		}

		::System::Single _GW_83(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_83_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_84(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_84_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Object* _GW_85(::System::Int32 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_85_OFFSET))(this, P0);
		}

		::System::Int32 _GW_86(::System::Object* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_86_OFFSET))(this, P0);
		}

		::System::Boolean _GW_87()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_87_OFFSET))(this);
		}

		::System::Int32 _GW_88(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_88_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_89(::miHoYoEmotion::BlendShapeData P0, ::miHoYoEmotion::BlendShapeData P1)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::BlendShapeData, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_89_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_90(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_90_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_91(::System::String*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_91_OFFSET))(this, P0);
		}

		::System::Void _GW_92(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_92_OFFSET))(this, P0);
		}

		::System::Void _GW_93(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_1F79DB679EC6C6D5__GW_93_OFFSET))(this, P0);
		}
	};
}

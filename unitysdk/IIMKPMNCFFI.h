#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define IIMKPMNCFFI_CTOR_OFFSET UNITYSDK_OFFSET(0x16440D20)
#define IIMKPMNCFFI_GET_ACCEL_OFFSET UNITYSDK_OFFSET(0x16441560)
#define IIMKPMNCFFI_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x164415A0)
#define IIMKPMNCFFI_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x164415C0)
#define IIMKPMNCFFI_GET_DECEL_OFFSET UNITYSDK_OFFSET(0x16441580)
#define IIMKPMNCFFI_GET_MAXRECOVERSPEED_OFFSET UNITYSDK_OFFSET(0x16441540)
#define IIMKPMNCFFI_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x16441520)
#define IIMKPMNCFFI_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x16441500)
#define IIMKPMNCFFI_GET_ROTATESIGN_OFFSET UNITYSDK_OFFSET(0x164414C0)
#define IIMKPMNCFFI_GET_SCALECURVE_OFFSET UNITYSDK_OFFSET(0x164414E0)
#define IIMKPMNCFFI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16440E40)
#define IIMKPMNCFFI_LGIMCMOPFFN_OFFSET UNITYSDK_OFFSET(0x164413C0)
#define IIMKPMNCFFI_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x16440D60)
#define IIMKPMNCFFI_PNMMOEFLFBH_OFFSET UNITYSDK_OFFSET(0x164412D0)
#define IIMKPMNCFFI_SET_ACCEL_OFFSET UNITYSDK_OFFSET(0x16441570)
#define IIMKPMNCFFI_SET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x164415B0)
#define IIMKPMNCFFI_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x164415D0)
#define IIMKPMNCFFI_SET_DECEL_OFFSET UNITYSDK_OFFSET(0x16441590)
#define IIMKPMNCFFI_SET_MAXRECOVERSPEED_OFFSET UNITYSDK_OFFSET(0x16441550)
#define IIMKPMNCFFI_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x16441530)
#define IIMKPMNCFFI_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x16441510)
#define IIMKPMNCFFI_SET_ROTATESIGN_OFFSET UNITYSDK_OFFSET(0x164414D0)
#define IIMKPMNCFFI_SET_SCALECURVE_OFFSET UNITYSDK_OFFSET(0x164414F0)

inline static constexpr unsigned int IIMKPMNCFFI_TypeDefinitionIndex = 68791;

	class IIMKPMNCFFI : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* _ScaleCurve_k__BackingField; // 0x10
		::System::Single _RotateSign_k__BackingField; // 0x18
		::System::Single _MaxSpeed_k__BackingField; // 0x1C
		::System::Single _Accel_k__BackingField; // 0x20
		::System::Single _CurrentSpeed_k__BackingField; // 0x24
		::System::Single _MaxValue_k__BackingField; // 0x28
		::System::Single _MaxRecoverSpeed_k__BackingField; // 0x2C
		::System::Single _CurrentValue_k__BackingField; // 0x30
		::System::Single _Decel_k__BackingField; // 0x34
		::System::Void _ctor(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LJBCDJNNBJH(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_LJBCDJNNBJH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Single LGIMCMOPFFN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_LGIMCMOPFFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Single PNMMOEFLFBH(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_PNMMOEFLFBH_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_RotateSign()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_ROTATESIGN_OFFSET))(this);
		}

		::System::Void set_RotateSign(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_ROTATESIGN_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_ScaleCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_SCALECURVE_OFFSET))(this);
		}

		::System::Void set_ScaleCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_SCALECURVE_OFFSET))(this, a1);
		}

		::System::Single get_MaxValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Void set_MaxValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_MAXVALUE_OFFSET))(this, a1);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_MaxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_MAXSPEED_OFFSET))(this, a1);
		}

		::System::Single get_MaxRecoverSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_MAXRECOVERSPEED_OFFSET))(this);
		}

		::System::Void set_MaxRecoverSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_MAXRECOVERSPEED_OFFSET))(this, a1);
		}

		::System::Single get_Accel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_ACCEL_OFFSET))(this);
		}

		::System::Void set_Accel(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_ACCEL_OFFSET))(this, a1);
		}

		::System::Single get_Decel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_DECEL_OFFSET))(this);
		}

		::System::Void set_Decel(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_DECEL_OFFSET))(this, a1);
		}

		::System::Single get_CurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_CURRENTSPEED_OFFSET))(this);
		}

		::System::Void set_CurrentSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_CURRENTSPEED_OFFSET))(this, a1);
		}

		::System::Single get_CurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMKPMNCFFI_SET_CURRENTVALUE_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/Axis.h"
#include "unitysdk/Foundation/Unreal/FRotator.h"
#include "unitysdk/Foundation/FAddBehaviorParam.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class Extension_AnimationCurveKeyFrameCache; }
namespace UnityEngine { class AnimationCurve; }

#define FOUNDATION_EXTENSION_ADD_OFFSET UNITYSDK_OFFSET(0x1FEB3570)
#define FOUNDATION_EXTENSION_CLAMP_OFFSET UNITYSDK_OFFSET(0x1FEAFD60)
#define FOUNDATION_EXTENSION_CONTAINNAN_OFFSET UNITYSDK_OFFSET(0x1FEB3A70)
#define FOUNDATION_EXTENSION_CROSS_OFFSET UNITYSDK_OFFSET(0x1FEB37C0)
#define FOUNDATION_EXTENSION_DELTA_OFFSET UNITYSDK_OFFSET(0x1FEB31F0)
#define FOUNDATION_EXTENSION_DIAGNOSTICCHECKNAN_ALL_OFFSET UNITYSDK_OFFSET(0x1FEB0320)
#define FOUNDATION_EXTENSION_DIAGNOSTICCHECKNAN_ROTATION_OFFSET UNITYSDK_OFFSET(0x1FEB0300)
#define FOUNDATION_EXTENSION_DIAGNOSTICCHECKNAN_SCALE_OFFSET UNITYSDK_OFFSET(0x1FEB0310)
#define FOUNDATION_EXTENSION_DIAGNOSTICCHECKNAN_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x1FEB02F0)
#define FOUNDATION_EXTENSION_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x1FEB3220)
#define FOUNDATION_EXTENSION_GENERATECACHE_OFFSET UNITYSDK_OFFSET(0x1FEAFCA0)
#define FOUNDATION_EXTENSION_GETFORWARDVECTOR_OFFSET UNITYSDK_OFFSET(0x1FEB2630)
#define FOUNDATION_EXTENSION_GETINTERVALCOUNT_OFFSET UNITYSDK_OFFSET(0x1FEAFCF0)
#define FOUNDATION_EXTENSION_GETINVERSED_OFFSET UNITYSDK_OFFSET(0x1FEB2DB0)
#define FOUNDATION_EXTENSION_GETRELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FEB1A80)
#define FOUNDATION_EXTENSION_GETRIGHTVECTOR_OFFSET UNITYSDK_OFFSET(0x1FEB2750)
#define FOUNDATION_EXTENSION_GETSAFESCALERECIPROCAL_OFFSET UNITYSDK_OFFSET(0x1FEB25D0)
#define FOUNDATION_EXTENSION_GETUPVECTOR_OFFSET UNITYSDK_OFFSET(0x1FEB2870)
#define FOUNDATION_EXTENSION_IDENTITYNAPTRANSFORMDATA_OFFSET UNITYSDK_OFFSET(0x1FEB0000)
#define FOUNDATION_EXTENSION_INVERSETRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x1FEB12D0)
#define FOUNDATION_EXTENSION_ISCOMPONENTSEQUAL_OFFSET UNITYSDK_OFFSET(0x1FEB3AB0)
#define FOUNDATION_EXTENSION_ISNEARLYEQUAL_1_OFFSET UNITYSDK_OFFSET(0x1FEB3700)
#define FOUNDATION_EXTENSION_ISNEARLYEQUAL_2_OFFSET UNITYSDK_OFFSET(0x1FEB3800)
#define FOUNDATION_EXTENSION_ISNEARLYEQUAL_3_OFFSET UNITYSDK_OFFSET(0x1FEB39A0)
#define FOUNDATION_EXTENSION_ISNEARLYEQUAL_OFFSET UNITYSDK_OFFSET(0x1FEAFD40)
#define FOUNDATION_EXTENSION_ISNEARLYRELATIVEEQUAL_OFFSET UNITYSDK_OFFSET(0x1FEB3720)
#define FOUNDATION_EXTENSION_ISNEARLYZERO_1_OFFSET UNITYSDK_OFFSET(0x1FEB2DF0)
#define FOUNDATION_EXTENSION_ISNEARLYZERO_2_OFFSET UNITYSDK_OFFSET(0x1FEB3750)
#define FOUNDATION_EXTENSION_ISNEARLYZERO_3_OFFSET UNITYSDK_OFFSET(0x1FEB3790)
#define FOUNDATION_EXTENSION_ISNEARLYZERO_4_OFFSET UNITYSDK_OFFSET(0x1FEB39F0)
#define FOUNDATION_EXTENSION_ISNEARLYZERO_OFFSET UNITYSDK_OFFSET(0x1FEAFD30)
#define FOUNDATION_EXTENSION_ISNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x1FEB3A30)
#define FOUNDATION_EXTENSION_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1FEB2D70)
#define FOUNDATION_EXTENSION_MEMBERWISEMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1FEB3AF0)
#define FOUNDATION_EXTENSION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1FEB1560)
#define FOUNDATION_EXTENSION_NEWNAPTRANSFORMDATA_1_OFFSET UNITYSDK_OFFSET(0x1FEB0110)
#define FOUNDATION_EXTENSION_NEWNAPTRANSFORMDATA_OFFSET UNITYSDK_OFFSET(0x1FEB0090)
#define FOUNDATION_EXTENSION_POW_OFFSET UNITYSDK_OFFSET(0x1FEB0560)
#define FOUNDATION_EXTENSION_ROTATE_OFFSET UNITYSDK_OFFSET(0x1FEB33E0)
#define FOUNDATION_EXTENSION_SETAXIS_OFFSET UNITYSDK_OFFSET(0x1FEAFD90)
#define FOUNDATION_EXTENSION_SETBLENDIN_OFFSET UNITYSDK_OFFSET(0x1FEB3B30)
#define FOUNDATION_EXTENSION_SETBLENDOUT_OFFSET UNITYSDK_OFFSET(0x1FEB3BE0)
#define FOUNDATION_EXTENSION_SETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1FEB1520)
#define FOUNDATION_EXTENSION_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1FEB3C90)
#define FOUNDATION_EXTENSION_SETTIME_OFFSET UNITYSDK_OFFSET(0x1FEB3B20)
#define FOUNDATION_EXTENSION_SETTORELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FEB2000)
#define FOUNDATION_EXTENSION_SIGN_OFFSET UNITYSDK_OFFSET(0x1FEB3760)
#define FOUNDATION_EXTENSION_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x1FEAFD80)
#define FOUNDATION_EXTENSION_TOINVERSEMATRIXWITHSCALE_OFFSET UNITYSDK_OFFSET(0x1FEB0410)
#define FOUNDATION_EXTENSION_TOMATRIXWITHSCALE_OFFSET UNITYSDK_OFFSET(0x1FEB0330)
#define FOUNDATION_EXTENSION_TOORIENTEDEULER_OFFSET UNITYSDK_OFFSET(0x1FEB38E0)
#define FOUNDATION_EXTENSION_TOORIENTEDQUATERNION_OFFSET UNITYSDK_OFFSET(0x1FEB3840)
#define FOUNDATION_EXTENSION_TOPITCHYAWROLL_OFFSET UNITYSDK_OFFSET(0x1FEB2E20)
#define FOUNDATION_EXTENSION_TOSWINGTWIST_OFFSET UNITYSDK_OFFSET(0x1FEB2990)
#define FOUNDATION_EXTENSION_TOTRANSLATIONROTATIONSCALE_OFFSET UNITYSDK_OFFSET(0x1FEAFE70)
#define FOUNDATION_EXTENSION_TOTWISTSWING_OFFSET UNITYSDK_OFFSET(0x1FEB2B80)
#define FOUNDATION_EXTENSION_TRANSFORMPOSITIONNOSCALE_OFFSET UNITYSDK_OFFSET(0x1FEB1170)
#define FOUNDATION_EXTENSION_TRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x1FEB1020)

namespace Foundation
{
	inline static constexpr unsigned int Extension_TypeDefinitionIndex = 8905;

	class Extension : public ::System::Object
	{
	public:
		static ::Foundation::Extension_AnimationCurveKeyFrameCache* GenerateCache(::UnityEngine::AnimationCurve* self)
		{
			return ((::Foundation::Extension_AnimationCurveKeyFrameCache*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_GENERATECACHE_OFFSET))(self);
		}

		static ::System::Int32 GetIntervalCount(::UnityEngine::AnimationCurve* self)
		{
			return ((::System::Int32(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_GETINTERVALCOUNT_OFFSET))(self);
		}

		static ::System::Boolean IsNearlyZero(::System::Double self, ::System::Double tolerance)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYZERO_OFFSET))(self, tolerance);
		}

		static ::System::Boolean IsNearlyEqual(::System::Double self, ::System::Double other, ::System::Double tolerance)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYEQUAL_OFFSET))(self, other, tolerance);
		}

		static ::System::Double Clamp(::System::Double self, ::System::Double min, ::System::Double max)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_CLAMP_OFFSET))(self, min, max);
		}

		static ::System::Single ToFloat(::System::Double self)
		{
			return ((::System::Single(*)(::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOFLOAT_OFFSET))(self);
		}

		static ::System::Void SetAxis(::UnityEngine::Matrix4x4& self, ::UnityEngine::Animations::Axis axis, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Animations::Axis, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_SETAXIS_OFFSET))(self, axis, value);
		}

		static ::System::Boolean ToTranslationRotationScale(::UnityEngine::Matrix4x4& self, ::UnityEngine::Vector3& translation, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& scale3D, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOTRANSLATIONROTATIONSCALE_OFFSET))(self, translation, rotation, scale3D, tolerance);
		}

		static ::UnityEngine::NapTransformData IdentityNapTransformData()
		{
			return ((::UnityEngine::NapTransformData(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_IDENTITYNAPTRANSFORMDATA_OFFSET))();
		}

		static ::UnityEngine::NapTransformData NewNapTransformData(::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& translation)
		{
			return ((::UnityEngine::NapTransformData(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_NEWNAPTRANSFORMDATA_OFFSET))(rotation, translation);
		}

		static ::UnityEngine::NapTransformData NewNapTransformData_1(::UnityEngine::Matrix4x4& matrix)
		{
			return ((::UnityEngine::NapTransformData(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_NEWNAPTRANSFORMDATA_1_OFFSET))(matrix);
		}

		static ::System::Void DiagnosticCheckNaN_Translation(::UnityEngine::NapTransformData& self)
		{
			return ((::System::Void(*)(::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_DIAGNOSTICCHECKNAN_TRANSLATION_OFFSET))(self);
		}

		static ::System::Void DiagnosticCheckNaN_Rotation(::UnityEngine::NapTransformData& self)
		{
			return ((::System::Void(*)(::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_DIAGNOSTICCHECKNAN_ROTATION_OFFSET))(self);
		}

		static ::System::Void DiagnosticCheckNaN_Scale(::UnityEngine::NapTransformData& self)
		{
			return ((::System::Void(*)(::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_DIAGNOSTICCHECKNAN_SCALE_OFFSET))(self);
		}

		static ::System::Void DiagnosticCheckNaN_All(::UnityEngine::NapTransformData& self)
		{
			return ((::System::Void(*)(::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_DIAGNOSTICCHECKNAN_ALL_OFFSET))(self);
		}

		static ::UnityEngine::Matrix4x4 ToMatrixWithScale(::UnityEngine::NapTransformData& self)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOMATRIXWITHSCALE_OFFSET))(self);
		}

		static ::UnityEngine::Matrix4x4 ToInverseMatrixWithScale(::UnityEngine::NapTransformData& self)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOINVERSEMATRIXWITHSCALE_OFFSET))(self);
		}

		static ::UnityEngine::NapTransformData Pow(::UnityEngine::NapTransformData self, ::System::Int32 count)
		{
			return ((::UnityEngine::NapTransformData(*)(::UnityEngine::NapTransformData, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_POW_OFFSET))(self, count);
		}

		static ::UnityEngine::Vector3 TransformPosition(::UnityEngine::NapTransformData& self, ::UnityEngine::Vector3& position)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::NapTransformData&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TRANSFORMPOSITION_OFFSET))(self, position);
		}

		static ::UnityEngine::Vector3 TransformPositionNoScale(::UnityEngine::NapTransformData& self, ::UnityEngine::Vector3& position)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::NapTransformData&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TRANSFORMPOSITIONNOSCALE_OFFSET))(self, position);
		}

		static ::UnityEngine::Vector3 InverseTransformPosition(::UnityEngine::NapTransformData& self, ::UnityEngine::Vector3& position)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::NapTransformData&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_INVERSETRANSFORMPOSITION_OFFSET))(self, position);
		}

		static ::System::Void SetIdentity(::UnityEngine::NapTransformData& self)
		{
			return ((::System::Void(*)(::UnityEngine::NapTransformData&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_SETIDENTITY_OFFSET))(self);
		}

		static ::UnityEngine::NapTransformData Multiply(::UnityEngine::NapTransformData a, ::UnityEngine::NapTransformData b)
		{
			return ((::UnityEngine::NapTransformData(*)(::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_MULTIPLY_OFFSET))(a, b);
		}

		static ::UnityEngine::NapTransformData GetRelativeTransform(::UnityEngine::NapTransformData self, ::UnityEngine::NapTransformData other)
		{
			return ((::UnityEngine::NapTransformData(*)(::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_GETRELATIVETRANSFORM_OFFSET))(self, other);
		}

		static ::System::Void SetToRelativeTransform(::UnityEngine::NapTransformData& self, ::UnityEngine::NapTransformData parent)
		{
			return ((::System::Void(*)(::UnityEngine::NapTransformData&, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_SETTORELATIVETRANSFORM_OFFSET))(self, parent);
		}

		static ::UnityEngine::Vector3 GetSafeScaleReciprocal(::UnityEngine::Vector3& scale, ::System::Single tolerance)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_GETSAFESCALERECIPROCAL_OFFSET))(scale, tolerance);
		}

		static ::UnityEngine::Vector3 GetForwardVector(::UnityEngine::Quaternion& self)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_GETFORWARDVECTOR_OFFSET))(self);
		}

		static ::UnityEngine::Vector3 GetRightVector(::UnityEngine::Quaternion& self)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_GETRIGHTVECTOR_OFFSET))(self);
		}

		static ::UnityEngine::Vector3 GetUpVector(::UnityEngine::Quaternion& self)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_GETUPVECTOR_OFFSET))(self);
		}

		static ::System::Void ToSwingTwist(::UnityEngine::Quaternion& self, ::UnityEngine::Vector3 axis, ::UnityEngine::Quaternion& swing, ::UnityEngine::Quaternion& twist)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOSWINGTWIST_OFFSET))(self, axis, swing, twist);
		}

		static ::System::Void ToTwistSwing(::UnityEngine::Quaternion& self, ::UnityEngine::Vector3 axis, ::UnityEngine::Quaternion& twist, ::UnityEngine::Quaternion& swing)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOTWISTSWING_OFFSET))(self, axis, twist, swing);
		}

		static ::System::Boolean IsNormalized(::UnityEngine::Quaternion& self, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNORMALIZED_OFFSET))(self, tolerance);
		}

		static ::UnityEngine::Quaternion GetInversed(::UnityEngine::Quaternion& self)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_GETINVERSED_OFFSET))(self);
		}

		static ::System::Boolean IsNearlyZero_1(::UnityEngine::Quaternion& self, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYZERO_1_OFFSET))(self, tolerance);
		}

		static ::UnityEngine::Vector3 ToPitchYawRoll(::UnityEngine::Quaternion& self)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOPITCHYAWROLL_OFFSET))(self);
		}

		static ::UnityEngine::Quaternion Delta(::UnityEngine::Quaternion& to, ::UnityEngine::Quaternion& from, ::Foundation::SpaceType spaceType)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_DELTA_OFFSET))(to, from, spaceType);
		}

		static ::UnityEngine::Quaternion Rotate(::UnityEngine::Quaternion& _base, ::UnityEngine::Quaternion& add, ::Foundation::SpaceType spaceType)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ROTATE_OFFSET))(_base, add, spaceType);
		}

		static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Quaternion& from, ::UnityEngine::Quaternion& to, ::Foundation::SpaceType spaceType)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_FROMTOROTATION_OFFSET))(from, to, spaceType);
		}

		static ::UnityEngine::Quaternion Add(::UnityEngine::Quaternion& _base, ::UnityEngine::Quaternion& add, ::Foundation::SpaceType spaceType)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::Foundation::SpaceType))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ADD_OFFSET))(_base, add, spaceType);
		}

		static ::System::Boolean IsNearlyEqual_1(::System::Single self, ::System::Single other, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYEQUAL_1_OFFSET))(self, other, tolerance);
		}

		static ::System::Boolean IsNearlyRelativeEqual(::System::Single self, ::System::Single other, ::System::Single toleranceRatio)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYRELATIVEEQUAL_OFFSET))(self, other, toleranceRatio);
		}

		static ::System::Boolean IsNearlyZero_2(::System::Single self, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYZERO_2_OFFSET))(self, tolerance);
		}

		static ::System::Int32 Sign(::System::Single self, ::System::Single tolerance)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_SIGN_OFFSET))(self, tolerance);
		}

		static ::System::Boolean IsNearlyZero_3(::UnityEngine::Vector2 self, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYZERO_3_OFFSET))(self, tolerance);
		}

		static ::System::Single Cross(::UnityEngine::Vector2 self, ::UnityEngine::Vector2 other)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_CROSS_OFFSET))(self, other);
		}

		static ::System::Boolean IsNearlyEqual_2(::UnityEngine::Vector2 self, ::UnityEngine::Vector2 other, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYEQUAL_2_OFFSET))(self, other, tolerance);
		}

		static ::UnityEngine::Quaternion ToOrientedQuaternion(::UnityEngine::Vector3& self)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOORIENTEDQUATERNION_OFFSET))(self);
		}

		static ::Foundation::Unreal::FRotator ToOrientedEuler(::UnityEngine::Vector3& self)
		{
			return ((::Foundation::Unreal::FRotator(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_TOORIENTEDEULER_OFFSET))(self);
		}

		static ::System::Boolean IsNearlyEqual_3(::UnityEngine::Vector3& self, ::UnityEngine::Vector3& other, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYEQUAL_3_OFFSET))(self, other, tolerance);
		}

		static ::System::Boolean IsNearlyZero_4(::UnityEngine::Vector3& self, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNEARLYZERO_4_OFFSET))(self, tolerance);
		}

		static ::System::Boolean IsNormalized_1(::UnityEngine::Vector3& self, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISNORMALIZED_1_OFFSET))(self, tolerance);
		}

		static ::System::Boolean ContainNaN(::UnityEngine::Vector3& self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_CONTAINNAN_OFFSET))(self);
		}

		static ::System::Boolean IsComponentsEqual(::UnityEngine::Vector3& self, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ISCOMPONENTSEQUAL_OFFSET))(self, tolerance);
		}

		static ::UnityEngine::Vector3 MemberwiseMultiply(::UnityEngine::Vector3& self, ::UnityEngine::Vector3 other)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_MEMBERWISEMULTIPLY_OFFSET))(self, other);
		}

		static ::Foundation::FAddBehaviorParam& SetTime(::Foundation::FAddBehaviorParam& params, ::System::Double delayTime, ::System::Double activeTime)
		{
			return ((::Foundation::FAddBehaviorParam&(*)(::Foundation::FAddBehaviorParam&, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_SETTIME_OFFSET))(params, delayTime, activeTime);
		}

		static ::Foundation::FAddBehaviorParam& SetBlendIn(::Foundation::FAddBehaviorParam& params, ::System::Double duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::Foundation::FAddBehaviorParam&(*)(::Foundation::FAddBehaviorParam&, ::System::Double, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_SETBLENDIN_OFFSET))(params, duration, curve);
		}

		static ::Foundation::FAddBehaviorParam& SetBlendOut(::Foundation::FAddBehaviorParam& params, ::System::Double duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::Foundation::FAddBehaviorParam&(*)(::Foundation::FAddBehaviorParam&, ::System::Double, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_SETBLENDOUT_OFFSET))(params, duration, curve);
		}

		static ::Foundation::FAddBehaviorParam& SetPriority(::Foundation::FAddBehaviorParam& params, ::System::Int32 priority)
		{
			return ((::Foundation::FAddBehaviorParam&(*)(::Foundation::FAddBehaviorParam&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_SETPRIORITY_OFFSET))(params, priority);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Dual_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define FOUNDATION_DUALQUATERNION_CONJUGATE_OFFSET UNITYSDK_OFFSET(0x1FDE0D90)
#define FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_ALL_OFFSET UNITYSDK_OFFSET(0x9A5FF0)
#define FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x9A5FF0)
#define FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_ROTATION_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define FOUNDATION_DUALQUATERNION_GET_DUAL_OFFSET UNITYSDK_OFFSET(0x3CE930)
#define FOUNDATION_DUALQUATERNION_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x9A52E0)
#define FOUNDATION_DUALQUATERNION_GET_REAL_OFFSET UNITYSDK_OFFSET(0x358710)
#define FOUNDATION_DUALQUATERNION_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x358710)
#define FOUNDATION_DUALQUATERNION_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x9A51B0)
#define FOUNDATION_DUALQUATERNION_INVERSETRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x9A5860)
#define FOUNDATION_DUALQUATERNION_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1FDE0D40)
#define FOUNDATION_DUALQUATERNION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1FDE0C90)
#define FOUNDATION_DUALQUATERNION_NEGATE_OFFSET UNITYSDK_OFFSET(0x1FDE0D70)
#define FOUNDATION_DUALQUATERNION_NEW_OFFSET UNITYSDK_OFFSET(0x1FDE0AF0)
#define FOUNDATION_DUALQUATERNION_PLUS_OFFSET UNITYSDK_OFFSET(0x1FDE0C50)
#define FOUNDATION_DUALQUATERNION_SCALE_OFFSET UNITYSDK_OFFSET(0x1FDE0C70)
#define FOUNDATION_DUALQUATERNION_TRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x9A5420)
#define FOUNDATION_DUALQUATERNION_TRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0x9A5CC0)
#define FOUNDATION_DUALQUATERNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDE1160)

namespace Foundation
{
	inline static constexpr unsigned int DualQuaternion_TypeDefinitionIndex = 8928;

	struct alignas(8) DualQuaternion
	{
		static ::Foundation::DualQuaternion* StaticGet_Identity()
		{
			return (::Foundation::DualQuaternion*)Il2CppClass::FromTypeDefinitionIndex(DualQuaternion_TypeDefinitionIndex)->GetStaticField(0x3CD0);
		}
		::Foundation::Dual_2<::UnityEngine::Quaternion, ::System::Object*> _value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION__CCTOR_OFFSET))();
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_ROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Translation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_TRANSLATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Real()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_REAL_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Dual()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_DUAL_OFFSET))(this);
		}

		/*
		::Foundation::DualQuaternion get_Normalized()
		{
			return ((::Foundation::DualQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_GET_NORMALIZED_OFFSET))(this);
		}
		*/

		::UnityEngine::Vector3 TransformPosition(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_TRANSFORMPOSITION_OFFSET))(this, position);
		}

		::UnityEngine::Vector3 InverseTransformPosition(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_INVERSETRANSFORMPOSITION_OFFSET))(this, position);
		}

		::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vec)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_TRANSFORMVECTOR_OFFSET))(this, vec);
		}

		/*
		static ::Foundation::DualQuaternion New(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 translation)
		{
			return ((::Foundation::DualQuaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_NEW_OFFSET))(rotation, translation);
		}
		*/

		static ::UnityEngine::Quaternion Plus(::UnityEngine::Quaternion left, ::UnityEngine::Quaternion right)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_PLUS_OFFSET))(left, right);
		}

		static ::UnityEngine::Quaternion Scale(::UnityEngine::Quaternion value, ::System::Double scale)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_SCALE_OFFSET))(value, scale);
		}

		static ::UnityEngine::Quaternion Multiply(::UnityEngine::Quaternion left, ::UnityEngine::Quaternion right)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_MULTIPLY_OFFSET))(left, right);
		}

		static ::System::Double Magnitude(::UnityEngine::Quaternion value)
		{
			return ((::System::Double(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_MAGNITUDE_OFFSET))(value);
		}

		static ::UnityEngine::Quaternion Negate(::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_NEGATE_OFFSET))(value);
		}

		static ::UnityEngine::Quaternion Conjugate(::UnityEngine::Quaternion value)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_CONJUGATE_OFFSET))(value);
		}

		::System::Void DiagnosticCheck_Rotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_ROTATION_OFFSET))(this);
		}

		::System::Void DiagnosticCheck_Translation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_TRANSLATION_OFFSET))(this);
		}

		::System::Void DiagnosticCheck_Normalized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_NORMALIZED_OFFSET))(this);
		}

		::System::Void DiagnosticCheck_All()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DUALQUATERNION_DIAGNOSTICCHECK_ALL_OFFSET))(this);
		}
	};
}

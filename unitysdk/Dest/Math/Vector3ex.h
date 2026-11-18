#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/ProjectionPlanes.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Dest::Math { class Vector3ex_Information; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_VECTOR3EX_ANGLEDEG_OFFSET UNITYSDK_OFFSET(0x1E4BD080)
#define DEST_MATH_VECTOR3EX_ANGLERAD_OFFSET UNITYSDK_OFFSET(0x1E4BD2A0)
#define DEST_MATH_VECTOR3EX_CREATEORTHONORMALBASIS_OFFSET UNITYSDK_OFFSET(0x1E4B6BD0)
#define DEST_MATH_VECTOR3EX_CROSS_1_OFFSET UNITYSDK_OFFSET(0x1E4BD910)
#define DEST_MATH_VECTOR3EX_CROSS_2_OFFSET UNITYSDK_OFFSET(0x1E4BD960)
#define DEST_MATH_VECTOR3EX_CROSS_OFFSET UNITYSDK_OFFSET(0x1E4AB450)
#define DEST_MATH_VECTOR3EX_DOT_1_OFFSET UNITYSDK_OFFSET(0x1E4BD020)
#define DEST_MATH_VECTOR3EX_DOT_2_OFFSET UNITYSDK_OFFSET(0x1E4BD050)
#define DEST_MATH_VECTOR3EX_DOT_OFFSET UNITYSDK_OFFSET(0x1E4AA820)
#define DEST_MATH_VECTOR3EX_GETINFORMATION_OFFSET UNITYSDK_OFFSET(0x1E4BBC30)
#define DEST_MATH_VECTOR3EX_GETPROJECTIONPLANE_OFFSET UNITYSDK_OFFSET(0x1E4ACBE0)
#define DEST_MATH_VECTOR3EX_GROWLENGTH_OFFSET UNITYSDK_OFFSET(0x1E4BDCA0)
#define DEST_MATH_VECTOR3EX_LENGTHSQR_OFFSET UNITYSDK_OFFSET(0x1E4BD000)
#define DEST_MATH_VECTOR3EX_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E4BCFD0)
#define DEST_MATH_VECTOR3EX_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1E4BD220)
#define DEST_MATH_VECTOR3EX_REPLICATE_OFFSET UNITYSDK_OFFSET(0x1E4BDD10)
#define DEST_MATH_VECTOR3EX_SAMEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E4BDD30)
#define DEST_MATH_VECTOR3EX_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E4BDC30)
#define DEST_MATH_VECTOR3EX_SIGNEDANGLEDEG_OFFSET UNITYSDK_OFFSET(0x1E4BD440)
#define DEST_MATH_VECTOR3EX_SIGNEDANGLERAD_OFFSET UNITYSDK_OFFSET(0x1E4BD6B0)
#define DEST_MATH_VECTOR3EX_TOSTRINGEX_OFFSET UNITYSDK_OFFSET(0x1E4BBB70)
#define DEST_MATH_VECTOR3EX_TOVECTOR2XY_OFFSET UNITYSDK_OFFSET(0x1E4BDDE0)
#define DEST_MATH_VECTOR3EX_TOVECTOR2XZ_OFFSET UNITYSDK_OFFSET(0x1E4BDDF0)
#define DEST_MATH_VECTOR3EX_TOVECTOR2YZ_OFFSET UNITYSDK_OFFSET(0x1E4BDE00)
#define DEST_MATH_VECTOR3EX_TOVECTOR2_OFFSET UNITYSDK_OFFSET(0x1E4ACC20)
#define DEST_MATH_VECTOR3EX_UNITCROSS_1_OFFSET UNITYSDK_OFFSET(0x1E4BD9B0)
#define DEST_MATH_VECTOR3EX_UNITCROSS_2_OFFSET UNITYSDK_OFFSET(0x1E4BDAF0)
#define DEST_MATH_VECTOR3EX_UNITCROSS_OFFSET UNITYSDK_OFFSET(0x1E4AEB80)
#define DEST_MATH_VECTOR3EX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BDE10)

namespace Dest::Math
{
	inline static constexpr unsigned int Vector3ex_TypeDefinitionIndex = 34978;

	class Vector3ex : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_One()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x8A70);
		}
		static ::UnityEngine::Vector3* StaticGet_Zero()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x8A7C);
		}
		static ::UnityEngine::Vector3* StaticGet_UnitY()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x8A88);
		}
		static ::UnityEngine::Vector3* StaticGet_PositiveInfinity()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x8A94);
		}
		static ::UnityEngine::Vector3* StaticGet_NegativeInfinity()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x8AA0);
		}
		static ::UnityEngine::Vector3* StaticGet_UnitZ()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x8AAC);
		}
		static ::UnityEngine::Vector3* StaticGet_UnitX()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3ex_TypeDefinitionIndex)->GetStaticField(0x8AB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX__CCTOR_OFFSET))();
		}

		static ::Dest::Math::Vector3ex_Information* GetInformation(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Single epsilon)
		{
			return ((::Dest::Math::Vector3ex_Information*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_GETINFORMATION_OFFSET))(points, epsilon);
		}

		static ::System::Single Length(::UnityEngine::Vector3 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_LENGTH_OFFSET))(vector);
		}

		static ::System::Single LengthSqr(::UnityEngine::Vector3 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_LENGTHSQR_OFFSET))(vector);
		}

		static ::System::Single Dot(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_DOT_OFFSET))(vector, value);
		}

		static ::System::Single Dot_1(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3& value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_DOT_1_OFFSET))(vector, value);
		}

		static ::System::Single Dot_2(::UnityEngine::Vector3& vector, ::UnityEngine::Vector3& value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_DOT_2_OFFSET))(vector, value);
		}

		static ::System::Single AngleDeg(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 target)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_ANGLEDEG_OFFSET))(vector, target);
		}

		static ::System::Single AngleRad(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 target)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_ANGLERAD_OFFSET))(vector, target);
		}

		static ::System::Single SignedAngleDeg(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 target, ::UnityEngine::Vector3 normal)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_SIGNEDANGLEDEG_OFFSET))(vector, target, normal);
		}

		static ::System::Single SignedAngleRad(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 target, ::UnityEngine::Vector3 normal)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_SIGNEDANGLERAD_OFFSET))(vector, target, normal);
		}

		static ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_CROSS_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 Cross_1(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3& value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_CROSS_1_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 Cross_2(::UnityEngine::Vector3& vector, ::UnityEngine::Vector3& value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_CROSS_2_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 UnitCross(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_UNITCROSS_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 UnitCross_1(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3& value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_UNITCROSS_1_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector3 UnitCross_2(::UnityEngine::Vector3& vector, ::UnityEngine::Vector3& value)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_UNITCROSS_2_OFFSET))(vector, value);
		}

		static ::System::Single Normalize(::UnityEngine::Vector3& vector, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_NORMALIZE_OFFSET))(vector, epsilon);
		}

		static ::System::Single SetLength(::UnityEngine::Vector3& vector, ::System::Single lengthValue, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_SETLENGTH_OFFSET))(vector, lengthValue, epsilon);
		}

		static ::System::Single GrowLength(::UnityEngine::Vector3& vector, ::System::Single lengthDelta, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_GROWLENGTH_OFFSET))(vector, lengthDelta, epsilon);
		}

		static ::UnityEngine::Vector3 Replicate(::System::Single value)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_REPLICATE_OFFSET))(value);
		}

		static ::System::Void CreateOrthonormalBasis(::UnityEngine::Vector3& u, ::UnityEngine::Vector3& v, ::UnityEngine::Vector3& w)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_CREATEORTHONORMALBASIS_OFFSET))(u, v, w);
		}

		static ::System::Boolean SameDirection(::UnityEngine::Vector3 value0, ::UnityEngine::Vector3 value1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_SAMEDIRECTION_OFFSET))(value0, value1);
		}

		static ::UnityEngine::Vector2 ToVector2XY(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOVECTOR2XY_OFFSET))(vector);
		}

		static ::UnityEngine::Vector2 ToVector2XZ(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOVECTOR2XZ_OFFSET))(vector);
		}

		static ::UnityEngine::Vector2 ToVector2YZ(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOVECTOR2YZ_OFFSET))(vector);
		}

		static ::UnityEngine::Vector2 ToVector2(::UnityEngine::Vector3 vector, ::Dest::Math::ProjectionPlanes projectionPlane)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::Dest::Math::ProjectionPlanes))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOVECTOR2_OFFSET))(vector, projectionPlane);
		}

		static ::Dest::Math::ProjectionPlanes GetProjectionPlane(::UnityEngine::Vector3 vector)
		{
			return ((::Dest::Math::ProjectionPlanes(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_GETPROJECTIONPLANE_OFFSET))(vector);
		}

		static ::System::String* ToStringEx(::UnityEngine::Vector3 vector)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR3EX_TOSTRINGEX_OFFSET))(vector);
		}
	};
}

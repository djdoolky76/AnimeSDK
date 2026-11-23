#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_QUATERNION_ANGLEAXIS_INJECTED_OFFSET UNITYSDK_OFFSET(0x4185E40)
#define UNITYENGINE_QUATERNION_ANGLEAXIS_OFFSET UNITYSDK_OFFSET(0x4185EA0)
#define UNITYENGINE_QUATERNION_ANGLE_OFFSET UNITYSDK_OFFSET(0x4185F00)
#define UNITYENGINE_QUATERNION_DOT_OFFSET UNITYSDK_OFFSET(0x41217B0)
#define UNITYENGINE_QUATERNION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4185F90)
#define UNITYENGINE_QUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x4145860)
#define UNITYENGINE_QUATERNION_EULER_1_OFFSET UNITYSDK_OFFSET(0x4186120)
#define UNITYENGINE_QUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0x4186090)
#define UNITYENGINE_QUATERNION_FROMTOROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x41861A0)
#define UNITYENGINE_QUATERNION_FROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x4186200)
#define UNITYENGINE_QUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x41218B0)
#define UNITYENGINE_QUATERNION_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x41872B0)
#define UNITYENGINE_QUATERNION_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x4187390)
#define UNITYENGINE_QUATERNION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4187220)
#define UNITYENGINE_QUATERNION_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x41873D0)
#define UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_INJECTED_OFFSET UNITYSDK_OFFSET(0x4186260)
#define UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_OFFSET UNITYSDK_OFFSET(0x41862B0)
#define UNITYENGINE_QUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x4186300)
#define UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_INJECTED_OFFSET UNITYSDK_OFFSET(0x4186390)
#define UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_OFFSET UNITYSDK_OFFSET(0x41863F0)
#define UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_INJECTED_OFFSET UNITYSDK_OFFSET(0x4186450)
#define UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_OFFSET UNITYSDK_OFFSET(0x41864A0)
#define UNITYENGINE_QUATERNION_INVERSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x41864F0)
#define UNITYENGINE_QUATERNION_INVERSE_OFFSET UNITYSDK_OFFSET(0x4186540)
#define UNITYENGINE_QUATERNION_ISEQUALUSINGDOT_OFFSET UNITYSDK_OFFSET(0x4186590)
#define UNITYENGINE_QUATERNION_LERP_INJECTED_OFFSET UNITYSDK_OFFSET(0x41865A0)
#define UNITYENGINE_QUATERNION_LERP_OFFSET UNITYSDK_OFFSET(0x4186610)
#define UNITYENGINE_QUATERNION_LOOKROTATION_1_OFFSET UNITYSDK_OFFSET(0x41866E0)
#define UNITYENGINE_QUATERNION_LOOKROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x4186680)
#define UNITYENGINE_QUATERNION_LOOKROTATION_OFFSET UNITYSDK_OFFSET(0x4186790)
#define UNITYENGINE_QUATERNION_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x41867F0)
#define UNITYENGINE_QUATERNION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x4187510)
#define UNITYENGINE_QUATERNION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x4187570)
#define UNITYENGINE_QUATERNION_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x41875D0)
#define UNITYENGINE_QUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x41876E0)
#define UNITYENGINE_QUATERNION_ROTATETOWARDS_OFFSET UNITYSDK_OFFSET(0x4186900)
#define UNITYENGINE_QUATERNION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x4187850)
#define UNITYENGINE_QUATERNION_SLERPUNCLAMPED_INJECTED_OFFSET UNITYSDK_OFFSET(0x4186A50)
#define UNITYENGINE_QUATERNION_SLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x4186AC0)
#define UNITYENGINE_QUATERNION_SLERP_INJECTED_OFFSET UNITYSDK_OFFSET(0x4186B30)
#define UNITYENGINE_QUATERNION_SLERP_OFFSET UNITYSDK_OFFSET(0x4186BA0)
#define UNITYENGINE_QUATERNION_TOANGLEAXIS_OFFSET UNITYSDK_OFFSET(0x4186C10)
#define UNITYENGINE_QUATERNION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x4186F30)
#define UNITYENGINE_QUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4186C70)
#define UNITYENGINE_QUATERNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x41871E0)
#define UNITYENGINE_QUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x39CBF10)

namespace UnityEngine
{
	inline static constexpr unsigned int Quaternion_TypeDefinitionIndex = 17605;

	struct alignas(4) Quaternion
	{
		static ::UnityEngine::Quaternion* StaticGet_identityQuaternion()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(Quaternion_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		/*
		static ::UnityEngine::Quaternion Euler(::UnityEngine::Vector3 F3A8FCEEF4140764)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULER_OFFSET))(F3A8FCEEF4140764);
		}
		*/

		/*
		::System::Boolean Equals(::UnityEngine::Quaternion BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::UnityEngine::Quaternion B689A73377154515, ::UnityEngine::Quaternion F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_EQUALITY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::System::Void FromToRotation_Injected(::UnityEngine::Vector3& F3C8B50E36200732, ::UnityEngine::Vector3& B8AF4EDF21DF84A2, ::UnityEngine::Quaternion& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_FROMTOROTATION_INJECTED_OFFSET))(F3C8B50E36200732, B8AF4EDF21DF84A2, FEC8DC0392823C8D);
		}
		*/

		::UnityEngine::Vector3 get_eulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_EULERANGLES_OFFSET))(this);
		}

		/*
		static ::System::Void Internal_ToEulerRad_Injected(::UnityEngine::Quaternion& A0556B8B541B6D55, ::UnityEngine::Vector3& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_INJECTED_OFFSET))(A0556B8B541B6D55, FEC8DC0392823C8D);
		}
		*/

		/*
		static ::UnityEngine::Quaternion Internal_FromEulerRad(::UnityEngine::Vector3 F3A8FCEEF4140764)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_OFFSET))(F3A8FCEEF4140764);
		}
		*/

		/*
		static ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3 B78356FBC32D74BD, ::UnityEngine::Vector3 E21E62BD360376D1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_OFFSET))(B78356FBC32D74BD, E21E62BD360376D1);
		}
		*/

		static ::UnityEngine::Vector3 Internal_MakePositive(::UnityEngine::Vector3 F3A8FCEEF4140764)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET))(F3A8FCEEF4140764);
		}

		::System::Void _ctor(::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD, ::System::Single EFD6B3862CDDD176, ::System::Single B5F62894A37965D9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD, EFD6B3862CDDD176, B5F62894A37965D9);
		}

		/*
		static ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion B35BBBE7E39341A2, ::UnityEngine::Quaternion AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERP_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927);
		}
		*/

		::System::Void set_Item(::System::Int32 B48C66E5FB2449C6, ::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SET_ITEM_OFFSET))(this, B48C66E5FB2449C6, E937D4885DAA1AE8);
		}

		/*
		static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3 F3C8B50E36200732, ::UnityEngine::Vector3 B8AF4EDF21DF84A2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_FROMTOROTATION_OFFSET))(F3C8B50E36200732, B8AF4EDF21DF84A2);
		}
		*/

		::System::Boolean Equals_1(::System::Object* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}

		/*
		static ::UnityEngine::Quaternion Inverse(::UnityEngine::Quaternion A0556B8B541B6D55)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INVERSE_OFFSET))(A0556B8B541B6D55);
		}
		*/

		static ::System::Boolean IsEqualUsingDot(::System::Single E747619F22CD797E)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ISEQUALUSINGDOT_OFFSET))(E747619F22CD797E);
		}

		/*
		static ::System::Void Internal_FromEulerRad_Injected(::UnityEngine::Vector3& F3A8FCEEF4140764, ::UnityEngine::Quaternion& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_FROMEULERRAD_INJECTED_OFFSET))(F3A8FCEEF4140764, FEC8DC0392823C8D);
		}
		*/

		/*
		static ::System::Single Angle(::UnityEngine::Quaternion B35BBBE7E39341A2, ::UnityEngine::Quaternion AE40CAA6BBFEAD2C)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLE_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		::System::Single get_Item(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_ITEM_OFFSET))(this, B48C66E5FB2449C6);
		}

		/*
		static ::UnityEngine::Vector3 Internal_ToEulerRad(::UnityEngine::Quaternion A0556B8B541B6D55)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOEULERRAD_OFFSET))(A0556B8B541B6D55);
		}
		*/

		/*
		static ::System::Void LookRotation_Injected(::UnityEngine::Vector3& B78356FBC32D74BD, ::UnityEngine::Vector3& E21E62BD360376D1, ::UnityEngine::Quaternion& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_INJECTED_OFFSET))(B78356FBC32D74BD, E21E62BD360376D1, FEC8DC0392823C8D);
		}
		*/

		/*
		static ::System::Void Internal_ToAxisAngleRad_Injected(::UnityEngine::Quaternion& E74C726392028037, ::UnityEngine::Vector3& F24A60394CB7A82C, ::System::Single& AD1329E16AB80F43)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_INJECTED_OFFSET))(E74C726392028037, F24A60394CB7A82C, AD1329E16AB80F43);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Quaternion A0556B8B541B6D55, ::UnityEngine::Vector3 FF9A37DE513AC35B)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_MULTIPLY_OFFSET))(A0556B8B541B6D55, FF9A37DE513AC35B);
		}
		*/

		/*
		static ::System::Void Slerp_Injected(::UnityEngine::Quaternion& B35BBBE7E39341A2, ::UnityEngine::Quaternion& AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927, ::UnityEngine::Quaternion& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERP_INJECTED_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927, FEC8DC0392823C8D);
		}
		*/

		/*
		static ::UnityEngine::Quaternion LookRotation_1(::UnityEngine::Vector3 B78356FBC32D74BD)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LOOKROTATION_1_OFFSET))(B78356FBC32D74BD);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION__CCTOR_OFFSET))();
		}

		/*
		static ::UnityEngine::Quaternion SlerpUnclamped(::UnityEngine::Quaternion B35BBBE7E39341A2, ::UnityEngine::Quaternion AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERPUNCLAMPED_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927);
		}
		*/

		/*
		static ::UnityEngine::Quaternion Normalize(::UnityEngine::Quaternion E74C726392028037)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_NORMALIZE_OFFSET))(E74C726392028037);
		}
		*/

		/*
		static ::System::Void Inverse_Injected(::UnityEngine::Quaternion& A0556B8B541B6D55, ::UnityEngine::Quaternion& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INVERSE_INJECTED_OFFSET))(A0556B8B541B6D55, FEC8DC0392823C8D);
		}
		*/

		/*
		static ::System::Void SlerpUnclamped_Injected(::UnityEngine::Quaternion& B35BBBE7E39341A2, ::UnityEngine::Quaternion& AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927, ::UnityEngine::Quaternion& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_SLERPUNCLAMPED_INJECTED_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927, FEC8DC0392823C8D);
		}
		*/

		/*
		static ::System::Void AngleAxis_Injected(::System::Single AD1329E16AB80F43, ::UnityEngine::Vector3& F24A60394CB7A82C, ::UnityEngine::Quaternion& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLEAXIS_INJECTED_OFFSET))(AD1329E16AB80F43, F24A60394CB7A82C, FEC8DC0392823C8D);
		}
		*/

		/*
		static ::UnityEngine::Quaternion Euler_1(::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD, ::System::Single EFD6B3862CDDD176)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_EULER_1_OFFSET))(BB8C609F76620E45, A0A0D02932F12CFD, EFD6B3862CDDD176);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GETHASHCODE_OFFSET))(this);
		}

		/*
		::UnityEngine::Quaternion get_normalized()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_NORMALIZED_OFFSET))(this);
		}
		*/

		/*
		static ::System::Single Dot(::UnityEngine::Quaternion B35BBBE7E39341A2, ::UnityEngine::Quaternion AE40CAA6BBFEAD2C)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_DOT_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		::System::Void ToAngleAxis(::System::Single& AD1329E16AB80F43, ::UnityEngine::Vector3& F24A60394CB7A82C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOANGLEAXIS_OFFSET))(this, AD1329E16AB80F43, F24A60394CB7A82C);
		}

		/*
		static ::UnityEngine::Quaternion RotateTowards(::UnityEngine::Quaternion BC546FFFB0A5B7A6, ::UnityEngine::Quaternion A41067CFE0E0FB08, ::System::Single E6D93D3A7A693BC2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ROTATETOWARDS_OFFSET))(BC546FFFB0A5B7A6, A41067CFE0E0FB08, E6D93D3A7A693BC2);
		}
		*/

		::System::String* ToString(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOSTRING_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		/*
		static ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion B35BBBE7E39341A2, ::UnityEngine::Quaternion AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LERP_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927);
		}
		*/

		/*
		static ::UnityEngine::Quaternion op_Multiply_1(::UnityEngine::Quaternion B689A73377154515, ::UnityEngine::Quaternion F2B1B9B0CD5BC286)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_MULTIPLY_1_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_TOSTRING_1_OFFSET))(this);
		}

		/*
		static ::System::Void Lerp_Injected(::UnityEngine::Quaternion& B35BBBE7E39341A2, ::UnityEngine::Quaternion& AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927, ::UnityEngine::Quaternion& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_LERP_INJECTED_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927, FEC8DC0392823C8D);
		}
		*/

		/*
		static ::UnityEngine::Quaternion AngleAxis(::System::Single AD1329E16AB80F43, ::UnityEngine::Vector3 F24A60394CB7A82C)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_ANGLEAXIS_OFFSET))(AD1329E16AB80F43, F24A60394CB7A82C);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::Quaternion B689A73377154515, ::UnityEngine::Quaternion F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_OP_INEQUALITY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::System::Void Internal_ToAxisAngleRad(::UnityEngine::Quaternion E74C726392028037, ::UnityEngine::Vector3& F24A60394CB7A82C, ::System::Single& AD1329E16AB80F43)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_INTERNAL_TOAXISANGLERAD_OFFSET))(E74C726392028037, F24A60394CB7A82C, AD1329E16AB80F43);
		}
		*/

		/*
		static ::UnityEngine::Quaternion get_identity()
		{
			return ((::UnityEngine::Quaternion(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_QUATERNION_GET_IDENTITY_OFFSET))();
		}
		*/
	};
}

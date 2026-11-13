#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_IVEC3_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0x16F94360)
#define RPG_IVEC3_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3DCFC20)
#define RPG_IVEC3_CCTOR_OFFSET UNITYSDK_OFFSET(0x16F94610)
#define RPG_IVEC3_CJIGHOGJGHJ_OFFSET UNITYSDK_OFFSET(0x16F94410)
#define RPG_IVEC3_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DCFBB0)
#define RPG_IVEC3_CTOR_OFFSET UNITYSDK_OFFSET(0x3DB04F0)
#define RPG_IVEC3_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x3DB04F0)
#define RPG_IVEC3_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x16F94460)
#define RPG_IVEC3_EBLLCHBCJGG_1_OFFSET UNITYSDK_OFFSET(0x16F943F0)
#define RPG_IVEC3_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0x16F943C0)
#define RPG_IVEC3_EFNAJMADAHM_OFFSET UNITYSDK_OFFSET(0x16F941B0)
#define RPG_IVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x3DCFBE0)
#define RPG_IVEC3_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x16F94440)
#define RPG_IVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3DCFBC0)
#define RPG_IVEC3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x16F942C0)
#define RPG_IVEC3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x16F94300)
#define RPG_IVEC3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x16F942A0)
#define RPG_IVEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3DCFAA0)
#define RPG_IVEC3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x16F94320)
#define RPG_IVEC3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x16F94280)
#define RPG_IVEC3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x16F94340)
#define RPG_IVEC3_GET_UP_OFFSET UNITYSDK_OFFSET(0x16F942E0)
#define RPG_IVEC3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x16F94260)
#define RPG_IVEC3_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0x16F94380)
#define RPG_IVEC3_KKNANAIFIOM_OFFSET UNITYSDK_OFFSET(0x16F943A0)
#define RPG_IVEC3_LANBHJGNMFI_OFFSET UNITYSDK_OFFSET(0x16F94230)
#define RPG_IVEC3_NKAACMGNNPK_OFFSET UNITYSDK_OFFSET(0x16F941F0)
#define RPG_IVEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3DCFB20)
#define RPG_IVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3DCFC10)

namespace RPG
{
	inline static constexpr unsigned int IVec3_TypeDefinitionIndex = 6390;

	struct alignas(4) IVec3
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		static ::RPG::IVec3* StaticGet_downVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0x8820);
		}

		static ::RPG::IVec3* StaticGet_rightVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0x882C);
		}

		static ::RPG::IVec3* StaticGet_zeroVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0x8838);
		}

		static ::RPG::IVec3* StaticGet_upVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0x8844);
		}

		static ::RPG::IVec3* StaticGet_leftVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0x8850);
		}

		static ::RPG::IVec3* StaticGet_forwardVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0x885C);
		}

		static ::RPG::IVec3* StaticGet_backVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0x8868);
		}

		static ::RPG::IVec3* StaticGet_oneVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0x8874);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_CCTOR_OFFSET))();
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void DADCFBHGLOH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_DADCFBHGLOH_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_IVEC3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_IVEC3_EQUALS_OFFSET))(this, a1);
		}

		/*
		static ::RPG::IVec3 EFNAJMADAHM(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_EFNAJMADAHM_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::IVec3 NKAACMGNNPK(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_NKAACMGNNPK_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::IVec3 LANBHJGNMFI(::RPG::IVec3 a1)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_LANBHJGNMFI_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::IVec3 get_zero()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_ZERO_OFFSET))();
		}
		*/

		/*
		static ::RPG::IVec3 get_one()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_ONE_OFFSET))();
		}
		*/

		/*
		static ::RPG::IVec3 get_forward()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_FORWARD_OFFSET))();
		}
		*/

		/*
		static ::RPG::IVec3 get_back()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_BACK_OFFSET))();
		}
		*/

		/*
		static ::RPG::IVec3 get_up()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_UP_OFFSET))();
		}
		*/

		/*
		static ::RPG::IVec3 get_down()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_DOWN_OFFSET))();
		}
		*/

		/*
		static ::RPG::IVec3 get_left()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_LEFT_OFFSET))();
		}
		*/

		/*
		static ::RPG::IVec3 get_right()
		{
			return ((::RPG::IVec3(*)())((::PBYTE)hIl2Cpp + RPG_IVEC3_GET_RIGHT_OFFSET))();
		}
		*/

		/*
		static ::RPG::IVec3 ALJJDGONFDD(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_ALJJDGONFDD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::IVec3 GIAOOPPHODF(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_GIAOOPPHODF_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::IVec3 KKNANAIFIOM(::RPG::IVec3 a1)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_KKNANAIFIOM_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::IVec3 EBLLCHBCJGG(::RPG::IVec3 a1, ::System::Int32 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_EBLLCHBCJGG_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::IVec3 EBLLCHBCJGG_1(::System::Int32 a1, ::RPG::IVec3 a2)
		{
			return ((::RPG::IVec3(*)(::System::Int32, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_EBLLCHBCJGG_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::IVec3 CJIGHOGJGHJ(::RPG::IVec3 a1, ::System::Int32 a2)
		{
			return ((::RPG::IVec3(*)(::RPG::IVec3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_IVEC3_CJIGHOGJGHJ_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::System::Boolean(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::IVec3 a1, ::RPG::IVec3 a2)
		{
			return ((::System::Boolean(*)(::RPG::IVec3, ::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_IVEC3_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_IVEC3_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_IVEC3_BDJPPIMOJBH_OFFSET))(this, a1);
		}

	};
}

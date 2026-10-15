#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_IVEC3_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0x1DD8C410)
#define RPG_IVEC3_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3C4DF70)
#define RPG_IVEC3_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD8C6C0)
#define RPG_IVEC3_CJIGHOGJGHJ_OFFSET UNITYSDK_OFFSET(0x1DD8C4C0)
#define RPG_IVEC3_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4DF00)
#define RPG_IVEC3_CTOR_OFFSET UNITYSDK_OFFSET(0xFE60)
#define RPG_IVEC3_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xFE60)
#define RPG_IVEC3_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DD8C510)
#define RPG_IVEC3_EBLLCHBCJGG_1_OFFSET UNITYSDK_OFFSET(0x1DD8C4A0)
#define RPG_IVEC3_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0x1DD8C470)
#define RPG_IVEC3_EFNAJMADAHM_OFFSET UNITYSDK_OFFSET(0x1DD8C260)
#define RPG_IVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C4DF30)
#define RPG_IVEC3_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DD8C4F0)
#define RPG_IVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C4DF10)
#define RPG_IVEC3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1DD8C370)
#define RPG_IVEC3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1DD8C3B0)
#define RPG_IVEC3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1DD8C350)
#define RPG_IVEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C4DDF0)
#define RPG_IVEC3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1DD8C3D0)
#define RPG_IVEC3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1DD8C330)
#define RPG_IVEC3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1DD8C3F0)
#define RPG_IVEC3_GET_UP_OFFSET UNITYSDK_OFFSET(0x1DD8C390)
#define RPG_IVEC3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1DD8C310)
#define RPG_IVEC3_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0x1DD8C430)
#define RPG_IVEC3_KKNANAIFIOM_OFFSET UNITYSDK_OFFSET(0x1DD8C450)
#define RPG_IVEC3_LANBHJGNMFI_OFFSET UNITYSDK_OFFSET(0x1DD8C2E0)
#define RPG_IVEC3_NKAACMGNNPK_OFFSET UNITYSDK_OFFSET(0x1DD8C2A0)
#define RPG_IVEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C4DE70)
#define RPG_IVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4DF60)

namespace RPG
{
	inline static constexpr unsigned int IVec3_TypeDefinitionIndex = 6383;

	struct alignas(4) IVec3
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		static ::RPG::IVec3* StaticGet_rightVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0xA220);
		}

		static ::RPG::IVec3* StaticGet_upVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0xA22C);
		}

		static ::RPG::IVec3* StaticGet_zeroVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0xA238);
		}

		static ::RPG::IVec3* StaticGet_forwardVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0xA244);
		}

		static ::RPG::IVec3* StaticGet_downVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0xA250);
		}

		static ::RPG::IVec3* StaticGet_oneVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0xA25C);
		}

		static ::RPG::IVec3* StaticGet_leftVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0xA268);
		}

		static ::RPG::IVec3* StaticGet_backVector()
		{
			return (::RPG::IVec3*)UnitySDK::FromName("RPG", "IVec3")->GetStaticField(0xA274);
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

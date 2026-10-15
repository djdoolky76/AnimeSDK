#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/IVec3.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_IVEC2_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0x1DD89D20)
#define RPG_GAMECORE_IVEC2_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1DD89E20)
#define RPG_GAMECORE_IVEC2_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD89E10)
#define RPG_GAMECORE_IVEC2_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3C4DD10)
#define RPG_GAMECORE_IVEC2_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD89EA0)
#define RPG_GAMECORE_IVEC2_CJIGHOGJGHJ_OFFSET UNITYSDK_OFFSET(0x1DD89DC0)
#define RPG_GAMECORE_IVEC2_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define RPG_GAMECORE_IVEC2_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x111F0)
#define RPG_GAMECORE_IVEC2_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DD89E00)
#define RPG_GAMECORE_IVEC2_EBLLCHBCJGG_1_OFFSET UNITYSDK_OFFSET(0x1DD89DA0)
#define RPG_GAMECORE_IVEC2_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0x1DD89D80)
#define RPG_GAMECORE_IVEC2_EFNAJMADAHM_OFFSET UNITYSDK_OFFSET(0x1DD89C70)
#define RPG_GAMECORE_IVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C4DDC0)
#define RPG_GAMECORE_IVEC2_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DD89DF0)
#define RPG_GAMECORE_IVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C4DDB0)
#define RPG_GAMECORE_IVEC2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1DD89E70)
#define RPG_GAMECORE_IVEC2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C4DB70)
#define RPG_GAMECORE_IVEC2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1DD89E80)
#define RPG_GAMECORE_IVEC2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1DD89E50)
#define RPG_GAMECORE_IVEC2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1DD89E90)
#define RPG_GAMECORE_IVEC2_GET_UP_OFFSET UNITYSDK_OFFSET(0x1DD89E60)
#define RPG_GAMECORE_IVEC2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1DD89E40)
#define RPG_GAMECORE_IVEC2_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0x1DD89D40)
#define RPG_GAMECORE_IVEC2_KKNANAIFIOM_OFFSET UNITYSDK_OFFSET(0x1DD89D60)
#define RPG_GAMECORE_IVEC2_LANBHJGNMFI_OFFSET UNITYSDK_OFFSET(0x1DD89CF0)
#define RPG_GAMECORE_IVEC2_NKAACMGNNPK_OFFSET UNITYSDK_OFFSET(0x1DD89CB0)
#define RPG_GAMECORE_IVEC2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C4DBF0)
#define RPG_GAMECORE_IVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4DC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IVec2_TypeDefinitionIndex = 6549;

	struct alignas(4) IVec2
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		static ::RPG::GameCore::IVec2* StaticGet_leftVector()
		{
			return (::RPG::GameCore::IVec2*)UnitySDK::FromName("RPG.GameCore", "IVec2")->GetStaticField(0xA050);
		}

		static ::RPG::GameCore::IVec2* StaticGet_oneVector()
		{
			return (::RPG::GameCore::IVec2*)UnitySDK::FromName("RPG.GameCore", "IVec2")->GetStaticField(0xA058);
		}

		static ::RPG::GameCore::IVec2* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::IVec2*)UnitySDK::FromName("RPG.GameCore", "IVec2")->GetStaticField(0xA060);
		}

		static ::RPG::GameCore::IVec2* StaticGet_rightVector()
		{
			return (::RPG::GameCore::IVec2*)UnitySDK::FromName("RPG.GameCore", "IVec2")->GetStaticField(0xA068);
		}

		static ::RPG::GameCore::IVec2* StaticGet_downVector()
		{
			return (::RPG::GameCore::IVec2*)UnitySDK::FromName("RPG.GameCore", "IVec2")->GetStaticField(0xA070);
		}

		static ::RPG::GameCore::IVec2* StaticGet_upVector()
		{
			return (::RPG::GameCore::IVec2*)UnitySDK::FromName("RPG.GameCore", "IVec2")->GetStaticField(0xA078);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_CCTOR_OFFSET))();
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void DADCFBHGLOH(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_EQUALS_OFFSET))(this, a1);
		}

		/*
		static ::RPG::GameCore::IVec2 EFNAJMADAHM(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_EFNAJMADAHM_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 NKAACMGNNPK(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_NKAACMGNNPK_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 LANBHJGNMFI(::RPG::GameCore::IVec2 a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_LANBHJGNMFI_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 ALJJDGONFDD(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_ALJJDGONFDD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 GIAOOPPHODF(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GIAOOPPHODF_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 KKNANAIFIOM(::RPG::GameCore::IVec2 a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_KKNANAIFIOM_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 EBLLCHBCJGG(::RPG::GameCore::IVec2 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_EBLLCHBCJGG_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 EBLLCHBCJGG_1(::System::Int32 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::System::Int32, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_EBLLCHBCJGG_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 CJIGHOGJGHJ(::RPG::GameCore::IVec2 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_CJIGHOGJGHJ_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 BBNJCKPKPDN(::RPG::IVec3 a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::IVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::MVector3 BBNJCKPKPDN_1(::RPG::GameCore::IVec2 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 get_zero()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_ZERO_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 get_one()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_ONE_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 get_up()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_UP_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 get_down()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_DOWN_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 get_left()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_LEFT_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::IVec2 get_right()
		{
			return ((::RPG::GameCore::IVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_IVEC2_GET_RIGHT_OFFSET))();
		}
		*/

	};
}

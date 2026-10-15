#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_MRECT_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3C4EBD0)
#define RPG_MRECT_BHBOMIOJENB_OFFSET UNITYSDK_OFFSET(0x1DD8F360)
#define RPG_MRECT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4E5B0)
#define RPG_MRECT_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2EDDF70)
#define RPG_MRECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0)
#define RPG_MRECT_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x1CE0)
#define RPG_MRECT_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DD8F5F0)
#define RPG_MRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C4EA70)
#define RPG_MRECT_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DD8F630)
#define RPG_MRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C4E9F0)
#define RPG_MRECT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x3C4EBE0)
#define RPG_MRECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x3C4E5D0)
#define RPG_MRECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C80)
#define RPG_MRECT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D00)
#define RPG_MRECT_GET_MAX_OFFSET UNITYSDK_OFFSET(0x3C4E640)
#define RPG_MRECT_GET_MIN_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_MRECT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_MRECT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x3C112E0)
#define RPG_MRECT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D40)
#define RPG_MRECT_GET_TOP_OFFSET UNITYSDK_OFFSET(0x1D10)
#define RPG_MRECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1D20)
#define RPG_MRECT_GET_XMAX_OFFSET UNITYSDK_OFFSET(0x3C4E6D0)
#define RPG_MRECT_GET_XMIN_OFFSET UNITYSDK_OFFSET(0x1D00)
#define RPG_MRECT_GET_X_OFFSET UNITYSDK_OFFSET(0x1D00)
#define RPG_MRECT_GET_YMAX_OFFSET UNITYSDK_OFFSET(0x3C4E6F0)
#define RPG_MRECT_GET_YMIN_OFFSET UNITYSDK_OFFSET(0x1D10)
#define RPG_MRECT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1D10)
#define RPG_MRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1DD8EFB0)
#define RPG_MRECT_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x3C4E750)
#define RPG_MRECT_LCJMKJPECAP_2_OFFSET UNITYSDK_OFFSET(0x3C4E790)
#define RPG_MRECT_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3C4E710)
#define RPG_MRECT_LFGIHCLLPEP_OFFSET UNITYSDK_OFFSET(0x1DD8F550)
#define RPG_MRECT_LIPPDPBBDCI_OFFSET UNITYSDK_OFFSET(0x1DD8F4C0)
#define RPG_MRECT_NJKBJCOEDIK_OFFSET UNITYSDK_OFFSET(0x1DD8EFC0)
#define RPG_MRECT_PGIMMALOOHG_1_OFFSET UNITYSDK_OFFSET(0x3C4E8A0)
#define RPG_MRECT_PGIMMALOOHG_OFFSET UNITYSDK_OFFSET(0x3C4E850)
#define RPG_MRECT_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x3C4E600)
#define RPG_MRECT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A780)
#define RPG_MRECT_SET_MAX_OFFSET UNITYSDK_OFFSET(0x3C4E670)
#define RPG_MRECT_SET_MIN_OFFSET UNITYSDK_OFFSET(0x3C4E620)
#define RPG_MRECT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x94B0)
#define RPG_MRECT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x94C0)
#define RPG_MRECT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xEA780)
#define RPG_MRECT_SET_XMAX_OFFSET UNITYSDK_OFFSET(0x3C4E6E0)
#define RPG_MRECT_SET_XMIN_OFFSET UNITYSDK_OFFSET(0x3C4E690)
#define RPG_MRECT_SET_X_OFFSET UNITYSDK_OFFSET(0x14EA0)
#define RPG_MRECT_SET_YMAX_OFFSET UNITYSDK_OFFSET(0x3C4E700)
#define RPG_MRECT_SET_YMIN_OFFSET UNITYSDK_OFFSET(0x3C4E6B0)
#define RPG_MRECT_SET_Y_OFFSET UNITYSDK_OFFSET(0xEA770)
#define RPG_MRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4EBC0)

namespace RPG
{
	struct alignas(4) MRect
	{
		::System::Single m_XMin; // 0x10
		::System::Single m_YMin; // 0x14
		::System::Single m_Width; // 0x18
		::System::Single m_Height; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_CTOR_1_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void _ctor_2(::RPG::MRect a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_CTOR_2_OFFSET))(this, a1);
		}
		*/

		/*
		static ::RPG::MRect get_zero()
		{
			return ((::RPG::MRect(*)())((::PBYTE)hIl2Cpp + RPG_MRECT_GET_ZERO_OFFSET))();
		}
		*/

		/*
		static ::RPG::MRect NJKBJCOEDIK(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::MRect(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_NJKBJCOEDIK_OFFSET))(a1, a2, a3, a4);
		}
		*/

		::System::Void DADCFBHGLOH(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_DADCFBHGLOH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_Y_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_position()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_POSITION_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_center()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_CENTER_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_min()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_MIN_OFFSET))(this);
		}

		::System::Void set_min(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_MIN_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_max()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_MAX_OFFSET))(this);
		}

		::System::Void set_max(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_MAX_OFFSET))(this, a1);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_HEIGHT_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_size()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Single get_xMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_XMIN_OFFSET))(this);
		}

		::System::Void set_xMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_XMIN_OFFSET))(this, a1);
		}

		::System::Single get_yMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_YMIN_OFFSET))(this);
		}

		::System::Void set_yMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_YMIN_OFFSET))(this, a1);
		}

		::System::Single get_xMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_XMAX_OFFSET))(this);
		}

		::System::Void set_xMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_XMAX_OFFSET))(this, a1);
		}

		::System::Single get_yMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_YMAX_OFFSET))(this);
		}

		::System::Void set_yMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MRECT_SET_YMAX_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MRECT_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_2(::RPG::MVector3 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_MRECT_LCJMKJPECAP_2_OFFSET))(this, a1, a2);
		}

		/*
		static ::RPG::MRect BHBOMIOJENB(::RPG::MRect a1)
		{
			return ((::RPG::MRect(*)(::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_BHBOMIOJENB_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean PGIMMALOOHG(::RPG::MRect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_PGIMMALOOHG_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean PGIMMALOOHG_1(::RPG::MRect a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MRect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_MRECT_PGIMMALOOHG_1_OFFSET))(this, a1, a2);
		}
		*/

		/*
		static ::RPG::MVector2 LIPPDPBBDCI(::RPG::MRect a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MRect, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_LIPPDPBBDCI_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::MVector2 LFGIHCLLPEP(::RPG::MRect a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MRect, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MRECT_LFGIHCLLPEP_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::MRect a1, ::RPG::MRect a2)
		{
			return ((::System::Boolean(*)(::RPG::MRect, ::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::MRect a1, ::RPG::MRect a2)
		{
			return ((::System::Boolean(*)(::RPG::MRect, ::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MRECT_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MRECT_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_MRECT_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		::System::Single get_left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_RIGHT_OFFSET))(this);
		}

		::System::Single get_top()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_TOP_OFFSET))(this);
		}

		::System::Single get_bottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MRECT_GET_BOTTOM_OFFSET))(this);
		}

	};
}

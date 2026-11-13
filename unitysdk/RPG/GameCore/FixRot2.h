#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
namespace System { class String; }

#define RPG_GAMECORE_FIXROT2_BAJBMDPNHHI_OFFSET UNITYSDK_OFFSET(0x20456DF0)
#define RPG_GAMECORE_FIXROT2_CCTOR_OFFSET UNITYSDK_OFFSET(0x204573F0)
#define RPG_GAMECORE_FIXROT2_CTOR_OFFSET UNITYSDK_OFFSET(0x6516D0)
#define RPG_GAMECORE_FIXROT2_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x6516D0)
#define RPG_GAMECORE_FIXROT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F6CA40)
#define RPG_GAMECORE_FIXROT2_GET_DEGREES_OFFSET UNITYSDK_OFFSET(0x3F6CD50)
#define RPG_GAMECORE_FIXROT2_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x20457350)
#define RPG_GAMECORE_FIXROT2_GET_RADIANS_OFFSET UNITYSDK_OFFSET(0x3F6CD40)
#define RPG_GAMECORE_FIXROT2_HKKIDGFMCHB_OFFSET UNITYSDK_OFFSET(0x204571F0)
#define RPG_GAMECORE_FIXROT2_HNPBBOFEKOF_OFFSET UNITYSDK_OFFSET(0x20456E50)
#define RPG_GAMECORE_FIXROT2_KBHEBIPDMBE_OFFSET UNITYSDK_OFFSET(0x3F6CC20)
#define RPG_GAMECORE_FIXROT2_LAPJCIBMPIH_OFFSET UNITYSDK_OFFSET(0x3F6CB90)
#define RPG_GAMECORE_FIXROT2_LFIKGICAMCP_OFFSET UNITYSDK_OFFSET(0x20457280)
#define RPG_GAMECORE_FIXROT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F6CD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixRot2_TypeDefinitionIndex = 9951;

	struct alignas(4) FixRot2
	{
		::RPG::GameCore::FixPoint Cos; // 0x10
		::RPG::GameCore::FixPoint Sin; // 0x18
		static ::RPG::GameCore::FixRot2* StaticGet_identity()
		{
			return (::RPG::GameCore::FixRot2*)UnitySDK::FromName("RPG.GameCore", "FixRot2")->GetStaticField(0x93D0);
		}

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_CCTOR_OFFSET))();
		}

		::System::Void DADCFBHGLOH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		/*
		static ::RPG::GameCore::FixRot2 BAJBMDPNHHI(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixRot2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_BAJBMDPNHHI_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixRot2 HNPBBOFEKOF(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixRot2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_HNPBBOFEKOF_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::GameCore::FixRot2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixRot2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_EQUALS_OFFSET))(this, a1);
		}
		*/

		::RPG::GameCore::FixVec2 LAPJCIBMPIH(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_LAPJCIBMPIH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixVec2 KBHEBIPDMBE(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_KBHEBIPDMBE_OFFSET))(this, a1);
		}

		/*
		static ::RPG::GameCore::FixRot2 HKKIDGFMCHB(::RPG::GameCore::FixRot2 a1, ::RPG::GameCore::FixRot2 a2)
		{
			return ((::RPG::GameCore::FixRot2(*)(::RPG::GameCore::FixRot2, ::RPG::GameCore::FixRot2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_HKKIDGFMCHB_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixRot2 LFIKGICAMCP(::RPG::GameCore::FixRot2 a1, ::RPG::GameCore::FixRot2 a2)
		{
			return ((::RPG::GameCore::FixRot2(*)(::RPG::GameCore::FixRot2, ::RPG::GameCore::FixRot2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_LFIKGICAMCP_OFFSET))(a1, a2);
		}
		*/

		::RPG::GameCore::FixPoint get_Radians()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_GET_RADIANS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Degrees()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_GET_DEGREES_OFFSET))(this);
		}

		/*
		static ::RPG::GameCore::FixRot2 get_Identity()
		{
			return ((::RPG::GameCore::FixRot2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_GET_IDENTITY_OFFSET))();
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXROT2_TOSTRING_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
namespace System { class Object; }

#define RPG_MCOLOR_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0x1EF8F280)
#define RPG_MCOLOR_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1EF8F270)
#define RPG_MCOLOR_CJIGHOGJGHJ_OFFSET UNITYSDK_OFFSET(0x1EF8F320)
#define RPG_MCOLOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE0)
#define RPG_MCOLOR_CTOR_OFFSET UNITYSDK_OFFSET(0x3E9D750)
#define RPG_MCOLOR_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x3E9D490)
#define RPG_MCOLOR_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1EF8F390)
#define RPG_MCOLOR_EBLLCHBCJGG_1_OFFSET UNITYSDK_OFFSET(0x1EF8F2E0)
#define RPG_MCOLOR_EBLLCHBCJGG_2_OFFSET UNITYSDK_OFFSET(0x1EF8F300)
#define RPG_MCOLOR_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0x1EF8F2C0)
#define RPG_MCOLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E9D570)
#define RPG_MCOLOR_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1EF8F340)
#define RPG_MCOLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E9D6C0)
#define RPG_MCOLOR_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0x1EF8F2A0)
#define RPG_MCOLOR_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0x1EF8F3E0)
#define RPG_MCOLOR_JODKCCOIGIG_OFFSET UNITYSDK_OFFSET(0x1EF8F440)

namespace RPG
{
	inline static constexpr unsigned int MColor_TypeDefinitionIndex = 6391;

	struct alignas(4) MColor
	{
		::System::Single r; // 0x10
		::System::Single g; // 0x14
		::System::Single b; // 0x18
		::System::Single a; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		::System::Boolean DGCGLNOLDIB(::RPG::MColor a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MCOLOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MCOLOR_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::BMAGJGLPIIF BBNJCKPKPDN(::RPG::MColor a1)
		{
			return ((::BMAGJGLPIIF(*)(::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::MColor ALJJDGONFDD(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_ALJJDGONFDD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::MColor GIAOOPPHODF(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_GIAOOPPHODF_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::MColor EBLLCHBCJGG(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_EBLLCHBCJGG_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::MColor EBLLCHBCJGG_1(::RPG::MColor a1, ::System::Single a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_EBLLCHBCJGG_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::MColor EBLLCHBCJGG_2(::System::Single a1, ::RPG::MColor a2)
		{
			return ((::RPG::MColor(*)(::System::Single, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_EBLLCHBCJGG_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::MColor CJIGHOGJGHJ(::RPG::MColor a1, ::System::Single a2)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_CJIGHOGJGHJ_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::System::Boolean(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::MColor a1, ::RPG::MColor a2)
		{
			return ((::System::Boolean(*)(::RPG::MColor, ::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MCOLOR_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::MColor HAIHHFOPBLN(::RPG::MColor a1, ::RPG::MColor a2, ::System::Single a3)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_HAIHHFOPBLN_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::MColor JODKCCOIGIG(::RPG::MColor a1, ::RPG::MColor a2, ::System::Single a3)
		{
			return ((::RPG::MColor(*)(::RPG::MColor, ::RPG::MColor, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MCOLOR_JODKCCOIGIG_OFFSET))(a1, a2, a3);
		}
		*/

	};
}

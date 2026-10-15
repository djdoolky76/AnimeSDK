#pragma once
#include "unitysdk/unitysdk.h"

#define MDNBBCOBGPH_HHDJGCEAALN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C950)
#define MDNBBCOBGPH_HHDJGCEAALN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C940)
#define MDNBBCOBGPH_HHDJGCEAALN_GET_HADAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xFE70)
#define MDNBBCOBGPH_HHDJGCEAALN_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xE620)

inline static constexpr unsigned int MDNBBCOBGPH_HHDJGCEAALN_TypeDefinitionIndex = 68100;

	struct alignas(4) MDNBBCOBGPH_HHDJGCEAALN
	{
		::System::Int32 _Position_k__BackingField; // 0x10
		::System::Int32 _HadAvatarCount_k__BackingField; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_HHDJGCEAALN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_HHDJGCEAALN_GET_POSITION_OFFSET))(this);
		}

		::System::Int32 get_HadAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_HHDJGCEAALN_GET_HADAVATARCOUNT_OFFSET))(this);
		}

		/*
		::System::Int32 CompareTo(::MDNBBCOBGPH_HHDJGCEAALN a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MDNBBCOBGPH_HHDJGCEAALN))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_HHDJGCEAALN_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};

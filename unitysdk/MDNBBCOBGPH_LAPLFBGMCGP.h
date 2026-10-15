#pragma once
#include "unitysdk/unitysdk.h"

#define MDNBBCOBGPH_LAPLFBGMCGP_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define MDNBBCOBGPH_LAPLFBGMCGP_GET_PARTIALTEAMMATEINDEX_OFFSET UNITYSDK_OFFSET(0xE620)
#define MDNBBCOBGPH_LAPLFBGMCGP_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xFE70)

inline static constexpr unsigned int MDNBBCOBGPH_LAPLFBGMCGP_TypeDefinitionIndex = 68099;

	struct alignas(4) MDNBBCOBGPH_LAPLFBGMCGP
	{
		::System::Int32 _PartialTeammateIndex_k__BackingField; // 0x10
		::System::Int32 _StartPosition_k__BackingField; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_LAPLFBGMCGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_PartialTeammateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_LAPLFBGMCGP_GET_PARTIALTEAMMATEINDEX_OFFSET))(this);
		}

		::System::Int32 get_StartPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_LAPLFBGMCGP_GET_STARTPOSITION_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"

#define HODEJIOONON_CCECOCKDPIC_CTOR_OFFSET UNITYSDK_OFFSET(0x14A20)
#define HODEJIOONON_CCECOCKDPIC_GET_CREATIONINDEX_OFFSET UNITYSDK_OFFSET(0xE600)
#define HODEJIOONON_CCECOCKDPIC_GET_PATIENCE_OFFSET UNITYSDK_OFFSET(0x1D10)

inline static constexpr unsigned int HODEJIOONON_CCECOCKDPIC_TypeDefinitionIndex = 80010;

	struct alignas(4) HODEJIOONON_CCECOCKDPIC
	{
		::System::Int32 _CreationIndex_k__BackingField; // 0x10
		::System::Single _Patience_k__BackingField; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HODEJIOONON_CCECOCKDPIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_CreationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HODEJIOONON_CCECOCKDPIC_GET_CREATIONINDEX_OFFSET))(this);
		}

		::System::Single get_Patience()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HODEJIOONON_CCECOCKDPIC_GET_PATIENCE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEJOLMFCPPH_COMPARE_OFFSET UNITYSDK_OFFSET(0xE510800)
#define DEJOLMFCPPH_CTOR_OFFSET UNITYSDK_OFFSET(0xE510D10)

inline static constexpr unsigned int DEJOLMFCPPH_TypeDefinitionIndex = 66570;

	class DEJOLMFCPPH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJOLMFCPPH_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DEJOLMFCPPH_COMPARE_OFFSET))(this, a1, a2);
		}

	};

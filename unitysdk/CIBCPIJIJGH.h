#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHCNDENHLGO.h"

#define CIBCPIJIJGH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF651C0)
#define CIBCPIJIJGH_GET_TOTALROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xCF651B0)

inline static constexpr unsigned int CIBCPIJIJGH_TypeDefinitionIndex = 81447;

	class CIBCPIJIJGH : public ::DHCNDENHLGO
	{
	public:
		::System::Int32 _TotalRoundCount_k__BackingField; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIBCPIJIJGH_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalRoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBCPIJIJGH_GET_TOTALROUNDCOUNT_OFFSET))(this);
		}

	};

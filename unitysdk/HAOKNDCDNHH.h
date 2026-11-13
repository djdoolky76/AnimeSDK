#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"

#define HAOKNDCDNHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C14D690)
#define HAOKNDCDNHH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x1C14D3A0)
#define HAOKNDCDNHH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C14D4C0)
#define HAOKNDCDNHH_NHNGNAIDCPH_OFFSET UNITYSDK_OFFSET(0x1C14D3F0)

inline static constexpr unsigned int HAOKNDCDNHH_TypeDefinitionIndex = 76345;

	class HAOKNDCDNHH : public ::FFPAFGCOKHK
	{
	public:
		::System::Single DKOFFPPGEFI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOKNDCDNHH_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOKNDCDNHH_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAOKNDCDNHH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single NHNGNAIDCPH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOKNDCDNHH_NHNGNAIDCPH_OFFSET))(this);
		}

	};

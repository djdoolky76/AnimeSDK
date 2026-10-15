#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DestructState.h"

#define INLKLJJDHLN_EPFHPMHIDEG_OFFSET UNITYSDK_OFFSET(0x3C33E30)
#define INLKLJJDHLN_FCBIJCOLNIC_OFFSET UNITYSDK_OFFSET(0x3C33DC0)
#define INLKLJJDHLN_KAPJAHBPPML_OFFSET UNITYSDK_OFFSET(0x3C33EB0)
#define INLKLJJDHLN_MIDJJIPGBCK_OFFSET UNITYSDK_OFFSET(0x3C33E40)
#define INLKLJJDHLN_OMICPBOIPOE_OFFSET UNITYSDK_OFFSET(0x3C33D50)

inline static constexpr unsigned int INLKLJJDHLN_TypeDefinitionIndex = 43452;

	struct alignas(4) INLKLJJDHLN
	{
		::RPG::Client::LittleGame::FiveDim::DestructState MJCKCNENACO; // 0x10
		::System::Single AHMBCNKJNKE; // 0x14
		::System::Single OFFPCNHILAE; // 0x18
		::System::Boolean BFDFNEMONKH; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 MNMHMECGDAK; // 0x20
		::System::Void OMICPBOIPOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLKLJJDHLN_OMICPBOIPOE_OFFSET))(this);
		}

		::System::Boolean FCBIJCOLNIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INLKLJJDHLN_FCBIJCOLNIC_OFFSET))(this);
		}

		::System::Boolean EPFHPMHIDEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INLKLJJDHLN_EPFHPMHIDEG_OFFSET))(this);
		}

		::System::Boolean MIDJJIPGBCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INLKLJJDHLN_MIDJJIPGBCK_OFFSET))(this);
		}

		::System::Boolean KAPJAHBPPML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INLKLJJDHLN_KAPJAHBPPML_OFFSET))(this);
		}

	};

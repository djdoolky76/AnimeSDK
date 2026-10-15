#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/SnowballPuzzleBlockType.h"

#define OONLCFAHBFP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x25C90)

inline static constexpr unsigned int OONLCFAHBFP_TypeDefinitionIndex = 78868;

	struct alignas(4) OONLCFAHBFP
	{
		::RPG::Client::Prop::SnowballPuzzleBlockType GMPGDEINODK; // 0x10
		::System::Boolean AJIKINFOPAK; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 CFJFOOBMLHL; // 0x18
		::System::Boolean EFGKCMBGNCA; // 0x1C
		::System::Byte _padding1[0x3];
		::System::Int32 JJLBIPOALPI; // 0x20
		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONLCFAHBFP_KHGIKBFDLFB_OFFSET))(this);
		}

	};

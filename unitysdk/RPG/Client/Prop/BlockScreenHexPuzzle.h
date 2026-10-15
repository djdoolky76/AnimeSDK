#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleBoardBase.h"

#define RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC2C2F0)
#define RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_HKDNHLPLDDG_OFFSET UNITYSDK_OFFSET(0xDC2C0E0)
#define RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_NDNNBDKHCKF_OFFSET UNITYSDK_OFFSET(0xDC2C210)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockScreenHexPuzzle_TypeDefinitionIndex = 78601;

	class BlockScreenHexPuzzle : public ::RPG::Client::Prop::HexPuzzleBoardBase
	{
	public:
		::System::Boolean FENKBFBBODD; // 0xE8
		::System::Byte _padding0[0x3];
		::System::UInt32 LOKEPPMGHOH; // 0xEC
		// static const ::System::Object HOJJGKCJMDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_CTOR_OFFSET))(this);
		}

		::System::Void HKDNHLPLDDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_HKDNHLPLDDG_OFFSET))(this);
		}

		::System::Void NDNNBDKHCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKSCREENHEXPUZZLE_NDNNBDKHCKF_OFFSET))(this);
		}

	};
}

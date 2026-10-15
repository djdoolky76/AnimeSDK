#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDHMIJHMGIL;

#define NDHMIJHMGIL___C__DISPLAYCLASS89_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBB3A2B0)
#define NDHMIJHMGIL___C__DISPLAYCLASS89_0__ONROUNDTEAMCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xBB42EE0)

inline static constexpr unsigned int NDHMIJHMGIL___c__DisplayClass89_0_TypeDefinitionIndex = 60421;

	class NDHMIJHMGIL___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::NDHMIJHMGIL* __4__this; // 0x10
		::System::Single countDown; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL___C__DISPLAYCLASS89_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnRoundTeamChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHMIJHMGIL___C__DISPLAYCLASS89_0__ONROUNDTEAMCHANGE_B__0_OFFSET))(this);
		}

	};

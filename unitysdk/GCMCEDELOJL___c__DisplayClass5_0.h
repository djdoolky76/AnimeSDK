#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define GCMCEDELOJL___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15983E70)
#define GCMCEDELOJL___C__DISPLAYCLASS5_0__GETROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0x15984260)

	class GCMCEDELOJL___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMCEDELOJL___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleByID_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + GCMCEDELOJL___C__DISPLAYCLASS5_0__GETROLEBYID_B__0_OFFSET))(this, a1);
		}

	};

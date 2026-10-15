#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightNPC; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD2796A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS10_0__GETNPCBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xD27CAA0)

namespace RPG::Client
{
	class GridFightSettleRecord___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNPCByUID_b__0(::RPG::Client::GridFightNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS10_0__GETNPCBYUID_B__0_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameRefData; }

#define HKIGOHOBJOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15D461C0)
#define HKIGOHOBJOC_MJDOBHGFEFP_OFFSET UNITYSDK_OFFSET(0x15D463D0)

	class HKIGOHOBJOC : public ::System::Object
	{
	public:
		::System::Single DBHMJLCJCME; // 0x10
		::System::Single MGGJCMBONME; // 0x14
		::System::Single CANJKAAENID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIGOHOBJOC_CTOR_OFFSET))(this);
		}

		::System::Single MJDOBHGFEFP(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + HKIGOHOBJOC_MJDOBHGFEFP_OFFSET))(this, a1);
		}

	};

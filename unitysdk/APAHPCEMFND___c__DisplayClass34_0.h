#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap::FiveDim { class Face; }

#define APAHPCEMFND___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158C9410)
#define APAHPCEMFND___C__DISPLAYCLASS34_0__GETFACEBYSURFACEID_B__0_OFFSET UNITYSDK_OFFSET(0x158C94A0)

	class APAHPCEMFND___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::UInt32 surfaceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAHPCEMFND___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFaceBySurfaceID_b__0(::RPG::Client::NavMap::FiveDim::Face* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + APAHPCEMFND___C__DISPLAYCLASS34_0__GETFACEBYSURFACEID_B__0_OFFSET))(this, a1);
		}

	};

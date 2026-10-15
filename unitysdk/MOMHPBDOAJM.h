#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MOMHPBDOAJM;
namespace System { class String; }

#define MOMHPBDOAJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DC9F0)
#define MOMHPBDOAJM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1DC790)

	class MOMHPBDOAJM : public ::System::Object
	{
	public:
		::System::String* FIFINLKGEAC; // 0x10
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::System::UInt32 HBEDCNGOIMI; // 0x28
		::System::UInt32 LBJFALJAINI; // 0x2C
		::System::UInt32 IECMJPALEOA; // 0x30
		::System::UInt32 OPFOHDKJNJI; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMHPBDOAJM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MOMHPBDOAJM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MOMHPBDOAJM*))((::PBYTE)hIl2Cpp + MOMHPBDOAJM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define DJBLCIHABKP_CTOR_OFFSET UNITYSDK_OFFSET(0xF22C350)
#define DJBLCIHABKP_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0xF22C360)
#define DJBLCIHABKP_MEIFDMDGNKE_OFFSET UNITYSDK_OFFSET(0xF22C3E0)
#define DJBLCIHABKP_PDCAJEONFKG_OFFSET UNITYSDK_OFFSET(0xF22C3A0)

	class DJBLCIHABKP : public ::System::Object
	{
	public:
		::System::Action* MBOEDFCNCJF; // 0x10
		::System::UInt32 BOCOKNFLKID; // 0x18
		::System::Int32 CDOFNKOEHCM; // 0x1C
		::System::Void _ctor(::System::Action* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + DJBLCIHABKP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 HNPOGLCAHPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBLCIHABKP_HNPOGLCAHPK_OFFSET))(this);
		}

		::System::Int32 PDCAJEONFKG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBLCIHABKP_PDCAJEONFKG_OFFSET))(this);
		}

		::System::Void MEIFDMDGNKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBLCIHABKP_MEIFDMDGNKE_OFFSET))(this);
		}

	};

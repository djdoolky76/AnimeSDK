#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLMIKHOHFB;
namespace RPG::Client { class ActivityModule; }

#define IGLMIKHOHFB_BJLJOOLDJII_OFFSET UNITYSDK_OFFSET(0x164107D0)
#define IGLMIKHOHFB_CTOR_OFFSET UNITYSDK_OFFSET(0x16410780)
#define IGLMIKHOHFB_JDGOKNKFKHI_OFFSET UNITYSDK_OFFSET(0x164108B0)

	class IGLMIKHOHFB : public ::System::Object
	{
	public:
		::RPG::Client::ActivityModule* DHPKGNANJED; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*))((::PBYTE)hIl2Cpp + IGLMIKHOHFB_CTOR_OFFSET))(this, a1);
		}

		static ::IGLMIKHOHFB* BJLJOOLDJII(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2)
		{
			return ((::IGLMIKHOHFB*(*)(::RPG::Client::ActivityModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + IGLMIKHOHFB_BJLJOOLDJII_OFFSET))(a1, a2);
		}

		static ::IGLMIKHOHFB* JDGOKNKFKHI(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::IGLMIKHOHFB*(*)(::RPG::Client::ActivityModule*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGLMIKHOHFB_JDGOKNKFKHI_OFFSET))(a1, a2, a3);
		}

	};

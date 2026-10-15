#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLMIKHOHFB;
namespace RPG::Client { class ActivityModule; }

#define LKFAPBHAHCK_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xB732FD0)
#define LKFAPBHAHCK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB732F80)
#define LKFAPBHAHCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB732F30)

	class LKFAPBHAHCK : public ::System::Object
	{
	public:
		::RPG::Client::ActivityModule* DHPKGNANJED; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*))((::PBYTE)hIl2Cpp + LKFAPBHAHCK_CTOR_OFFSET))(this, a1);
		}

		::IGLMIKHOHFB* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::IGLMIKHOHFB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKFAPBHAHCK_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::IGLMIKHOHFB* BPLPBPMEODA_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::IGLMIKHOHFB*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LKFAPBHAHCK_BPLPBPMEODA_1_OFFSET))(this, a1, a2);
		}

	};

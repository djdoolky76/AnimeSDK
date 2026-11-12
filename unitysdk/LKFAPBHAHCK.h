#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLMIKHOHFB;
namespace RPG::Client { class ActivityModule; }

#define LKFAPBHAHCK_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xBFD0170)
#define LKFAPBHAHCK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFD0120)
#define LKFAPBHAHCK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD00D0)

inline static constexpr unsigned int LKFAPBHAHCK_TypeDefinitionIndex = 63111;

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

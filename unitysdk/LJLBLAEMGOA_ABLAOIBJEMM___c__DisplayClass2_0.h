#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarVoiceArchiveEntry; }

#define LJLBLAEMGOA_ABLAOIBJEMM___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB71E8B0)
#define LJLBLAEMGOA_ABLAOIBJEMM___C__DISPLAYCLASS2_0___TRYFINDUNLOCKEDVOICEARCHIVEENTRY_B__0_OFFSET UNITYSDK_OFFSET(0xB71E910)

	class LJLBLAEMGOA_ABLAOIBJEMM___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetVoiceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryFindUnlockedVoiceArchiveEntry_b__0(::RPG::Client::AvatarVoiceArchiveEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarVoiceArchiveEntry*))((::PBYTE)hIl2Cpp + LJLBLAEMGOA_ABLAOIBJEMM___C__DISPLAYCLASS2_0___TRYFINDUNLOCKEDVOICEARCHIVEENTRY_B__0_OFFSET))(this, a1);
		}

	};

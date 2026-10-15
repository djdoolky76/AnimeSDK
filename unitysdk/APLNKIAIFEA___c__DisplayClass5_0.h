#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APLNKIAIFEA;
class GIDPDEJAAED;
class MONJFDPKFBA;
namespace RPG::Client::Promises { class IPromise; }

#define APLNKIAIFEA___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB28E0)
#define APLNKIAIFEA___C__DISPLAYCLASS5_0__DIRECTACQUIREPARTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15BB47E0)

	class APLNKIAIFEA___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MONJFDPKFBA* carBeforeDevelop; // 0x10
		::APLNKIAIFEA* __4__this; // 0x18
		::System::UInt32 partID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _DirectAcquirePartAsync_b__0(::GIDPDEJAAED* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GIDPDEJAAED*))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS5_0__DIRECTACQUIREPARTASYNC_B__0_OFFSET))(this, a1);
		}

	};

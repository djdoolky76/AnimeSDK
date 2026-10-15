#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNJGDLKNIEJ;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define NKHLPLJGCII_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBC35100)
#define NKHLPLJGCII_CTOR_OFFSET UNITYSDK_OFFSET(0xBC350A0)
#define NKHLPLJGCII_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xBC350B0)
#define NKHLPLJGCII_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0xBC35390)

	class NKHLPLJGCII : public ::System::Object
	{
	public:
		::BNJGDLKNIEJ* FGHLCBFGPEE; // 0x10
		::System::Void _ctor(::BNJGDLKNIEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNJGDLKNIEJ*))((::PBYTE)hIl2Cpp + NKHLPLJGCII_CTOR_OFFSET))(this, a1);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLPLJGCII_MHFNJCLKNMG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CLJEBKODGHK(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKHLPLJGCII_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NKNNIDKJKOJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLPLJGCII_NKNNIDKJKOJ_OFFSET))(this);
		}

	};

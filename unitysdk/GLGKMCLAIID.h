#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNJGDLKNIEJ;
class MOJFFDOILBN;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define GLGKMCLAIID_BEFBLECJPIN_OFFSET UNITYSDK_OFFSET(0x15AB24A0)
#define GLGKMCLAIID_BOKKJNOEOAM_OFFSET UNITYSDK_OFFSET(0x15AB2AB0)
#define GLGKMCLAIID_CDDAMCHLPCP_OFFSET UNITYSDK_OFFSET(0x15AB2850)
#define GLGKMCLAIID_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x15AB1ED0)
#define GLGKMCLAIID_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB1E70)
#define GLGKMCLAIID_IPCBJBOFAAA_OFFSET UNITYSDK_OFFSET(0x15AB28D0)
#define GLGKMCLAIID_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x15AB1E80)
#define GLGKMCLAIID_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0x15AB2A30)

	class GLGKMCLAIID : public ::System::Object
	{
	public:
		::BNJGDLKNIEJ* FGHLCBFGPEE; // 0x10
		::System::Void _ctor(::BNJGDLKNIEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNJGDLKNIEJ*))((::PBYTE)hIl2Cpp + GLGKMCLAIID_CTOR_OFFSET))(this, a1);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGKMCLAIID_MHFNJCLKNMG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CLJEBKODGHK(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLGKMCLAIID_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* IPCBJBOFAAA(::MOJFFDOILBN* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::MOJFFDOILBN*))((::PBYTE)hIl2Cpp + GLGKMCLAIID_IPCBJBOFAAA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BEFBLECJPIN(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLGKMCLAIID_BEFBLECJPIN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NKNNIDKJKOJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGKMCLAIID_NKNNIDKJKOJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BOKKJNOEOAM(::MOJFFDOILBN* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::MOJFFDOILBN*))((::PBYTE)hIl2Cpp + GLGKMCLAIID_BOKKJNOEOAM_OFFSET))(this, a1);
		}

		::System::Void CDDAMCHLPCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGKMCLAIID_CDDAMCHLPCP_OFFSET))(this);
		}

	};

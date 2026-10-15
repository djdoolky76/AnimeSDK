#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IGroup; }

#define BGOMMMOBAHM_AMENPDLCODD_OFFSET UNITYSDK_OFFSET(0xB46C350)
#define BGOMMMOBAHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB46BEF0)
#define BGOMMMOBAHM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB46CA50)
#define BGOMMMOBAHM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB46C100)
#define BGOMMMOBAHM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB46C900)

	class BGOMMMOBAHM : public ::System::Object
	{
	public:
		::Entitas::ICollector* OOGGEJFJHIF; // 0x10
		::Entitas::IGroup* GGLEFKBINMC; // 0x18
		::Entitas::IGroup* KFBHHFIFHCJ; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::NDDFLGNNMDK* FKINCGODJEP; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_EXECUTE_OFFSET))(this);
		}

		::System::Void AMENPDLCODD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_AMENPDLCODD_OFFSET))(this, a1);
		}

	};

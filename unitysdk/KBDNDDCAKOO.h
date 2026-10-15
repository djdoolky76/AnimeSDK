#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }

#define KBDNDDCAKOO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2F2890)
#define KBDNDDCAKOO_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB2F29C0)
#define KBDNDDCAKOO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB2F28A0)
#define KBDNDDCAKOO_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB2F2970)

	class KBDNDDCAKOO : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Entitas::IGroup* PECJBCGJFDN; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + KBDNDDCAKOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDNDDCAKOO_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDNDDCAKOO_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDNDDCAKOO_EXECUTE_OFFSET))(this);
		}

	};

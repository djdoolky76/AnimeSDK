#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Object; }

#define JEBPFBNCALB_ADD_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C54D8A0)
#define JEBPFBNCALB_CNPCJHEMFFN_OFFSET UNITYSDK_OFFSET(0x1C563C20)
#define JEBPFBNCALB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53DBD0)
#define JEBPFBNCALB_KOKOEGLODJI_OFFSET UNITYSDK_OFFSET(0x1C53E2E0)
#define JEBPFBNCALB_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1C53C3A0)
#define JEBPFBNCALB_REMOVE_ONPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1C54D9A0)

	class JEBPFBNCALB : public ::System::Object
	{
	public:
		::System::Action* OnProgressChanged; // 0x10
		::System::Action* IAIJOOKBBIB; // 0x18
		::R3::ReactiveProperty_1<::System::Boolean>* INJJGMIGFFD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPFBNCALB_CTOR_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* LDKMIKEMHFO()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPFBNCALB_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void add_OnProgressChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JEBPFBNCALB_ADD_ONPROGRESSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnProgressChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JEBPFBNCALB_REMOVE_ONPROGRESSCHANGED_OFFSET))(this, a1);
		}

		::System::Action* CNPCJHEMFFN(::System::Object* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEBPFBNCALB_CNPCJHEMFFN_OFFSET))(this, a1);
		}

		::System::Void KOKOEGLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEBPFBNCALB_KOKOEGLODJI_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define JEOCDNBFEBF_AGIMGKGCLJP_OFFSET UNITYSDK_OFFSET(0x16641DD0)
#define JEOCDNBFEBF_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x16641D20)
#define JEOCDNBFEBF_CTOR_OFFSET UNITYSDK_OFFSET(0x16641E10)
#define JEOCDNBFEBF_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x16641C10)
#define JEOCDNBFEBF_LBBLNALEPMN_OFFSET UNITYSDK_OFFSET(0x16641CD0)

	class JEOCDNBFEBF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void LBBLNALEPMN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_LBBLNALEPMN_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void AGIMGKGCLJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_AGIMGKGCLJP_OFFSET))(this);
		}

	};

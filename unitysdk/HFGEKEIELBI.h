#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIOOKOJCOAA;
namespace System { class Action; }

#define HFGEKEIELBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C793C0)
#define HFGEKEIELBI_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0x15C795C0)
#define HFGEKEIELBI_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x15C79410)

	class HFGEKEIELBI : public ::System::Object
	{
	public:
		::System::Action* EPHKMPOGBBL; // 0x10
		::CIOOKOJCOAA* IJLEOHJJHCM; // 0x18
		::System::Boolean NFOCONIIKIF; // 0x20
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HFGEKEIELBI_CTOR_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFGEKEIELBI_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGEKEIELBI_NECEALBHFAB_OFFSET))(this);
		}

	};

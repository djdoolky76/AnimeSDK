#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIOOKOJCOAA;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define BNLLDDHHANA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDE890)
#define BNLLDDHHANA_EMMICPDMMAN_OFFSET UNITYSDK_OFFSET(0xBDDEB00)
#define BNLLDDHHANA_KHHCILCHKJN_OFFSET UNITYSDK_OFFSET(0xBDDE940)
#define BNLLDDHHANA_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0xBDDEB50)
#define BNLLDDHHANA_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xBDDE8F0)

	class BNLLDDHHANA : public ::System::Object
	{
	public:
		::CIOOKOJCOAA* IJLEOHJJHCM; // 0x10
		::System::Func_1<::System::Boolean>* GBDHHOILHNM; // 0x18
		::System::Action* EPHKMPOGBBL; // 0x20
		::System::Boolean NFOCONIIKIF; // 0x28
		::System::Boolean DHPHCCCHLJF; // 0x29
		::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + BNLLDDHHANA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNLLDDHHANA_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void EMMICPDMMAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLLDDHHANA_EMMICPDMMAN_OFFSET))(this);
		}

		::System::Void KHHCILCHKJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLLDDHHANA_KHHCILCHKJN_OFFSET))(this);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLLDDHHANA_NECEALBHFAB_OFFSET))(this);
		}

	};

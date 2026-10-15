#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DABGOCJPFBI.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Threading/SpinLock.h"
class EPFAOLJKOOK;
class OCOAGBCDNBC;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define ILCOCKHBCEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9A1F0)
#define ILCOCKHBCEN_EJACOFEBELP_OFFSET UNITYSDK_OFFSET(0x1DDADE30)
#define ILCOCKHBCEN_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x1DDA95A0)
#define ILCOCKHBCEN_GNPPNBHLKLC_OFFSET UNITYSDK_OFFSET(0x1DDA9A60)
#define ILCOCKHBCEN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1DDA9A50)
#define ILCOCKHBCEN_LJMMANJODLN_OFFSET UNITYSDK_OFFSET(0x1DDADF70)
#define ILCOCKHBCEN_MLGCPAHPBMP_OFFSET UNITYSDK_OFFSET(0x1DDADE40)
#define ILCOCKHBCEN___COMPAREBYPING_B__12_0_OFFSET UNITYSDK_OFFSET(0x1DDAE110)

	class ILCOCKHBCEN : public ::DABGOCJPFBI
	{
	public:
		::System::Threading::SpinLock LOBJOHFGICK; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 FIIKBKANNEB; // 0x18
		::System::Boolean PBBHGMLMBJL; // 0x20
		::System::Boolean EGGNNPNDIDD; // 0x21
		::System::Byte _padding1[0x2];
		::RPG::Client::IPVersion GNOEGILFEMD; // 0x24
		::System::UInt64 NNCJKDCPOPL; // 0x28
		::System::Void _ctor(::OCOAGBCDNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOAGBCDNBC*))((::PBYTE)hIl2Cpp + ILCOCKHBCEN_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean EJACOFEBELP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOCKHBCEN_EJACOFEBELP_OFFSET))(this);
		}

		::System::Void FHLALJENMHB(::EPFAOLJKOOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFAOLJKOOK*))((::PBYTE)hIl2Cpp + ILCOCKHBCEN_FHLALJENMHB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCOCKHBCEN_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Boolean GNPPNBHLKLC(::RPG::Client::IPVersion a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + ILCOCKHBCEN_GNPPNBHLKLC_OFFSET))(this, a1);
		}

		::System::Void LJMMANJODLN(::System::Net::IPEndPoint* a1, ::System::Net::IPEndPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + ILCOCKHBCEN_LJMMANJODLN_OFFSET))(this, a1, a2);
		}

		::System::Void MLGCPAHPBMP(::RPG::Client::IPVersion a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + ILCOCKHBCEN_MLGCPAHPBMP_OFFSET))(this, a1);
		}

		::System::Void __CompareByPing_b__12_0(::System::Collections::Generic::IList_1<::System::UInt64>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + ILCOCKHBCEN___COMPAREBYPING_B__12_0_OFFSET))(this, a1);
		}

	};

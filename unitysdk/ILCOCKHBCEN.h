#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DABGOCJPFBI.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Threading/SpinLock.h"
class EPFAOLJKOOK;
class OCOAGBCDNBC;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define ILCOCKHBCEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9CA90)
#define ILCOCKHBCEN_EJACOFEBELP_OFFSET UNITYSDK_OFFSET(0x1EFB0700)
#define ILCOCKHBCEN_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x1EFAC020)
#define ILCOCKHBCEN_GNPPNBHLKLC_OFFSET UNITYSDK_OFFSET(0x1EFAC510)
#define ILCOCKHBCEN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1EFAC500)
#define ILCOCKHBCEN_LJMMANJODLN_OFFSET UNITYSDK_OFFSET(0x1EFB0840)
#define ILCOCKHBCEN_MLGCPAHPBMP_OFFSET UNITYSDK_OFFSET(0x1EFB0710)
#define ILCOCKHBCEN___COMPAREBYPING_B__12_0_OFFSET UNITYSDK_OFFSET(0x1EFB09E0)

inline static constexpr unsigned int ILCOCKHBCEN_TypeDefinitionIndex = 45010;

	class ILCOCKHBCEN : public ::DABGOCJPFBI
	{
	public:
		::System::UInt64 NNCJKDCPOPL; // 0x10
		::System::Threading::SpinLock LOBJOHFGICK; // 0x18
		::RPG::Client::IPVersion GNOEGILFEMD; // 0x1C
		::System::Boolean EGGNNPNDIDD; // 0x20
		::System::Boolean PBBHGMLMBJL; // 0x21
		::System::Byte _padding0[0x6];
		::System::UInt64 FIIKBKANNEB; // 0x28
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

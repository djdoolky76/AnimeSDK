#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class BJDOCGAJBOK;
class GNNAEMBFINJ;
class HCOGFOGPKHI;
class HMFFHLKHOMJ;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }

#define OPPNAOHPNGO_AKNBPNDKNDB_OFFSET UNITYSDK_OFFSET(0xBFAF150)
#define OPPNAOHPNGO_APFIJHBLLBD_OFFSET UNITYSDK_OFFSET(0xBFAEB70)
#define OPPNAOHPNGO_BNHLOEBOEII_OFFSET UNITYSDK_OFFSET(0xBFAF040)
#define OPPNAOHPNGO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFAE930)
#define OPPNAOHPNGO_IKJHJCPCJAO_OFFSET UNITYSDK_OFFSET(0xBFAE990)
#define OPPNAOHPNGO_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0xBFAEA80)
#define OPPNAOHPNGO_MHDDKHBMIPC_OFFSET UNITYSDK_OFFSET(0xBFAEE00)
#define OPPNAOHPNGO_MKEAFHKEKND_OFFSET UNITYSDK_OFFSET(0xBFAF0C0)
#define OPPNAOHPNGO_START_OFFSET UNITYSDK_OFFSET(0xBFAE940)
#define OPPNAOHPNGO_STOP_OFFSET UNITYSDK_OFFSET(0xBFAEB20)
#define OPPNAOHPNGO__SENDTEAMTOWERSGETDATACSREQ_B__3_0_OFFSET UNITYSDK_OFFSET(0xBFAF1B0)

inline static constexpr unsigned int OPPNAOHPNGO_TypeDefinitionIndex = 79046;

	class OPPNAOHPNGO : public ::BHPMNMMGLHI
	{
	public:
		::HCOGFOGPKHI* IHPMLDMEHFO; // 0x20
		::BJDOCGAJBOK* GAPPADJGFCG; // 0x28
		::System::Void _ctor(::HCOGFOGPKHI* a1, ::BJDOCGAJBOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HCOGFOGPKHI*, ::BJDOCGAJBOK*))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_STOP_OFFSET))(this);
		}

		::System::Void APFIJHBLLBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_APFIJHBLLBD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::HMFFHLKHOMJ*>* MHDDKHBMIPC(::HMFFHLKHOMJ* a1, ::System::UInt64 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::HMFFHLKHOMJ*>*(*)(::PVOID, ::HMFFHLKHOMJ*, ::System::UInt64))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_MHDDKHBMIPC_OFFSET))(this, a1, a2);
		}

		::System::Void IKJHJCPCJAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_IKJHJCPCJAO_OFFSET))(this);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void BNHLOEBOEII(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_BNHLOEBOEII_OFFSET))(this, a1, a2);
		}

		::System::Void MKEAFHKEKND(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_MKEAFHKEKND_OFFSET))(this, a1, a2);
		}

		::System::Void AKNBPNDKNDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPPNAOHPNGO_AKNBPNDKNDB_OFFSET))(this, a1);
		}

		::System::Void _SendTeamTowersGetDataCsReq_b__3_0(::GNNAEMBFINJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNNAEMBFINJ*))((::PBYTE)hIl2Cpp + OPPNAOHPNGO__SENDTEAMTOWERSGETDATACSREQ_B__3_0_OFFSET))(this, a1);
		}

	};

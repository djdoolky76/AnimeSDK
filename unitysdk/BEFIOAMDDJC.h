#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Network/SessionType.h"
#include "unitysdk/System/Object.h"
class BEFIOAMDDJC;
class DBINPFBDKFL;
class EKDDFNJAICK;
class EPFAOLJKOOK;
class GHIOLFLBBHD;
class HMJHKIEJNLJ;
class OCOAGBCDNBC;
namespace RPG::Client { class NetPacket; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }

#define BEFIOAMDDJC_ACEHMFNFEKE_OFFSET UNITYSDK_OFFSET(0x20323700)
#define BEFIOAMDDJC_ADBDBMMKMBM_OFFSET UNITYSDK_OFFSET(0x203236A0)
#define BEFIOAMDDJC_BPJGGDPHFGB_OFFSET UNITYSDK_OFFSET(0x20323710)
#define BEFIOAMDDJC_CEDAAEGOJFC_OFFSET UNITYSDK_OFFSET(0x203236E0)
#define BEFIOAMDDJC_CTOR_OFFSET UNITYSDK_OFFSET(0x20322260)
#define BEFIOAMDDJC_DCCJCJIBLJK_OFFSET UNITYSDK_OFFSET(0x20322AA0)
#define BEFIOAMDDJC_DCHMNBFDAKG_OFFSET UNITYSDK_OFFSET(0x203237F0)
#define BEFIOAMDDJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20322530)
#define BEFIOAMDDJC_DKINDDJHIMJ_OFFSET UNITYSDK_OFFSET(0x203225F0)
#define BEFIOAMDDJC_EFGIKDOOPKN_OFFSET UNITYSDK_OFFSET(0x20322540)
#define BEFIOAMDDJC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x20323800)
#define BEFIOAMDDJC_GET_ISAUTHORIZED_OFFSET UNITYSDK_OFFSET(0x203237C0)
#define BEFIOAMDDJC_HAMKHGHELML_OFFSET UNITYSDK_OFFSET(0x20322F40)
#define BEFIOAMDDJC_HBEGBOCMPOD_OFFSET UNITYSDK_OFFSET(0x20322C10)
#define BEFIOAMDDJC_HCIFKALBGKD_OFFSET UNITYSDK_OFFSET(0x20322C20)
#define BEFIOAMDDJC_HEMMJKEJKMG_OFFSET UNITYSDK_OFFSET(0x20322660)
#define BEFIOAMDDJC_HIMFJLKJOIL_OFFSET UNITYSDK_OFFSET(0x203237E0)
#define BEFIOAMDDJC_HMEECDEMLEN_OFFSET UNITYSDK_OFFSET(0x203236D0)
#define BEFIOAMDDJC_IAJCIGAEOIM_OFFSET UNITYSDK_OFFSET(0x20322C00)
#define BEFIOAMDDJC_IDOCGNIBDFE_OFFSET UNITYSDK_OFFSET(0x20322740)
#define BEFIOAMDDJC_IMFIDIOBMEG_OFFSET UNITYSDK_OFFSET(0x20322BF0)
#define BEFIOAMDDJC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x20322A50)
#define BEFIOAMDDJC_MHMDFOCAAEE_OFFSET UNITYSDK_OFFSET(0x20323010)
#define BEFIOAMDDJC_NMPGPHOKIEF_OFFSET UNITYSDK_OFFSET(0x20322C30)
#define BEFIOAMDDJC_PBHDAKMOMGK_OFFSET UNITYSDK_OFFSET(0x203236F0)
#define BEFIOAMDDJC_PBIDIHFGDIP_OFFSET UNITYSDK_OFFSET(0x203226D0)
#define BEFIOAMDDJC_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x20322B90)
#define BEFIOAMDDJC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x20323810)
#define BEFIOAMDDJC_SET_ISAUTHORIZED_OFFSET UNITYSDK_OFFSET(0x203237D0)

inline static constexpr unsigned int BEFIOAMDDJC_TypeDefinitionIndex = 45042;

	class BEFIOAMDDJC : public ::System::Object
	{
	public:
		::HMJHKIEJNLJ* KJEGMAJLMFK; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::NetPacket*>* HMPJBIPAKOC; // 0x18
		::System::Net::Sockets::Socket* OBMIANHIHHE; // 0x20
		::Il2CppArray<::System::Net::IPAddress*>* JNJGPBECJNL; // 0x28
		::EKDDFNJAICK* BOEIOEPNMNN; // 0x30
		::System::Net::EndPoint* ONHPMBOENFI; // 0x38
		::DBINPFBDKFL* _Config_k__BackingField; // 0x40
		::GHIOLFLBBHD* CNLENONFGAO; // 0x48
		::System::Net::IPAddress* PDINANNJIEO; // 0x50
		::System::String* AFMHMMDDILG; // 0x58
		::RPG::Common::StateMachine_1<::BEFIOAMDDJC*>* CBIGPGKJAEI; // 0x60
		::System::Int32 MLPJDJMKMMA; // 0x68
		::System::Boolean _IsAuthorized_k__BackingField; // 0x6C
		::System::Byte _padding0[0x3];
		::System::Int32 LHAAPHBOCHL; // 0x70
		// static const ::System::Object EMCBKDAGHDH; // 0x0
		::System::Void _ctor(::OCOAGBCDNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOAGBCDNBC*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_DISPOSE_OFFSET))(this);
		}

		::System::Void EFGIKDOOPKN(::EPFAOLJKOOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFAOLJKOOK*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_EFGIKDOOPKN_OFFSET))(this, a1);
		}

		::System::Void DKINDDJHIMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_DKINDDJHIMJ_OFFSET))(this);
		}

		::System::Void HEMMJKEJKMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HEMMJKEJKMG_OFFSET))(this);
		}

		::System::Void PBIDIHFGDIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_PBIDIHFGDIP_OFFSET))(this);
		}

		::System::Void IDOCGNIBDFE(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_IDOCGNIBDFE_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_JLANKNHFKCN_OFFSET))(this);
		}

		::RPG::Client::NetPacket* DCCJCJIBLJK()
		{
			return ((::RPG::Client::NetPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_DCCJCJIBLJK_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Void IMFIDIOBMEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_IMFIDIOBMEG_OFFSET))(this);
		}

		::System::Single IAJCIGAEOIM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_IAJCIGAEOIM_OFFSET))(this);
		}

		::System::Single HBEGBOCMPOD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HBEGBOCMPOD_OFFSET))(this);
		}

		::System::Boolean HCIFKALBGKD(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HCIFKALBGKD_OFFSET))(this, a1);
		}

		::System::Boolean NMPGPHOKIEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_NMPGPHOKIEF_OFFSET))(this);
		}

		::System::Void HAMKHGHELML(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HAMKHGHELML_OFFSET))(this, a1);
		}

		::System::Boolean MHMDFOCAAEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_MHMDFOCAAEE_OFFSET))(this);
		}

		::System::Void ADBDBMMKMBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_ADBDBMMKMBM_OFFSET))(this);
		}

		::System::String* HMEECDEMLEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HMEECDEMLEN_OFFSET))(this);
		}

		::System::Net::IPAddress* CEDAAEGOJFC()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_CEDAAEGOJFC_OFFSET))(this);
		}

		::System::Int32 PBHDAKMOMGK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_PBHDAKMOMGK_OFFSET))(this);
		}

		::System::Net::EndPoint* ACEHMFNFEKE()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_ACEHMFNFEKE_OFFSET))(this);
		}

		::System::Boolean BPJGGDPHFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_BPJGGDPHFGB_OFFSET))(this);
		}

		::System::Boolean get_IsAuthorized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_GET_ISAUTHORIZED_OFFSET))(this);
		}

		::System::Void set_IsAuthorized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_SET_ISAUTHORIZED_OFFSET))(this, a1);
		}

		::RPG::Network::SessionType HIMFJLKJOIL()
		{
			return ((::RPG::Network::SessionType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_HIMFJLKJOIL_OFFSET))(this);
		}

		::GHIOLFLBBHD* DCHMNBFDAKG()
		{
			return ((::GHIOLFLBBHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_DCHMNBFDAKG_OFFSET))(this);
		}

		::DBINPFBDKFL* get_Config()
		{
			return ((::DBINPFBDKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::DBINPFBDKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBINPFBDKFL*))((::PBYTE)hIl2Cpp + BEFIOAMDDJC_SET_CONFIG_OFFSET))(this, a1);
		}

	};

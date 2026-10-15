#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/RPG/Network/SessionType.h"
#include "unitysdk/System/Threading/SpinLock.h"
#include "unitysdk/System/Object.h"
class BLIPALAJNDD;
class DIBNPCGEPAC;
class EKDDFNJAICK;
class EPFAOLJKOOK;
class GHIOLFLBBHD;
class HMJHKIEJNLJ;
class NNDJMNPMFKK;
class OCOAGBCDNBC;
class OKABMLHDIPO;
namespace RPG::Client { class NetPacket; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class EndPoint; }

#define DIBNPCGEPAC_ACEHMFNFEKE_OFFSET UNITYSDK_OFFSET(0x1DDA85C0)
#define DIBNPCGEPAC_AGEIBEDKHMN_OFFSET UNITYSDK_OFFSET(0x1DDA4CF0)
#define DIBNPCGEPAC_BNGCHNOOJIK_OFFSET UNITYSDK_OFFSET(0x1DDA4610)
#define DIBNPCGEPAC_BPJGGDPHFGB_OFFSET UNITYSDK_OFFSET(0x1DDA8780)
#define DIBNPCGEPAC_CLACEPNFKPN_OFFSET UNITYSDK_OFFSET(0x1DDA4C40)
#define DIBNPCGEPAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9C7D0)
#define DIBNPCGEPAC_DCCJCJIBLJK_OFFSET UNITYSDK_OFFSET(0x1DDA3CF0)
#define DIBNPCGEPAC_DCHMNBFDAKG_OFFSET UNITYSDK_OFFSET(0x1DDA8870)
#define DIBNPCGEPAC_DCMLFADPKMA_OFFSET UNITYSDK_OFFSET(0x1DDA6B70)
#define DIBNPCGEPAC_DHLNEHKABMB_OFFSET UNITYSDK_OFFSET(0x1DDA83C0)
#define DIBNPCGEPAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DDA2FF0)
#define DIBNPCGEPAC_DKINDDJHIMJ_OFFSET UNITYSDK_OFFSET(0x1DDA30F0)
#define DIBNPCGEPAC_EFGIKDOOPKN_OFFSET UNITYSDK_OFFSET(0x1DDA3000)
#define DIBNPCGEPAC_FBLPDNHOFFM_OFFSET UNITYSDK_OFFSET(0x1DDA8260)
#define DIBNPCGEPAC_GET_ACKNODELAY_OFFSET UNITYSDK_OFFSET(0x1DDA8840)
#define DIBNPCGEPAC_GET_ISAUTHORIZED_OFFSET UNITYSDK_OFFSET(0x1DDA8800)
#define DIBNPCGEPAC_GET_WRITEDELAY_OFFSET UNITYSDK_OFFSET(0x1DDA8820)
#define DIBNPCGEPAC_GKOEFODJAIG_OFFSET UNITYSDK_OFFSET(0x1DDA3B80)
#define DIBNPCGEPAC_GNHIBHPADPF_OFFSET UNITYSDK_OFFSET(0x1DDA5F20)
#define DIBNPCGEPAC_GPLBNBJEKJO_OFFSET UNITYSDK_OFFSET(0x1DDA5A20)
#define DIBNPCGEPAC_HAMKHGHELML_OFFSET UNITYSDK_OFFSET(0x1DDA6FF0)
#define DIBNPCGEPAC_HBEGBOCMPOD_OFFSET UNITYSDK_OFFSET(0x1DDA3F30)
#define DIBNPCGEPAC_HCIFKALBGKD_OFFSET UNITYSDK_OFFSET(0x1DDA48C0)
#define DIBNPCGEPAC_HEMMJKEJKMG_OFFSET UNITYSDK_OFFSET(0x1DDA3180)
#define DIBNPCGEPAC_HIMFJLKJOIL_OFFSET UNITYSDK_OFFSET(0x1DDA8860)
#define DIBNPCGEPAC_HMEECDEMLEN_OFFSET UNITYSDK_OFFSET(0x1DDA83E0)
#define DIBNPCGEPAC_IAJCIGAEOIM_OFFSET UNITYSDK_OFFSET(0x1DDA3DE0)
#define DIBNPCGEPAC_IDOCGNIBDFE_OFFSET UNITYSDK_OFFSET(0x1DDA33A0)
#define DIBNPCGEPAC_IMFIDIOBMEG_OFFSET UNITYSDK_OFFSET(0x1DDA3390)
#define DIBNPCGEPAC_JGHCAIFLLLK_OFFSET UNITYSDK_OFFSET(0x1DDA4780)
#define DIBNPCGEPAC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1DDA39F0)
#define DIBNPCGEPAC_KEAFKKMLOKE_OFFSET UNITYSDK_OFFSET(0x1DDA4080)
#define DIBNPCGEPAC_KNGFOEOHELO_OFFSET UNITYSDK_OFFSET(0x1DDA6690)
#define DIBNPCGEPAC_LKGICKLABCM_OFFSET UNITYSDK_OFFSET(0x1DDA60A0)
#define DIBNPCGEPAC_MHMDFOCAAEE_OFFSET UNITYSDK_OFFSET(0x1DDA68A0)
#define DIBNPCGEPAC_MKENBBIPFCJ_OFFSET UNITYSDK_OFFSET(0x1DDA5E80)
#define DIBNPCGEPAC_MLHFBCFJHPD_OFFSET UNITYSDK_OFFSET(0x1DDA53C0)
#define DIBNPCGEPAC_NGPJFAIHIEN_OFFSET UNITYSDK_OFFSET(0x1DDA4960)
#define DIBNPCGEPAC_OBBBEPLIGKM_OFFSET UNITYSDK_OFFSET(0x1DDA83A0)
#define DIBNPCGEPAC_OLMHNPNMACN_OFFSET UNITYSDK_OFFSET(0x1DDA5E90)
#define DIBNPCGEPAC_PBHDAKMOMGK_OFFSET UNITYSDK_OFFSET(0x1DDA85A0)
#define DIBNPCGEPAC_PBIDIHFGDIP_OFFSET UNITYSDK_OFFSET(0x1DDA3260)
#define DIBNPCGEPAC_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1DDA31F0)
#define DIBNPCGEPAC_PMOOKMNIAGE_OFFSET UNITYSDK_OFFSET(0x1DDA4AA0)
#define DIBNPCGEPAC_SET_ACKNODELAY_OFFSET UNITYSDK_OFFSET(0x1DDA8850)
#define DIBNPCGEPAC_SET_ISAUTHORIZED_OFFSET UNITYSDK_OFFSET(0x1DDA8810)
#define DIBNPCGEPAC_SET_WRITEDELAY_OFFSET UNITYSDK_OFFSET(0x1DDA8830)

	class DIBNPCGEPAC : public ::System::Object
	{
	public:
		::NNDJMNPMFKK* LAEACILONGL; // 0x10
		::OKABMLHDIPO* HOANJIJLJOK; // 0x18
		::EPFAOLJKOOK* GHICJEKCDLO; // 0x20
		::System::String* FLDHBDLGLPJ; // 0x28
		::HMJHKIEJNLJ* KJEGMAJLMFK; // 0x30
		::EKDDFNJAICK* BOEIOEPNMNN; // 0x38
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Object*>* GCEFPMAFDMM; // 0x40
		::RPG::Common::StateMachine_1<::DIBNPCGEPAC*>* CBIGPGKJAEI; // 0x48
		::OCOAGBCDNBC* IGHAHBNLIJA; // 0x50
		::System::IO::MemoryStream* JFPIPKLOOIG; // 0x58
		::GHIOLFLBBHD* CNLENONFGAO; // 0x60
		::System::Collections::Generic::Queue_1<::RPG::Client::NetPacket*>* HMPJBIPAKOC; // 0x68
		::BLIPALAJNDD* KCMNJNHMDNM; // 0x70
		::System::Int32 LBPELHJDNKJ; // 0x78
		::System::UInt32 NHFABNOGPKB; // 0x7C
		::System::Threading::SpinLock LOBJOHFGICK; // 0x80
		::System::UInt32 JGIIPDBLBJI; // 0x84
		::System::UInt32 EAIFCONPFLP; // 0x88
		::System::Single GBPPPBFJGPH; // 0x8C
		::RPG::Client::IPVersion OMEKMMPKHIA; // 0x90
		::System::Boolean _WriteDelay_k__BackingField; // 0x94
		::System::Boolean _AckNoDelay_k__BackingField; // 0x95
		::System::Boolean _IsAuthorized_k__BackingField; // 0x96
		::System::Byte _padding0[0x1];
		::System::Int32 MJMNIKLBOPB; // 0x98
		::System::Single EKBOHPCDLGB; // 0x9C
		// static const ::System::Object NMFKGBKKKEI; // 0x0
		// static const ::System::Object PGBLMHLMBGO; // 0x0
		// static const ::System::Object AHNBFKMMDON; // 0x0
		// static const ::System::Object GIDCNNFDLBJ; // 0x0
		// static const ::System::Object LAMGAHEGGDN; // 0x0
		// static const ::System::Object OOENLBAAFAG; // 0x0
		// static const ::System::Object FBGFGCOEKII; // 0x0
		// static const ::System::Object JHNAFHNMCJD; // 0x0
		// static const ::System::Object MAPFFGIKPJD; // 0x0
		::System::Void _ctor(::OCOAGBCDNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOAGBCDNBC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DISPOSE_OFFSET))(this);
		}

		::System::Void EFGIKDOOPKN(::EPFAOLJKOOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFAOLJKOOK*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_EFGIKDOOPKN_OFFSET))(this, a1);
		}

		::System::Void DKINDDJHIMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DKINDDJHIMJ_OFFSET))(this);
		}

		::System::Void HEMMJKEJKMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HEMMJKEJKMG_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Void PBIDIHFGDIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_PBIDIHFGDIP_OFFSET))(this);
		}

		::System::Void IMFIDIOBMEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_IMFIDIOBMEG_OFFSET))(this);
		}

		::System::Void IDOCGNIBDFE(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_IDOCGNIBDFE_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_JLANKNHFKCN_OFFSET))(this);
		}

		::RPG::Client::NetPacket* DCCJCJIBLJK()
		{
			return ((::RPG::Client::NetPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DCCJCJIBLJK_OFFSET))(this);
		}

		::System::Single IAJCIGAEOIM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_IAJCIGAEOIM_OFFSET))(this);
		}

		::System::Single HBEGBOCMPOD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HBEGBOCMPOD_OFFSET))(this);
		}

		::System::Void KEAFKKMLOKE(::RPG::Client::IPVersion a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_KEAFKKMLOKE_OFFSET))(this, a1);
		}

		::System::Boolean HCIFKALBGKD(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HCIFKALBGKD_OFFSET))(this, a1);
		}

		::System::Void NGPJFAIHIEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_NGPJFAIHIEN_OFFSET))(this);
		}

		::System::Void PMOOKMNIAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_PMOOKMNIAGE_OFFSET))(this);
		}

		::System::Void CLACEPNFKPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_CLACEPNFKPN_OFFSET))(this);
		}

		::System::Void AGEIBEDKHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_AGEIBEDKHMN_OFFSET))(this);
		}

		::System::Boolean MLHFBCFJHPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_MLHFBCFJHPD_OFFSET))(this);
		}

		::System::Void GPLBNBJEKJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_GPLBNBJEKJO_OFFSET))(this);
		}

		::System::Void GKOEFODJAIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_GKOEFODJAIG_OFFSET))(this);
		}

		::System::Boolean MKENBBIPFCJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_MKENBBIPFCJ_OFFSET))(this);
		}

		::System::Void OLMHNPNMACN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_OLMHNPNMACN_OFFSET))(this);
		}

		::System::Void GNHIBHPADPF(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_GNHIBHPADPF_OFFSET))(this, a1, a2);
		}

		::System::Void LKGICKLABCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_LKGICKLABCM_OFFSET))(this);
		}

		::System::Boolean KNGFOEOHELO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_KNGFOEOHELO_OFFSET))(this);
		}

		::System::Boolean MHMDFOCAAEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_MHMDFOCAAEE_OFFSET))(this);
		}

		::System::Int32 DCMLFADPKMA(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DCMLFADPKMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HAMKHGHELML(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HAMKHGHELML_OFFSET))(this, a1);
		}

		::System::Void FBLPDNHOFFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_FBLPDNHOFFM_OFFSET))(this);
		}

		::System::UInt32 OBBBEPLIGKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_OBBBEPLIGKM_OFFSET))(this);
		}

		::System::Single DHLNEHKABMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DHLNEHKABMB_OFFSET))(this);
		}

		::System::String* HMEECDEMLEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HMEECDEMLEN_OFFSET))(this);
		}

		::System::Int32 PBHDAKMOMGK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_PBHDAKMOMGK_OFFSET))(this);
		}

		::System::Net::EndPoint* ACEHMFNFEKE()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_ACEHMFNFEKE_OFFSET))(this);
		}

		::System::Boolean BPJGGDPHFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_BPJGGDPHFGB_OFFSET))(this);
		}

		::System::Boolean get_IsAuthorized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_GET_ISAUTHORIZED_OFFSET))(this);
		}

		::System::Void set_IsAuthorized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_SET_ISAUTHORIZED_OFFSET))(this, a1);
		}

		::System::Boolean get_WriteDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_GET_WRITEDELAY_OFFSET))(this);
		}

		::System::Void set_WriteDelay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_SET_WRITEDELAY_OFFSET))(this, a1);
		}

		::System::Boolean get_AckNoDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_GET_ACKNODELAY_OFFSET))(this);
		}

		::System::Void set_AckNoDelay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_SET_ACKNODELAY_OFFSET))(this, a1);
		}

		::RPG::Network::SessionType HIMFJLKJOIL()
		{
			return ((::RPG::Network::SessionType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HIMFJLKJOIL_OFFSET))(this);
		}

		::GHIOLFLBBHD* DCHMNBFDAKG()
		{
			return ((::GHIOLFLBBHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DCHMNBFDAKG_OFFSET))(this);
		}

		::RPG::Client::IPVersion BNGCHNOOJIK()
		{
			return ((::RPG::Client::IPVersion(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_BNGCHNOOJIK_OFFSET))(this);
		}

		::System::Void JGHCAIFLLLK(::RPG::Client::IPVersion a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_JGHCAIFLLLK_OFFSET))(this, a1);
		}

	};

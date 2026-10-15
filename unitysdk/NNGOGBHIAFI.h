#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNLAHMAND.h"
#include "unitysdk/ECAOILCPKLA.h"
#include "unitysdk/LIAIOEBDNEE.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameNetMode.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/MFCDFGIAEAP.h"
class BIHHJPHJELO;
class GHADLBDBHNA;
class IDBBMOMLPOJ;
class JJGKFBDCPFB;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NNGOGBHIAFI_AMHAHFHBLMN_OFFSET UNITYSDK_OFFSET(0x1C79DFC0)
#define NNGOGBHIAFI_BANPECPLFKI_OFFSET UNITYSDK_OFFSET(0x1C79E240)
#define NNGOGBHIAFI_BBMMINIIILK_OFFSET UNITYSDK_OFFSET(0x1C79DF10)
#define NNGOGBHIAFI_BLKAIHPEODN_OFFSET UNITYSDK_OFFSET(0x1C79D860)
#define NNGOGBHIAFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C79E480)
#define NNGOGBHIAFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ADAF0)
#define NNGOGBHIAFI_EJAHEDDMHCF_OFFSET UNITYSDK_OFFSET(0x1C79D050)
#define NNGOGBHIAFI_EPNDAOIGIOM_OFFSET UNITYSDK_OFFSET(0x1C79D540)
#define NNGOGBHIAFI_FADKKKKFJCB_OFFSET UNITYSDK_OFFSET(0x1C79D920)
#define NNGOGBHIAFI_FDLGBOENEOH_OFFSET UNITYSDK_OFFSET(0x1C79D790)
#define NNGOGBHIAFI_FHMPLBNGBJB_OFFSET UNITYSDK_OFFSET(0x1C79D600)
#define NNGOGBHIAFI_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1C79D3E0)
#define NNGOGBHIAFI_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1C79D820)
#define NNGOGBHIAFI_GET_LOGICDELTATIMEMS_OFFSET UNITYSDK_OFFSET(0x1C79D850)
#define NNGOGBHIAFI_GET_NETMODE_OFFSET UNITYSDK_OFFSET(0x1C79D800)
#define NNGOGBHIAFI_HAKFAECLAII_OFFSET UNITYSDK_OFFSET(0x1C79D530)
#define NNGOGBHIAFI_HCIJFDEJABF_OFFSET UNITYSDK_OFFSET(0x1C79D5A0)
#define NNGOGBHIAFI_HEMCGEAIHMF_OFFSET UNITYSDK_OFFSET(0x1C79D930)
#define NNGOGBHIAFI_HFBLGAJEFIL_OFFSET UNITYSDK_OFFSET(0x1C79D660)
#define NNGOGBHIAFI_HKOHFOOOAMF_OFFSET UNITYSDK_OFFSET(0x1C79D840)
#define NNGOGBHIAFI_IPKDBPIDHEC_OFFSET UNITYSDK_OFFSET(0x1C79DC30)
#define NNGOGBHIAFI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C79D380)
#define NNGOGBHIAFI_JMOPKECLJAM_OFFSET UNITYSDK_OFFSET(0x1C79E140)
#define NNGOGBHIAFI_KJGMAKPDHOH_OFFSET UNITYSDK_OFFSET(0x1C79E3C0)
#define NNGOGBHIAFI_LJODGOFAMEN_OFFSET UNITYSDK_OFFSET(0x1C79E300)
#define NNGOGBHIAFI_MJMJHFMADDM_OFFSET UNITYSDK_OFFSET(0x1C79D940)
#define NNGOGBHIAFI_OAONLKBJEIJ_OFFSET UNITYSDK_OFFSET(0x1C79D950)
#define NNGOGBHIAFI_SET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1C79D830)
#define NNGOGBHIAFI_SET_NETMODE_OFFSET UNITYSDK_OFFSET(0x1C79D810)

	class NNGOGBHIAFI : public ::LIAIOEBDNEE
	{
	public:
		::JJGKFBDCPFB* PFEAFPJKFDF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>* CNEMHKGFPIC; // 0x18
		::BIHHJPHJELO* HMKCAOHPKKP; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* JOACHIJKHCM; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* BLNIEECFPFL; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::IDBBMOMLPOJ*>* JKBDCEFLNBE; // 0x38
		::System::UInt32 ADBHGNPFDBK; // 0x40
		::System::Boolean _IsServer_k__BackingField; // 0x44
		::RPG::Client::LittleGameShare::LittleGameNetMode _NetMode_k__BackingField; // 0x45
		::System::Int32 CLHOAAHEJEG; // 0x48
		::System::UInt32 _LogicDeltaTimeMs_k__BackingField; // 0x4C
		::System::UInt64 DKGFAKFBDDD; // 0x50
		::System::Single MAOMGPCHMDH; // 0x58
		::System::Byte _padding0[0x4];
		::System::UInt64 IKNHCAGCLPI; // 0x60
		static ::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>** StaticGet_FGOEPGEFIBN()
		{
			return (::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>**)UnitySDK::FromName("", "NNGOGBHIAFI")->GetStaticField(0x3480);
		}

		static ::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>** StaticGet_NHBJGKNKPLF()
		{
			return (::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>**)UnitySDK::FromName("", "NNGOGBHIAFI")->GetStaticField(0x3488);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::IDBBMOMLPOJ*>** StaticGet_JDMKICMLHDI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::IDBBMOMLPOJ*>**)UnitySDK::FromName("", "NNGOGBHIAFI")->GetStaticField(0x3490);
		}

		static ::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>** StaticGet_OJIGIHIMCBG()
		{
			return (::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>**)UnitySDK::FromName("", "NNGOGBHIAFI")->GetStaticField(0x3498);
		}

		// static const ::System::Object LKGICPPPOBC; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNGOGBHIAFI_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_CTOR_OFFSET))(this);
		}

		::System::Void EJAHEDDMHCF(::GHADLBDBHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHADLBDBHNA*))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_EJAHEDDMHCF_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_FNACALDOOIF_OFFSET))(this);
		}

		::BIHHJPHJELO* HAKFAECLAII()
		{
			return ((::BIHHJPHJELO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_HAKFAECLAII_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>* EPNDAOIGIOM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_EPNDAOIGIOM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>* HCIJFDEJABF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_HCIJFDEJABF_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>* FHMPLBNGBJB()
		{
			return ((::System::Collections::Generic::Dictionary_2<::BNFNLAHMAND, ::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_FHMPLBNGBJB_OFFSET))(this);
		}

		::System::Void HFBLGAJEFIL(::IDBBMOMLPOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDBBMOMLPOJ*))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_HFBLGAJEFIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Queue_1<::MFCDFGIAEAP>* FDLGBOENEOH()
		{
			return ((::System::Collections::Generic::Queue_1<::MFCDFGIAEAP>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_FDLGBOENEOH_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::LittleGameNetMode get_NetMode()
		{
			return ((::RPG::Client::LittleGameShare::LittleGameNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_GET_NETMODE_OFFSET))(this);
		}

		::System::Void set_NetMode(::RPG::Client::LittleGameShare::LittleGameNetMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameNetMode))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_SET_NETMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_GET_ISSERVER_OFFSET))(this);
		}

		::System::Void set_IsServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_SET_ISSERVER_OFFSET))(this, a1);
		}

		::System::Boolean HKOHFOOOAMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_HKOHFOOOAMF_OFFSET))(this);
		}

		::System::UInt32 get_LogicDeltaTimeMs()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_GET_LOGICDELTATIMEMS_OFFSET))(this);
		}

		::System::Single BLKAIHPEODN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_BLKAIHPEODN_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* FADKKKKFJCB()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_FADKKKKFJCB_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* HEMCGEAIHMF()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_HEMCGEAIHMF_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>* MJMJHFMADDM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_MJMJHFMADDM_OFFSET))(this);
		}

		::System::Void OAONLKBJEIJ(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_OAONLKBJEIJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IPKDBPIDHEC(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_IPKDBPIDHEC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BBMMINIIILK(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_BBMMINIIILK_OFFSET))(this, a1, a2);
		}

		::System::Void AMHAHFHBLMN(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_AMHAHFHBLMN_OFFSET))(this, a1, a2);
		}

		::System::Void JMOPKECLJAM(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_JMOPKECLJAM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BANPECPLFKI(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_BANPECPLFKI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LJODGOFAMEN(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_LJODGOFAMEN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KJGMAKPDHOH(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NNGOGBHIAFI_KJGMAKPDHOH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};

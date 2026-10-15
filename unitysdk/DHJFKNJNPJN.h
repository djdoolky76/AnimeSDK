#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BGNDPIPJFCI;
class HPKACEPPPCA;
class KDIMHNIIPGP;
class KLEFGGIHGMI;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { template <typename T> class LinkedNodeInstancePool_1; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHJFKNJNPJN_AJCEOCGJACL_OFFSET UNITYSDK_OFFSET(0xEBDDF30)
#define DHJFKNJNPJN_BOAFILILNMO_OFFSET UNITYSDK_OFFSET(0xEBDD210)
#define DHJFKNJNPJN_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBDE6A0)
#define DHJFKNJNPJN_CEIMAMLENFI_OFFSET UNITYSDK_OFFSET(0xEBDE290)
#define DHJFKNJNPJN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBDCA20)
#define DHJFKNJNPJN_DMKPACPKHDO_OFFSET UNITYSDK_OFFSET(0xEBDD3F0)
#define DHJFKNJNPJN_FBDNMDJFPHK_OFFSET UNITYSDK_OFFSET(0xEBDD340)
#define DHJFKNJNPJN_FCPHPBJOIHI_OFFSET UNITYSDK_OFFSET(0xEBDE3A0)
#define DHJFKNJNPJN_GNCIPBBNIIH_OFFSET UNITYSDK_OFFSET(0xEBDCCB0)
#define DHJFKNJNPJN_HPHGLBGKJOL_OFFSET UNITYSDK_OFFSET(0xEBDE5B0)
#define DHJFKNJNPJN_IOAIBKLPHAO_OFFSET UNITYSDK_OFFSET(0xEBDE3F0)
#define DHJFKNJNPJN_KHMLPLELDGB_OFFSET UNITYSDK_OFFSET(0xEBDD680)
#define DHJFKNJNPJN_KJFLMDMIJOA_OFFSET UNITYSDK_OFFSET(0xEBDDE00)
#define DHJFKNJNPJN_LEDFAFPFPBN_OFFSET UNITYSDK_OFFSET(0xEBDE350)
#define DHJFKNJNPJN_NLCADFDDBHC_OFFSET UNITYSDK_OFFSET(0xEBDCEA0)
#define DHJFKNJNPJN_NLMILLEOOOI_OFFSET UNITYSDK_OFFSET(0xEBDCB90)
#define DHJFKNJNPJN_NNEEKPGDKMF_OFFSET UNITYSDK_OFFSET(0xEBDCFB0)

inline static constexpr unsigned int DHJFKNJNPJN_TypeDefinitionIndex = 73838;

	class DHJFKNJNPJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedListNode_1<::HPKACEPPPCA*>*>* MKFLEJIFBLL; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::LinkedListNode_1<::HPKACEPPPCA*>*>* KIBMLJBELJB; // 0x18
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* GMBIOLIAPDD; // 0x20
		::System::Collections::Generic::LinkedList_1<::HPKACEPPPCA*>* BAFPJNKHFFB; // 0x28
		::BGNDPIPJFCI* CBLNBBGKEFM; // 0x30
		::KDIMHNIIPGP* OOFIFJJMNJM; // 0x38
		::KLEFGGIHGMI* KDLDKNBOFBN; // 0x40
		::RPG::Client::LinkedNodeInstancePool_1<::HPKACEPPPCA*>* LBHDLGPCFFF; // 0x48
		::System::Int32 KAADDOOHILP; // 0x50
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMKHFGKHPA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DHJFKNJNPJN")->GetStaticField(0x52FD0);
		}

		static ::System::Int32* StaticGet_BHCOGGFLBCP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHJFKNJNPJN")->GetStaticField(0x126D0);
		}

		// static const ::System::Object MHBACHLLFFA; // 0x0
		// static const ::System::Object GKJFFHAABLK; // 0x0
		::System::Void _ctor(::BGNDPIPJFCI* a1, ::KDIMHNIIPGP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*, ::KDIMHNIIPGP*))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHJFKNJNPJN_CCTOR_OFFSET))();
		}

		::System::Boolean NLMILLEOOOI(::HPKACEPPPCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_NLMILLEOOOI_OFFSET))(this, a1);
		}

		::System::Void GNCIPBBNIIH(::HPKACEPPPCA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::System::Int32))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_GNCIPBBNIIH_OFFSET))(this, a1, a2);
		}

		::System::Boolean NNEEKPGDKMF(::HPKACEPPPCA* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_NNEEKPGDKMF_OFFSET))(this, a1, a2);
		}

		::System::Void DMKPACPKHDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_DMKPACPKHDO_OFFSET))(this);
		}

		::System::Void KHMLPLELDGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_KHMLPLELDGB_OFFSET))(this);
		}

		::System::Void AJCEOCGJACL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_AJCEOCGJACL_OFFSET))(this, a1);
		}

		::System::Boolean CEIMAMLENFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_CEIMAMLENFI_OFFSET))(this);
		}

		::System::Void LEDFAFPFPBN(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_LEDFAFPFPBN_OFFSET))(this, a1);
		}

		::System::Void FCPHPBJOIHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_FCPHPBJOIHI_OFFSET))(this);
		}

		::System::Int32 IOAIBKLPHAO(::KLEFGGIHGMI* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KLEFGGIHGMI*, ::System::Int32))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_IOAIBKLPHAO_OFFSET))(this, a1, a2);
		}

		::System::Int32 HPHGLBGKJOL(::System::Collections::Generic::LinkedListNode_1<::HPKACEPPPCA*>* a1, ::System::Collections::Generic::LinkedListNode_1<::HPKACEPPPCA*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::HPKACEPPPCA*>*, ::System::Collections::Generic::LinkedListNode_1<::HPKACEPPPCA*>*))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_HPHGLBGKJOL_OFFSET))(this, a1, a2);
		}

		::System::Void NLCADFDDBHC(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_NLCADFDDBHC_OFFSET))(this, a1);
		}

		::System::Void BOAFILILNMO(::System::Collections::Generic::LinkedListNode_1<::HPKACEPPPCA*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::HPKACEPPPCA*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_BOAFILILNMO_OFFSET))(this, a1, a2);
		}

		::System::Void FBDNMDJFPHK(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + DHJFKNJNPJN_FBDNMDJFPHK_OFFSET))(this, a1);
		}

		static ::System::Int32 KJFLMDMIJOA()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DHJFKNJNPJN_KJFLMDMIJOA_OFFSET))();
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDFPIPINHPH_KBLLCNLBMFE;
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDFPIPINHPH_BFDHANFPCCG_OFFSET UNITYSDK_OFFSET(0x165C4B70)
#define JDFPIPINHPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x165C62A0)
#define JDFPIPINHPH_COACGMPNKIL_OFFSET UNITYSDK_OFFSET(0x165C5130)
#define JDFPIPINHPH_CPDNKFIJMJG_OFFSET UNITYSDK_OFFSET(0x165C4920)
#define JDFPIPINHPH_CTOR_OFFSET UNITYSDK_OFFSET(0x165C6100)
#define JDFPIPINHPH_FKPNHGPJIMP_OFFSET UNITYSDK_OFFSET(0x165C4BF0)
#define JDFPIPINHPH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x165C52B0)
#define JDFPIPINHPH_IBIKLOCPIJJ_OFFSET UNITYSDK_OFFSET(0x165C3850)
#define JDFPIPINHPH_IHGMKDFFLCB_OFFSET UNITYSDK_OFFSET(0x165C53F0)
#define JDFPIPINHPH_IJOHGKOFLHP_OFFSET UNITYSDK_OFFSET(0x165C39C0)
#define JDFPIPINHPH_JFGBNIGDDDK_OFFSET UNITYSDK_OFFSET(0x165C4780)
#define JDFPIPINHPH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x165C4D30)
#define JDFPIPINHPH_KGCBOCPEOJJ_OFFSET UNITYSDK_OFFSET(0x165C3580)
#define JDFPIPINHPH_LFABHKPBGPA_OFFSET UNITYSDK_OFFSET(0x165C4100)
#define JDFPIPINHPH_LOCPJJJCCON_OFFSET UNITYSDK_OFFSET(0x165C60C0)
#define JDFPIPINHPH_MNOMDMJFOJL_OFFSET UNITYSDK_OFFSET(0x165C5550)
#define JDFPIPINHPH_OFEBJBHCCKF_OFFSET UNITYSDK_OFFSET(0x165C50E0)
#define JDFPIPINHPH_OHOJBCNAMON_OFFSET UNITYSDK_OFFSET(0x165C5BE0)
#define JDFPIPINHPH_OKFAFKLGBPH_OFFSET UNITYSDK_OFFSET(0x165C5260)
#define JDFPIPINHPH_PAECHCOJKAF_OFFSET UNITYSDK_OFFSET(0x165C4AD0)

inline static constexpr unsigned int JDFPIPINHPH_TypeDefinitionIndex = 72795;

	class JDFPIPINHPH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* KFJMBALJCNA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Object*>* EMPAEGPEMDD; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* LHKGBBFENBK; // 0x20
		::JDFPIPINHPH_KBLLCNLBMFE* FEEBHNGBFIC; // 0x28
		::System::Collections::Generic::List_1<::System::UInt16>* KCCLAAFCBIC; // 0x30
		::System::UInt32 HFLFKKCMGFM; // 0x38
		::System::Boolean PKAJJPLMGPK; // 0x3C
		::System::Boolean FMMHMAKLEAP; // 0x3D
		static ::System::Single* StaticGet_ADIDGKMDOKJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "JDFPIPINHPH")->GetStaticField(0xC1F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDFPIPINHPH_CCTOR_OFFSET))();
		}

		::System::UInt32 KGCBOCPEOJJ(::System::Single a1, ::System::Single a2, ::System::Action* a3, ::System::Boolean a4, ::System::String* a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KGCBOCPEOJJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LFABHKPBGPA(::System::UInt16 a1, ::RPG::Client::RspHandler* a2, ::System::Action* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*, ::System::Action*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + JDFPIPINHPH_LFABHKPBGPA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void JFGBNIGDDDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDFPIPINHPH_JFGBNIGDDDK_OFFSET))(this, a1);
		}

		::System::Void CPDNKFIJMJG(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + JDFPIPINHPH_CPDNKFIJMJG_OFFSET))(this, a1);
		}

		::System::Void PAECHCOJKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_PAECHCOJKAF_OFFSET))(this);
		}

		::System::Void BFDHANFPCCG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + JDFPIPINHPH_BFDHANFPCCG_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDFPIPINHPH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void OFEBJBHCCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OFEBJBHCCKF_OFFSET))(this);
		}

		::System::Void OKFAFKLGBPH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OKFAFKLGBPH_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::UInt32 IBIKLOCPIJJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_IBIKLOCPIJJ_OFFSET))(this);
		}

		::System::Void IHGMKDFFLCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_IHGMKDFFLCB_OFFSET))(this);
		}

		::System::Void MNOMDMJFOJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_MNOMDMJFOJL_OFFSET))(this);
		}

		::System::Void FKPNHGPJIMP(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + JDFPIPINHPH_FKPNHGPJIMP_OFFSET))(this, a1, a2);
		}

		::System::Void IJOHGKOFLHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_IJOHGKOFLHP_OFFSET))(this);
		}

		::System::Void OHOJBCNAMON(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + JDFPIPINHPH_OHOJBCNAMON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void COACGMPNKIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_COACGMPNKIL_OFFSET))(this);
		}

		::System::Boolean LOCPJJJCCON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_LOCPJJJCCON_OFFSET))(this);
		}

	};

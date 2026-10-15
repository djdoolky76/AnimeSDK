#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJCOLMNPKBK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class KFACLOGFNJF;
namespace RPG::Client { class ChessRogueDiceSurfaceDisplayData; }
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJEIPCDKLMG_ABBFNFNIOFA_OFFSET UNITYSDK_OFFSET(0xBC0C510)
#define NJEIPCDKLMG_ADKNHOCFAKI_OFFSET UNITYSDK_OFFSET(0xBC0D760)
#define NJEIPCDKLMG_CNJIMILFKMG_OFFSET UNITYSDK_OFFSET(0xBC0C190)
#define NJEIPCDKLMG_CPPFMKOPGGC_OFFSET UNITYSDK_OFFSET(0xBC0C990)
#define NJEIPCDKLMG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0C120)
#define NJEIPCDKLMG_DEJJNEEOKJL_OFFSET UNITYSDK_OFFSET(0xBC0C4B0)
#define NJEIPCDKLMG_ECOIALHKHIJ_OFFSET UNITYSDK_OFFSET(0xBC0D6E0)
#define NJEIPCDKLMG_FKPNEKOCGHA_OFFSET UNITYSDK_OFFSET(0xBC0CDE0)
#define NJEIPCDKLMG_FLIKAIIHILM_OFFSET UNITYSDK_OFFSET(0xBC0D720)
#define NJEIPCDKLMG_HFHODNPNFKI_OFFSET UNITYSDK_OFFSET(0xBC0CFF0)
#define NJEIPCDKLMG_HONLFNMNCKK_OFFSET UNITYSDK_OFFSET(0xBC0D5B0)
#define NJEIPCDKLMG_KBIEEBFLNCA_OFFSET UNITYSDK_OFFSET(0xBC0C940)
#define NJEIPCDKLMG_KPLEPCMLJEK_OFFSET UNITYSDK_OFFSET(0xBC0C420)
#define NJEIPCDKLMG_LDAKKLFGPHF_OFFSET UNITYSDK_OFFSET(0xBC0C280)
#define NJEIPCDKLMG_LJIHGGPGIJG_OFFSET UNITYSDK_OFFSET(0xBC0C5E0)
#define NJEIPCDKLMG_MEPDBOGJILA_OFFSET UNITYSDK_OFFSET(0xBC0CE90)
#define NJEIPCDKLMG_NGFEGBNDMJD_OFFSET UNITYSDK_OFFSET(0xBC0D180)
#define NJEIPCDKLMG_NNIINLCIOMD_OFFSET UNITYSDK_OFFSET(0xBC0D690)
#define NJEIPCDKLMG_OHAKPHBKKOJ_OFFSET UNITYSDK_OFFSET(0xBC0D570)
#define NJEIPCDKLMG_PKOEJEAKPOJ_OFFSET UNITYSDK_OFFSET(0xBC0C230)

	class NJEIPCDKLMG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ECNHHFOOMBH; // 0x10
		::RPG::Client::RogueNousDiceBranchDataItem* MDNDHFCBNLO; // 0x18
		::System::UInt32 HIEEONBJNOB; // 0x20
		::System::UInt32 FEHCMBOGGPN; // 0x24
		::System::Void _ctor(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CNJIMILFKMG(::KFACLOGFNJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_CNJIMILFKMG_OFFSET))(this, a1);
		}

		::System::Void LDAKKLFGPHF(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_LDAKKLFGPHF_OFFSET))(this, a1);
		}

		::HJCOLMNPKBK PKOEJEAKPOJ()
		{
			return ((::HJCOLMNPKBK(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_PKOEJEAKPOJ_OFFSET))(this);
		}

		::RPG::Client::TextID KPLEPCMLJEK()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_KPLEPCMLJEK_OFFSET))(this);
		}

		::System::String* DEJJNEEOKJL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_DEJJNEEOKJL_OFFSET))(this);
		}

		::System::String* ABBFNFNIOFA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_ABBFNFNIOFA_OFFSET))(this);
		}

		::System::String* LJIHGGPGIJG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_LJIHGGPGIJG_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* KBIEEBFLNCA()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_KBIEEBFLNCA_OFFSET))(this);
		}

		::System::Void CPPFMKOPGGC(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_CPPFMKOPGGC_OFFSET))(this, a1, a2);
		}

		::System::Int32 FKPNEKOCGHA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_FKPNEKOCGHA_OFFSET))(this);
		}

		::System::Single MEPDBOGJILA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_MEPDBOGJILA_OFFSET))(this);
		}

		::System::String* HFHODNPNFKI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_HFHODNPNFKI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>* NGFEGBNDMJD()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueDiceSurfaceDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_NGFEGBNDMJD_OFFSET))(this);
		}

		::System::UInt32 OHAKPHBKKOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_OHAKPHBKKOJ_OFFSET))(this);
		}

		::RPG::Client::ChessRogueDiceSurfaceDisplayData* HONLFNMNCKK()
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_HONLFNMNCKK_OFFSET))(this);
		}

		::System::UInt32 NNIINLCIOMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_NNIINLCIOMD_OFFSET))(this);
		}

		::System::UInt32 ECOIALHKHIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_ECOIALHKHIJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FLIKAIIHILM()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_FLIKAIIHILM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>* ADKNHOCFAKI()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSlotDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG_ADKNHOCFAKI_OFFSET))(this);
		}

	};

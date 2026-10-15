#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBAPBPBNNHP_LLKOJBLCGPE.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhase; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OBAPBPBNNHP_BFILGJNMDJK_OFFSET UNITYSDK_OFFSET(0xBD2CDA0)
#define OBAPBPBNNHP_BLIJJJBCKHI_OFFSET UNITYSDK_OFFSET(0xBD2C440)
#define OBAPBPBNNHP_BNLCOEPEEOH_OFFSET UNITYSDK_OFFSET(0xBD2C810)
#define OBAPBPBNNHP_CLPJKCGNCCC_OFFSET UNITYSDK_OFFSET(0xBD2C0F0)
#define OBAPBPBNNHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD2BFE0)
#define OBAPBPBNNHP_DACNGFAILDK_OFFSET UNITYSDK_OFFSET(0xBD2C050)
#define OBAPBPBNNHP_DBEFJFHAGAG_OFFSET UNITYSDK_OFFSET(0xBD2D5B0)
#define OBAPBPBNNHP_DEAFGLGGEIG_OFFSET UNITYSDK_OFFSET(0xBD2D180)
#define OBAPBPBNNHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD2BFF0)
#define OBAPBPBNNHP_EBGJAKJIPIO_OFFSET UNITYSDK_OFFSET(0xBD2D6D0)
#define OBAPBPBNNHP_EMKJAKHPJFE_OFFSET UNITYSDK_OFFSET(0xBD2D780)
#define OBAPBPBNNHP_FAPNBHKIBDK_OFFSET UNITYSDK_OFFSET(0xBD2D050)
#define OBAPBPBNNHP_FGIALKKMJGH_OFFSET UNITYSDK_OFFSET(0xBD2D830)
#define OBAPBPBNNHP_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0xBD2C770)
#define OBAPBPBNNHP_FJKIKPMEIGJ_OFFSET UNITYSDK_OFFSET(0xBD2C1B0)
#define OBAPBPBNNHP_FNJOMALDMIH_OFFSET UNITYSDK_OFFSET(0xBD2D540)
#define OBAPBPBNNHP_GCNPLHJFOHD_OFFSET UNITYSDK_OFFSET(0xBD2C920)
#define OBAPBPBNNHP_GFPHMGMIOAH_OFFSET UNITYSDK_OFFSET(0xBD2C260)
#define OBAPBPBNNHP_GPPDGMILIPB_OFFSET UNITYSDK_OFFSET(0xBD2C5F0)
#define OBAPBPBNNHP_ILPIJGCMMMF_OFFSET UNITYSDK_OFFSET(0xBD2CFD0)
#define OBAPBPBNNHP_IMDHJOPDLLL_OFFSET UNITYSDK_OFFSET(0xBD2D1C0)
#define OBAPBPBNNHP_JKAAPPFFEGI_OFFSET UNITYSDK_OFFSET(0xBD2C980)
#define OBAPBPBNNHP_JPIFECDFAHF_OFFSET UNITYSDK_OFFSET(0xBD2CE00)
#define OBAPBPBNNHP_KJKBDDJNJMH_OFFSET UNITYSDK_OFFSET(0xBD2D2B0)
#define OBAPBPBNNHP_LJGIMEAINOM_OFFSET UNITYSDK_OFFSET(0xBD2CE80)
#define OBAPBPBNNHP_LOJDPMFIPNL_OFFSET UNITYSDK_OFFSET(0xBD2CCE0)
#define OBAPBPBNNHP_NJMNHFDOEOM_OFFSET UNITYSDK_OFFSET(0xBD2D7D0)
#define OBAPBPBNNHP_NMFGMKGNKOJ_OFFSET UNITYSDK_OFFSET(0xBD2C2C0)
#define OBAPBPBNNHP_OCFBFGOFAFF_OFFSET UNITYSDK_OFFSET(0xBD2CA70)
#define OBAPBPBNNHP_OOFAAKENCOO_OFFSET UNITYSDK_OFFSET(0xBD2D440)
#define OBAPBPBNNHP_OOLDGBLJMPJ_OFFSET UNITYSDK_OFFSET(0xBD2D600)
#define OBAPBPBNNHP_PEKALLODGAN_OFFSET UNITYSDK_OFFSET(0xBD2D4C0)
#define OBAPBPBNNHP_PIOHIPIKODE_OFFSET UNITYSDK_OFFSET(0xBD2CBA0)

inline static constexpr unsigned int OBAPBPBNNHP_TypeDefinitionIndex = 60739;

	class OBAPBPBNNHP : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* IJAFEIICEDI; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* KGMHMDGFNGA; // 0x18
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x20
		::System::UInt32 KJDBEBMFEAL; // 0x28
		::System::Boolean PALJMLIMPIA; // 0x2C
		::System::Boolean KLAMLIKLCMK; // 0x2D
		::System::Boolean HMEPDFGDKMA; // 0x2E
		::System::Boolean ILPFNIBBNPG; // 0x2F
		::System::Boolean KKFCKLFPHNF; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ELevelPerformanceType DBLMPDKBMLH; // 0x34
		::OBAPBPBNNHP_LLKOJBLCGPE BBNMIAAKCJL; // 0x38
		// static const ::System::Object BIELGLOFMPO; // 0x0
		// static const ::System::String* GBFIMONELOG; // 0x0
		// static const ::System::String* CHLHJAMIMMA; // 0x0
		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_DISPOSE_OFFSET))(this);
		}

		::System::Void FJKIKPMEIGJ(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_FJKIKPMEIGJ_OFFSET))(this, a1, a2);
		}

		::System::Void NMFGMKGNKOJ(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_NMFGMKGNKOJ_OFFSET))(this, a1);
		}

		::System::Void FIABLKFJCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_FIABLKFJCBF_OFFSET))(this);
		}

		::System::Void DACNGFAILDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_DACNGFAILDK_OFFSET))(this);
		}

		::System::Void BNLCOEPEEOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_BNLCOEPEEOH_OFFSET))(this, a1);
		}

		::System::Void JKAAPPFFEGI(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_JKAAPPFFEGI_OFFSET))(this, a1, a2);
		}

		::System::Void PIOHIPIKODE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_PIOHIPIKODE_OFFSET))(this);
		}

		::System::Void JPIFECDFAHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_JPIFECDFAHF_OFFSET))(this);
		}

		::System::Void OCFBFGOFAFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_OCFBFGOFAFF_OFFSET))(this);
		}

		::System::Void BFILGJNMDJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_BFILGJNMDJK_OFFSET))(this);
		}

		::System::Void LJGIMEAINOM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_LJGIMEAINOM_OFFSET))(this, a1);
		}

		::System::Void ILPIJGCMMMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_ILPIJGCMMMF_OFFSET))(this);
		}

		::System::Boolean FAPNBHKIBDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_FAPNBHKIBDK_OFFSET))(this);
		}

		::System::Boolean DEAFGLGGEIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_DEAFGLGGEIG_OFFSET))(this);
		}

		::System::Single IMDHJOPDLLL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_IMDHJOPDLLL_OFFSET))(this);
		}

		::System::Boolean KJKBDDJNJMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_KJKBDDJNJMH_OFFSET))(this);
		}

		::System::Boolean DBEFJFHAGAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_DBEFJFHAGAG_OFFSET))(this);
		}

		::System::Single EBGJAKJIPIO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_EBGJAKJIPIO_OFFSET))(this);
		}

		::System::Boolean OOFAAKENCOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_OOFAAKENCOO_OFFSET))(this);
		}

		::System::Boolean PEKALLODGAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_PEKALLODGAN_OFFSET))(this);
		}

		::System::Boolean FNJOMALDMIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_FNJOMALDMIH_OFFSET))(this);
		}

		::System::Boolean GCNPLHJFOHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_GCNPLHJFOHD_OFFSET))(this);
		}

		::System::Boolean LOJDPMFIPNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_LOJDPMFIPNL_OFFSET))(this);
		}

		::System::Boolean OOLDGBLJMPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_OOLDGBLJMPJ_OFFSET))(this);
		}

		::System::Boolean NJMNHFDOEOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_NJMNHFDOEOM_OFFSET))(this);
		}

		::System::Boolean BLIJJJBCKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_BLIJJJBCKHI_OFFSET))(this);
		}

		::System::Boolean GPPDGMILIPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_GPPDGMILIPB_OFFSET))(this);
		}

		::System::Void GFPHMGMIOAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_GFPHMGMIOAH_OFFSET))(this);
		}

		::System::Void FGIALKKMJGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_FGIALKKMJGH_OFFSET))(this);
		}

		::System::Void CLPJKCGNCCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_CLPJKCGNCCC_OFFSET))(this);
		}

		::System::Single EMKJAKHPJFE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAPBPBNNHP_EMKJAKHPJFE_OFFSET))(this);
		}

	};

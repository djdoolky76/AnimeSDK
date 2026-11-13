#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBAPBPBNNHP_LLKOJBLCGPE.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhase; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OBAPBPBNNHP_BFILGJNMDJK_OFFSET UNITYSDK_OFFSET(0x1AB736C0)
#define OBAPBPBNNHP_BLIJJJBCKHI_OFFSET UNITYSDK_OFFSET(0x1AB72D30)
#define OBAPBPBNNHP_BNLCOEPEEOH_OFFSET UNITYSDK_OFFSET(0x1AB73130)
#define OBAPBPBNNHP_CLPJKCGNCCC_OFFSET UNITYSDK_OFFSET(0x1AB729E0)
#define OBAPBPBNNHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB728D0)
#define OBAPBPBNNHP_DACNGFAILDK_OFFSET UNITYSDK_OFFSET(0x1AB72940)
#define OBAPBPBNNHP_DBEFJFHAGAG_OFFSET UNITYSDK_OFFSET(0x1AB73EC0)
#define OBAPBPBNNHP_DEAFGLGGEIG_OFFSET UNITYSDK_OFFSET(0x1AB73A90)
#define OBAPBPBNNHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB728E0)
#define OBAPBPBNNHP_EBGJAKJIPIO_OFFSET UNITYSDK_OFFSET(0x1AB73FE0)
#define OBAPBPBNNHP_EMKJAKHPJFE_OFFSET UNITYSDK_OFFSET(0x1AB74090)
#define OBAPBPBNNHP_FAPNBHKIBDK_OFFSET UNITYSDK_OFFSET(0x1AB73960)
#define OBAPBPBNNHP_FGIALKKMJGH_OFFSET UNITYSDK_OFFSET(0x1AB74140)
#define OBAPBPBNNHP_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0x1AB73090)
#define OBAPBPBNNHP_FJKIKPMEIGJ_OFFSET UNITYSDK_OFFSET(0x1AB72AA0)
#define OBAPBPBNNHP_FNJOMALDMIH_OFFSET UNITYSDK_OFFSET(0x1AB73E50)
#define OBAPBPBNNHP_GCNPLHJFOHD_OFFSET UNITYSDK_OFFSET(0x1AB73240)
#define OBAPBPBNNHP_GFPHMGMIOAH_OFFSET UNITYSDK_OFFSET(0x1AB72B50)
#define OBAPBPBNNHP_GPPDGMILIPB_OFFSET UNITYSDK_OFFSET(0x1AB72F10)
#define OBAPBPBNNHP_ILPIJGCMMMF_OFFSET UNITYSDK_OFFSET(0x1AB738E0)
#define OBAPBPBNNHP_IMDHJOPDLLL_OFFSET UNITYSDK_OFFSET(0x1AB73AD0)
#define OBAPBPBNNHP_JKAAPPFFEGI_OFFSET UNITYSDK_OFFSET(0x1AB732A0)
#define OBAPBPBNNHP_JPIFECDFAHF_OFFSET UNITYSDK_OFFSET(0x1AB73720)
#define OBAPBPBNNHP_KJKBDDJNJMH_OFFSET UNITYSDK_OFFSET(0x1AB73BC0)
#define OBAPBPBNNHP_LJGIMEAINOM_OFFSET UNITYSDK_OFFSET(0x1AB73790)
#define OBAPBPBNNHP_LOJDPMFIPNL_OFFSET UNITYSDK_OFFSET(0x1AB73600)
#define OBAPBPBNNHP_NJMNHFDOEOM_OFFSET UNITYSDK_OFFSET(0x1AB740E0)
#define OBAPBPBNNHP_NMFGMKGNKOJ_OFFSET UNITYSDK_OFFSET(0x1AB72BB0)
#define OBAPBPBNNHP_OCFBFGOFAFF_OFFSET UNITYSDK_OFFSET(0x1AB73390)
#define OBAPBPBNNHP_OOFAAKENCOO_OFFSET UNITYSDK_OFFSET(0x1AB73D50)
#define OBAPBPBNNHP_OOLDGBLJMPJ_OFFSET UNITYSDK_OFFSET(0x1AB73F10)
#define OBAPBPBNNHP_PEKALLODGAN_OFFSET UNITYSDK_OFFSET(0x1AB73DD0)
#define OBAPBPBNNHP_PIOHIPIKODE_OFFSET UNITYSDK_OFFSET(0x1AB734C0)

inline static constexpr unsigned int OBAPBPBNNHP_TypeDefinitionIndex = 62116;

	class OBAPBPBNNHP : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* IJAFEIICEDI; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* KGMHMDGFNGA; // 0x20
		::System::Boolean KKFCKLFPHNF; // 0x28
		::System::Boolean HMEPDFGDKMA; // 0x29
		::System::Boolean KLAMLIKLCMK; // 0x2A
		::System::Boolean PALJMLIMPIA; // 0x2B
		::System::Boolean ILPFNIBBNPG; // 0x2C
		::System::Byte _padding0[0x3];
		::OBAPBPBNNHP_LLKOJBLCGPE BBNMIAAKCJL; // 0x30
		::System::UInt32 KJDBEBMFEAL; // 0x3C
		::RPG::GameCore::ELevelPerformanceType DBLMPDKBMLH; // 0x40
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

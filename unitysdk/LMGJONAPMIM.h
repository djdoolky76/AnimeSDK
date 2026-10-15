#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMGJONAPMIM_ElfGenCustomerState.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class LMGJONAPMIM_PAADAKPIIAK;
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace RPG::GameCore { class RestaurantCustomerRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMGJONAPMIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB77A0E0)
#define LMGJONAPMIM_DDIHKCCFDOD_OFFSET UNITYSDK_OFFSET(0xB77B7F0)
#define LMGJONAPMIM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB77A690)
#define LMGJONAPMIM_HCBAHLJCNNG_OFFSET UNITYSDK_OFFSET(0xB77A530)
#define LMGJONAPMIM_HKNGMCLNNHI_OFFSET UNITYSDK_OFFSET(0xB77B180)
#define LMGJONAPMIM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB77A0F0)
#define LMGJONAPMIM_JJDLHFMBLCO_OFFSET UNITYSDK_OFFSET(0xB77AEB0)
#define LMGJONAPMIM_JJJBEKDNNDP_OFFSET UNITYSDK_OFFSET(0xB77B750)
#define LMGJONAPMIM_JJPJMPIEIDD_OFFSET UNITYSDK_OFFSET(0xB77B9C0)
#define LMGJONAPMIM_KIGMBBFIPPH_OFFSET UNITYSDK_OFFSET(0xB77A3C0)
#define LMGJONAPMIM_LNPEAENNNNN_OFFSET UNITYSDK_OFFSET(0xB77B2C0)
#define LMGJONAPMIM_NAAJHJIBIEM_OFFSET UNITYSDK_OFFSET(0xB77B940)
#define LMGJONAPMIM_NDLEPBDLCIL_OFFSET UNITYSDK_OFFSET(0xB77AE30)
#define LMGJONAPMIM_NJLHJJNMCIH_OFFSET UNITYSDK_OFFSET(0xB77B6F0)
#define LMGJONAPMIM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB77A5F0)

inline static constexpr unsigned int LMGJONAPMIM_TypeDefinitionIndex = 76537;

	class LMGJONAPMIM : public ::System::Object
	{
	public:
		::RPG::GameCore::ElfWaveCustomerConfig* LJGJPANLLIK; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantCustomerRow*>* PPANEFEDHJI; // 0x20
		::LMGJONAPMIM_PAADAKPIIAK* CMEHJJIJEDA; // 0x28
		::BNLHGENFEHG* PDENFEFCAGN; // 0x30
		::System::Single KBAJABMDIDM; // 0x38
		::System::Single AFENLDACODH; // 0x3C
		::System::Int32 GNIPNIKOOBE; // 0x40
		::System::Single PJMDHCDIPPK; // 0x44
		::LMGJONAPMIM_ElfGenCustomerState DLNIGFGLPLJ; // 0x48
		::System::Single NFMHNEOEMFI; // 0x4C
		::System::Int32 KFNGCCLAHLJ; // 0x50
		::System::Int32 BOAAIDMJIDH; // 0x54
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + LMGJONAPMIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_EXECUTE_OFFSET))(this);
		}

		::System::Void HCBAHLJCNNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_HCBAHLJCNNG_OFFSET))(this);
		}

		::System::Void NDLEPBDLCIL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMGJONAPMIM_NDLEPBDLCIL_OFFSET))(this, a1);
		}

		::System::Void LNPEAENNNNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_LNPEAENNNNN_OFFSET))(this);
		}

		::System::Void KIGMBBFIPPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_KIGMBBFIPPH_OFFSET))(this);
		}

		::System::Boolean NJLHJJNMCIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_NJLHJJNMCIH_OFFSET))(this);
		}

		::System::Void HKNGMCLNNHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_HKNGMCLNNHI_OFFSET))(this);
		}

		::System::Void DDIHKCCFDOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_DDIHKCCFDOD_OFFSET))(this);
		}

		::System::Void JJJBEKDNNDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMGJONAPMIM_JJJBEKDNNDP_OFFSET))(this, a1);
		}

		::System::Boolean JJDLHFMBLCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_JJDLHFMBLCO_OFFSET))(this);
		}

		::System::Int32 NAAJHJIBIEM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_NAAJHJIBIEM_OFFSET))(this);
		}

		::System::Single JJPJMPIEIDD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_JJPJMPIEIDD_OFFSET))(this);
		}

	};

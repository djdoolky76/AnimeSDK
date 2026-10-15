#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
class CLAKIACAACO;
class FBAMAFLOBGA;
class HFGMOFBDAON;
class ICLHOMHNPKM;
class ILDNJGBJGPF;
class KOBALACAPKF;
class LPIHJBELIBN;
class NPCLLLLIPEH;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHCHDKJLNBJ_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBBB7680)
#define NHCHDKJLNBJ_BCBHDCILOCJ_OFFSET UNITYSDK_OFFSET(0xBBB6A20)
#define NHCHDKJLNBJ_CDAFGJBIKMM_OFFSET UNITYSDK_OFFSET(0xBBB6950)
#define NHCHDKJLNBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB69A0)
#define NHCHDKJLNBJ_FHFFHEODLDH_OFFSET UNITYSDK_OFFSET(0xBBB70A0)
#define NHCHDKJLNBJ_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0xBBB74A0)
#define NHCHDKJLNBJ_MDOCOKNCNCB_OFFSET UNITYSDK_OFFSET(0xBBB7290)
#define NHCHDKJLNBJ_NDIIECEIBLM_OFFSET UNITYSDK_OFFSET(0xBBB7540)
#define NHCHDKJLNBJ_NDIKCLCPKME_OFFSET UNITYSDK_OFFSET(0xBBB7230)
#define NHCHDKJLNBJ_OFLLIMMDFLG_OFFSET UNITYSDK_OFFSET(0xBBB7720)
#define NHCHDKJLNBJ__ENSUREFULLINITIALIZATION_B__10_0_OFFSET UNITYSDK_OFFSET(0xBBB78A0)
#define NHCHDKJLNBJ__INITIALIZEDURINGLOGIN_B__8_0_OFFSET UNITYSDK_OFFSET(0xBBB7880)

inline static constexpr unsigned int NHCHDKJLNBJ_TypeDefinitionIndex = 81471;

	class NHCHDKJLNBJ : public ::System::Object
	{
	public:
		::ICLHOMHNPKM* ECKBBFILCDB; // 0x10
		::NPCLLLLIPEH* EMPNNNAFGFO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CKCJOCJGHKC*>* PEBFHMELLNI; // 0x20
		::RPG::Client::Promises::IPromise* JIKOCFDANEH; // 0x28
		::System::Void _ctor(::ICLHOMHNPKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICLHOMHNPKM*))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_CTOR_OFFSET))(this, a1);
		}

		::ILDNJGBJGPF* CDAFGJBIKMM()
		{
			return ((::ILDNJGBJGPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_CDAFGJBIKMM_OFFSET))(this);
		}

		::System::Void BCBHDCILOCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_BCBHDCILOCJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FHFFHEODLDH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_FHFFHEODLDH_OFFSET))(this);
		}

		::System::Void MDOCOKNCNCB(::CLAKIACAACO* a1, ::KOBALACAPKF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CLAKIACAACO*, ::KOBALACAPKF*))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_MDOCOKNCNCB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* NDIIECEIBLM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_NDIIECEIBLM_OFFSET))(this);
		}

		::System::Void NDIKCLCPKME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_NDIKCLCPKME_OFFSET))(this);
		}

		::System::Boolean IAONPECOKLB(::System::UInt32 a1, ::CKCJOCJGHKC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_IAONPECOKLB_OFFSET))(this, a1, a2);
		}

		::CKCJOCJGHKC* ACMKLFOMPFC(::System::UInt32 a1)
		{
			return ((::CKCJOCJGHKC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void OFLLIMMDFLG(::FBAMAFLOBGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ_OFLLIMMDFLG_OFFSET))(this, a1);
		}

		::System::Void _InitializeDuringLogin_b__8_0(::LPIHJBELIBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPIHJBELIBN*))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ__INITIALIZEDURINGLOGIN_B__8_0_OFFSET))(this, a1);
		}

		::System::Void _EnsureFullInitialization_b__10_0(::HFGMOFBDAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGMOFBDAON*))((::PBYTE)hIl2Cpp + NHCHDKJLNBJ__ENSUREFULLINITIALIZATION_B__10_0_OFFSET))(this, a1);
		}

	};

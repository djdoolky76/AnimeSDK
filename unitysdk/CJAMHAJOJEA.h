#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FMPEKJEBIHK;
class JCAIHCKBCCF;
class PHDHBNBJPJF;
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJAMHAJOJEA_ACEGNMFFHBN_OFFSET UNITYSDK_OFFSET(0xCF92420)
#define CJAMHAJOJEA_AKPPFMPDBIO_OFFSET UNITYSDK_OFFSET(0xCF92E90)
#define CJAMHAJOJEA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF91EB0)
#define CJAMHAJOJEA_DHCECDODIJN_OFFSET UNITYSDK_OFFSET(0xCF928E0)
#define CJAMHAJOJEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF92170)
#define CJAMHAJOJEA_EEFBFHNKJIN_OFFSET UNITYSDK_OFFSET(0xCF922A0)
#define CJAMHAJOJEA_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xCF92E70)
#define CJAMHAJOJEA_IDJKANIGJCC_OFFSET UNITYSDK_OFFSET(0xCF92970)
#define CJAMHAJOJEA_IKKKMHBDCNJ_OFFSET UNITYSDK_OFFSET(0xCF92740)
#define CJAMHAJOJEA_IOJONOGPJJO_OFFSET UNITYSDK_OFFSET(0xCF925B0)
#define CJAMHAJOJEA_MJAFNPPAIBL_OFFSET UNITYSDK_OFFSET(0xCF92810)
#define CJAMHAJOJEA_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xCF92E60)
#define CJAMHAJOJEA_MKJHLJLBLHG_OFFSET UNITYSDK_OFFSET(0xCF92A70)
#define CJAMHAJOJEA_NODKIPIEOMC_OFFSET UNITYSDK_OFFSET(0xCF92B90)
#define CJAMHAJOJEA_OAIFPCFBJDJ_OFFSET UNITYSDK_OFFSET(0xCF92CE0)

inline static constexpr unsigned int CJAMHAJOJEA_TypeDefinitionIndex = 52110;

	class CJAMHAJOJEA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PHDHBNBJPJF*>* MFGEADHPLHO; // 0x10
		::JCAIHCKBCCF* MEFLLFBJHBD; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::UInt32>>* HJDEHAMNNLE; // 0x20
		::System::Collections::Generic::List_1<::FMPEKJEBIHK*>* HJEDLJHJGIO; // 0x28
		::System::UInt64 NJFKHPIHDEF; // 0x30
		::System::Single FNCGPGBEMMF; // 0x38
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0x3C
		::System::Void _ctor(::RPG::GameCore::LevelSmartObjectInfo* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectInfo*, ::System::UInt64))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean EEFBFHNKJIN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_EEFBFHNKJIN_OFFSET))(this, a1);
		}

		::System::Void ACEGNMFFHBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_ACEGNMFFHBN_OFFSET))(this, a1);
		}

		::System::Void IKKKMHBDCNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_IKKKMHBDCNJ_OFFSET))(this, a1);
		}

		::System::Void MJAFNPPAIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_MJAFNPPAIBL_OFFSET))(this, a1);
		}

		::PHDHBNBJPJF* DHCECDODIJN(::System::UInt32 a1)
		{
			return ((::PHDHBNBJPJF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_DHCECDODIJN_OFFSET))(this, a1);
		}

		::System::Boolean IDJKANIGJCC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_IDJKANIGJCC_OFFSET))(this, a1);
		}

		::FMPEKJEBIHK* MKJHLJLBLHG(::System::UInt32 a1)
		{
			return ((::FMPEKJEBIHK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_MKJHLJLBLHG_OFFSET))(this, a1);
		}

		::System::Void NODKIPIEOMC(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_NODKIPIEOMC_OFFSET))(this, a1, a2);
		}

		::System::Void IOJONOGPJJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_IOJONOGPJJO_OFFSET))(this, a1);
		}

		::System::Boolean OAIFPCFBJDJ(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_OAIFPCFBJDJ_OFFSET))(this, a1);
		}

		::System::UInt64 MJGKNFEILLI()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_MJGKNFEILLI_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Single AKPPFMPDBIO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAMHAJOJEA_AKPPFMPDBIO_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"
class BGIPKMPPBAL;
class EHNMDPFKELC;
class EMHMFMNBJPG;
class FMNDMIHOOIK;
class HGNPFJJKJAJ;
class KOCHBCMDHOB;
class LCDEEKNHPBG;
class NACPDFJHGBM;
class OBJANKHLNGO;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MKNJGMEOCII_AMEEBFNMDBI_OFFSET UNITYSDK_OFFSET(0xC25B860)
#define MKNJGMEOCII_BMKLHBHCOLM_OFFSET UNITYSDK_OFFSET(0xC25AC00)
#define MKNJGMEOCII_BOOBIEGACJD_OFFSET UNITYSDK_OFFSET(0xC25B920)
#define MKNJGMEOCII_CNPCJHEMFFN_OFFSET UNITYSDK_OFFSET(0xC259BC0)
#define MKNJGMEOCII_CTOR_OFFSET UNITYSDK_OFFSET(0xC259560)
#define MKNJGMEOCII_DBFOMKIPNGH_OFFSET UNITYSDK_OFFSET(0xC259F10)
#define MKNJGMEOCII_DHBBBKBCEFC_OFFSET UNITYSDK_OFFSET(0xC25B2F0)
#define MKNJGMEOCII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC259B00)
#define MKNJGMEOCII_FEMHCGKDLBN_OFFSET UNITYSDK_OFFSET(0xC259DE0)
#define MKNJGMEOCII_FJBLMNNGJDE_OFFSET UNITYSDK_OFFSET(0xC25B8E0)
#define MKNJGMEOCII_HOJNACIFLKB_OFFSET UNITYSDK_OFFSET(0xC25AB90)
#define MKNJGMEOCII_HPLPJELILDG_OFFSET UNITYSDK_OFFSET(0xC25B7F0)
#define MKNJGMEOCII_IIHEBLDHJHE_OFFSET UNITYSDK_OFFSET(0xC25B7A0)
#define MKNJGMEOCII_JCIHOKMJHKH_OFFSET UNITYSDK_OFFSET(0xC25A210)
#define MKNJGMEOCII_ODOJKKDPGFE_OFFSET UNITYSDK_OFFSET(0xC25B650)
#define MKNJGMEOCII_OKLBFLBCILH_OFFSET UNITYSDK_OFFSET(0xC25B4F0)
#define MKNJGMEOCII_START_OFFSET UNITYSDK_OFFSET(0xC259920)
#define MKNJGMEOCII_STOP_OFFSET UNITYSDK_OFFSET(0xC259A60)

inline static constexpr unsigned int MKNJGMEOCII_TypeDefinitionIndex = 81957;

	class MKNJGMEOCII : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* KIGIDFBOJEB; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
		::System::Collections::Generic::Queue_1<::System::String*>* PHDDLNPGFKL; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action*>*>* DCNEHLOAIJD; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::EMHMFMNBJPG*>* GDEEJGLLLHA; // 0x30
		::KOCHBCMDHOB* DEGMOMBAMFO; // 0x38
		::FMNDMIHOOIK* GNACHPMDGPD; // 0x40
		::BGIPKMPPBAL* DCOPELFHOLO; // 0x48
		::System::Void _ctor(::NACPDFJHGBM* a1, ::EHNMDPFKELC* a2, ::HGNPFJJKJAJ* a3, ::OBJANKHLNGO* a4, ::FMNDMIHOOIK* a5)
		{
			return ((::System::Void(*)(::PVOID, ::NACPDFJHGBM*, ::EHNMDPFKELC*, ::HGNPFJJKJAJ*, ::OBJANKHLNGO*, ::FMNDMIHOOIK*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNJGMEOCII_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNJGMEOCII_STOP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNJGMEOCII_DISPOSE_OFFSET))(this);
		}

		::System::Void CNPCJHEMFFN(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_CNPCJHEMFFN_OFFSET))(this, a1, a2);
		}

		::System::Void FEMHCGKDLBN(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_FEMHCGKDLBN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RedDotType DBFOMKIPNGH(::System::String* a1)
		{
			return ((::RPG::GameCore::RedDotType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_DBFOMKIPNGH_OFFSET))(this, a1);
		}

		::System::Void HOJNACIFLKB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_HOJNACIFLKB_OFFSET))(this, a1);
		}

		::System::Void BMKLHBHCOLM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_BMKLHBHCOLM_OFFSET))(this, a1);
		}

		::System::Void DHBBBKBCEFC(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_DHBBBKBCEFC_OFFSET))(this, a1);
		}

		::System::Void OKLBFLBCILH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNJGMEOCII_OKLBFLBCILH_OFFSET))(this);
		}

		::EMHMFMNBJPG* JCIHOKMJHKH(::System::String* a1)
		{
			return ((::EMHMFMNBJPG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_JCIHOKMJHKH_OFFSET))(this, a1);
		}

		::System::Void ODOJKKDPGFE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_ODOJKKDPGFE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RedDotType IIHEBLDHJHE(::System::String* a1)
		{
			return ((::RPG::GameCore::RedDotType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_IIHEBLDHJHE_OFFSET))(this, a1);
		}

		::System::Boolean HPLPJELILDG(::System::String* a1, ::LCDEEKNHPBG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LCDEEKNHPBG*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_HPLPJELILDG_OFFSET))(this, a1, a2);
		}

		::System::Boolean AMEEBFNMDBI(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MKNJGMEOCII_AMEEBFNMDBI_OFFSET))(this, a1, a2, a3);
		}

		::BGIPKMPPBAL* FJBLMNNGJDE()
		{
			return ((::BGIPKMPPBAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNJGMEOCII_FJBLMNNGJDE_OFFSET))(this);
		}

		::EMHMFMNBJPG* BOOBIEGACJD(::System::String* a1)
		{
			return ((::EMHMFMNBJPG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKNJGMEOCII_BOOBIEGACJD_OFFSET))(this, a1);
		}

	};

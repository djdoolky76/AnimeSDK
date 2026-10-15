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

#define MKNJGMEOCII_AMEEBFNMDBI_OFFSET UNITYSDK_OFFSET(0xB9A0830)
#define MKNJGMEOCII_BMKLHBHCOLM_OFFSET UNITYSDK_OFFSET(0xB99FBC0)
#define MKNJGMEOCII_BOOBIEGACJD_OFFSET UNITYSDK_OFFSET(0xB9A08F0)
#define MKNJGMEOCII_CNPCJHEMFFN_OFFSET UNITYSDK_OFFSET(0xB99EB80)
#define MKNJGMEOCII_CTOR_OFFSET UNITYSDK_OFFSET(0xB99E520)
#define MKNJGMEOCII_DBFOMKIPNGH_OFFSET UNITYSDK_OFFSET(0xB99EED0)
#define MKNJGMEOCII_DHBBBKBCEFC_OFFSET UNITYSDK_OFFSET(0xB9A02C0)
#define MKNJGMEOCII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB99EAC0)
#define MKNJGMEOCII_FEMHCGKDLBN_OFFSET UNITYSDK_OFFSET(0xB99EDA0)
#define MKNJGMEOCII_FJBLMNNGJDE_OFFSET UNITYSDK_OFFSET(0xB9A08B0)
#define MKNJGMEOCII_HOJNACIFLKB_OFFSET UNITYSDK_OFFSET(0xB99FB50)
#define MKNJGMEOCII_HPLPJELILDG_OFFSET UNITYSDK_OFFSET(0xB9A07C0)
#define MKNJGMEOCII_IIHEBLDHJHE_OFFSET UNITYSDK_OFFSET(0xB9A0770)
#define MKNJGMEOCII_JCIHOKMJHKH_OFFSET UNITYSDK_OFFSET(0xB99F1D0)
#define MKNJGMEOCII_ODOJKKDPGFE_OFFSET UNITYSDK_OFFSET(0xB9A0620)
#define MKNJGMEOCII_OKLBFLBCILH_OFFSET UNITYSDK_OFFSET(0xB9A04C0)
#define MKNJGMEOCII_START_OFFSET UNITYSDK_OFFSET(0xB99E8E0)
#define MKNJGMEOCII_STOP_OFFSET UNITYSDK_OFFSET(0xB99EA20)

inline static constexpr unsigned int MKNJGMEOCII_TypeDefinitionIndex = 79180;

	class MKNJGMEOCII : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::String*>* PHDDLNPGFKL; // 0x10
		::BGIPKMPPBAL* DCOPELFHOLO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::EMHMFMNBJPG*>* GDEEJGLLLHA; // 0x20
		::KOCHBCMDHOB* DEGMOMBAMFO; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* KIGIDFBOJEB; // 0x30
		::OBJANKHLNGO* GJALMBBNNOF; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action*>*>* DCNEHLOAIJD; // 0x40
		::FMNDMIHOOIK* GNACHPMDGPD; // 0x48
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

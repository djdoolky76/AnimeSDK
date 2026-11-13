#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMOMDOHCCOO;
namespace InControl { class PlayerAction; }
namespace RPG::Client::ActivityHipplen { class HipplenPickingGoodsMiniGame; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIBJOOGFKIN_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x1A388FD0)
#define MIBJOOGFKIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A389610)
#define MIBJOOGFKIN_DOELKGDFBKA_OFFSET UNITYSDK_OFFSET(0x1B3701F0)
#define MIBJOOGFKIN_GET_AUTOINPUTWATINGTIME_OFFSET UNITYSDK_OFFSET(0x1A3895F0)
#define MIBJOOGFKIN_HGNGLDHBHOI_OFFSET UNITYSDK_OFFSET(0x1A388E00)
#define MIBJOOGFKIN_IEBMGJDBBBP_OFFSET UNITYSDK_OFFSET(0x1A388F40)
#define MIBJOOGFKIN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B36FB50)
#define MIBJOOGFKIN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1B36F9D0)
#define MIBJOOGFKIN_KHLIJCOCEMA_OFFSET UNITYSDK_OFFSET(0x1A389310)
#define MIBJOOGFKIN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B36F890)
#define MIBJOOGFKIN_MJBJFALHFDG_OFFSET UNITYSDK_OFFSET(0x1A389030)
#define MIBJOOGFKIN_MMGFALCEOOI_OFFSET UNITYSDK_OFFSET(0x1A388E90)
#define MIBJOOGFKIN_NAOGCEFCPBM_OFFSET UNITYSDK_OFFSET(0x1A388DC0)
#define MIBJOOGFKIN_OJHICDKLNND_OFFSET UNITYSDK_OFFSET(0x1B36FA60)
#define MIBJOOGFKIN_OLLLFEAKKNO_OFFSET UNITYSDK_OFFSET(0x1B370150)
#define MIBJOOGFKIN_SET_AUTOINPUTWATINGTIME_OFFSET UNITYSDK_OFFSET(0x1A389600)

inline static constexpr unsigned int MIBJOOGFKIN_TypeDefinitionIndex = 77920;

	class MIBJOOGFKIN : public ::System::Object
	{
	public:
		::InControl::PlayerAction* HGJBOEJPOJE; // 0x10
		::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame* CFKHNPGEAJA; // 0x18
		::System::Action_1<::PMOMDOHCCOO*>* GEAGJFCMECN; // 0x20
		::PMOMDOHCCOO* HGENBAEMGJO; // 0x28
		::InControl::PlayerAction* MEDILGIIOLJ; // 0x30
		::System::Collections::Generic::List_1<::PMOMDOHCCOO*>* NIDNFEHJJLJ; // 0x38
		::InControl::PlayerAction* BALLPEHFNDO; // 0x40
		::System::Single HGHOOBMLILJ; // 0x48
		::System::Boolean NKGJCALBAGN; // 0x4C
		::System::Boolean FJOAPMIALEI; // 0x4D
		::System::Byte _padding0[0x2];
		::System::Single _AutoInputWatingTime_k__BackingField; // 0x50
		::System::Single OKNMEHAHIAH; // 0x54
		::System::Single JFFICCJJCMA; // 0x58
		::System::Single JNJLPBHMICN; // 0x5C
		// static const ::System::Object OOCFNAJKOGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::List_1<::PMOMDOHCCOO*>* a1, ::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PMOMDOHCCOO*>*, ::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame*))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void OJHICDKLNND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_OJHICDKLNND_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void OLLLFEAKKNO(::System::Action_1<::PMOMDOHCCOO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::PMOMDOHCCOO*>*))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_OLLLFEAKKNO_OFFSET))(this, a1);
		}

		::System::Void DOELKGDFBKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_DOELKGDFBKA_OFFSET))(this, a1);
		}

		::System::Void NAOGCEFCPBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_NAOGCEFCPBM_OFFSET))(this);
		}

		::System::Void HGNGLDHBHOI(::PMOMDOHCCOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMOMDOHCCOO*))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_HGNGLDHBHOI_OFFSET))(this, a1);
		}

		::System::Void MMGFALCEOOI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_MMGFALCEOOI_OFFSET))(this, a1);
		}

		::System::Void IEBMGJDBBBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_IEBMGJDBBBP_OFFSET))(this, a1);
		}

		::System::Void COPGACEDIEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_COPGACEDIEI_OFFSET))(this);
		}

		::System::Boolean MJBJFALHFDG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_MJBJFALHFDG_OFFSET))(this, a1);
		}

		::System::Boolean KHLIJCOCEMA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_KHLIJCOCEMA_OFFSET))(this, a1);
		}

		::System::Single get_AutoInputWatingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_GET_AUTOINPUTWATINGTIME_OFFSET))(this);
		}

		::System::Void set_AutoInputWatingTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIBJOOGFKIN_SET_AUTOINPUTWATINGTIME_OFFSET))(this, a1);
		}

	};

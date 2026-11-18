#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFFDFHHMOGH.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/PONCHKKAEAG.h"
#include "unitysdk/Share/EAvatarSkillType.h"

class AGJFDPBLDDF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHEPPDANJKP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFB8D100)
#define OHEPPDANJKP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFB8CDA0)
#define OHEPPDANJKP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xFB8CF10)
#define OHEPPDANJKP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xFB8D070)
#define OHEPPDANJKP_NEDBPJOKDNE_OFFSET UNITYSDK_OFFSET(0xFB8D020)
#define OHEPPDANJKP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFB8CC30)
#define OHEPPDANJKP__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB8CDF0)
#define OHEPPDANJKP__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8CE70)

inline static constexpr unsigned int OHEPPDANJKP_TypeDefinitionIndex = 69464;

class OHEPPDANJKP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x78; // 0x0
	::AGJFDPBLDDF* PMJAOIHGFEK; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::PONCHKKAEAG>* OKMPNGOOBJJ; // 0x50
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* CFEPMPLANJN; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::PONCHKKAEAG>* EOPEDPAOPAD; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH; // 0x68
	::System::Single IAPDECBJNKB; // 0x70
	::DFFDFHHMOGH NCDIIPGIIEC; // 0x74
	::MoleMole::Config::EntityType IPCMBOPGMED; // 0x78
	::System::Int32 NANOLGJFIFL; // 0x7C
	::System::Boolean JLEPFFGHPJM; // 0x80
	::System::Boolean DMNHPPMJIJF; // 0x81
	::System::Boolean BJFMKICFBNN; // 0x82
	::System::Byte _padding0[0x1];
	::System::UInt32 EBAHKNNMBGH; // 0x84
	::System::UInt32 NPHJHGKNOOB; // 0x88
	::System::Boolean PKGFBAGEHOM; // 0x8C
	::System::Boolean AOGKBMBGFPD; // 0x8D
	::System::Boolean IDFOPLJCGCE; // 0x8E
	::System::Boolean ALMIAOBAPJO; // 0x8F

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHEPPDANJKP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPPDANJKP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPPDANJKP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPPDANJKP_GETCLASSID_OFFSET))(this);
	}

	static ::OHEPPDANJKP* JFDOOELFAOA()
	{
		return ((::OHEPPDANJKP*(*)())((::PBYTE)hIl2Cpp + OHEPPDANJKP_JFDOOELFAOA_OFFSET))();
	}

	::System::Void NEDBPJOKDNE(::System::UInt32 LHEGKABBCHE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHEPPDANJKP_NEDBPJOKDNE_OFFSET))(this, LHEGKABBCHE);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPPDANJKP_MEFBHFEOKGH_OFFSET))(this);
	}

	::OHEPPDANJKP* BBOMJDBNHIC(::System::UInt32 EBAHKNNMBGH, ::System::UInt32 IMDCMIJAMLK, ::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH, ::System::Single MDPPNMIPDMP, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::PONCHKKAEAG>* LKNOOPDJEKK, ::System::Boolean PKGFBAGEHOM, ::MoleMole::Config::EntityType IPCMBOPGMED, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* PLPEOACAKDG, ::System::Int32 HCFAFGFBOEP, ::System::Boolean IBPEDPAHALK, ::DFFDFHHMOGH ICNICLGLEDI)
	{
		return ((::OHEPPDANJKP*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::PONCHKKAEAG>*, ::System::Boolean, ::MoleMole::Config::EntityType, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::System::Int32, ::System::Boolean, ::DFFDFHHMOGH))((::PBYTE)hIl2Cpp + OHEPPDANJKP_BBOMJDBNHIC_OFFSET))(this, EBAHKNNMBGH, IMDCMIJAMLK, HMPKKCKNFIH, MDPPNMIPDMP, LKNOOPDJEKK, PKGFBAGEHOM, IPCMBOPGMED, PLPEOACAKDG, HCFAFGFBOEP, IBPEDPAHALK, ICNICLGLEDI);
	}
};

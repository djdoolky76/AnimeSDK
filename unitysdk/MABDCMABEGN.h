#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LMCBEJIGFIN;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MABDCMABEGN_AIJADDGEPEJ_OFFSET UNITYSDK_OFFSET(0x17794300)
#define MABDCMABEGN_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x17794AA0)
#define MABDCMABEGN_BGFLCMAMFNH_OFFSET UNITYSDK_OFFSET(0x17793EF0)
#define MABDCMABEGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17793860)
#define MABDCMABEGN_EEPBBOPNDFF_OFFSET UNITYSDK_OFFSET(0x17793AE0)
#define MABDCMABEGN_FJCAOCLMDBF_OFFSET UNITYSDK_OFFSET(0x17793DD0)
#define MABDCMABEGN_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x17793CD0)
#define MABDCMABEGN_HMBPLIGOJGH_OFFSET UNITYSDK_OFFSET(0x17794360)
#define MABDCMABEGN_IOHPHFJBHHC_OFFSET UNITYSDK_OFFSET(0x177941F0)
#define MABDCMABEGN_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x17794900)
#define MABDCMABEGN_OJDKOPKPPIC_OFFSET UNITYSDK_OFFSET(0x17794190)
#define MABDCMABEGN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17794400)
#define MABDCMABEGN__CTOR_OFFSET UNITYSDK_OFFSET(0x177936F0)

inline static constexpr unsigned int MABDCMABEGN_TypeDefinitionIndex = 62684;

class MABDCMABEGN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::LMCBEJIGFIN*>* DGNNHHEBHAG; // 0x10
	::System::Collections::Generic::List_1<::LMCBEJIGFIN*>* JPMADDAALHK; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LJJJIHCFAAD; // 0x20
	::System::Collections::Generic::List_1<::LMCBEJIGFIN*>* INKBKKAGHAM; // 0x28
	::System::Single MHGOHHCBNEK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABDCMABEGN__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABDCMABEGN_DISPOSE_OFFSET))(this);
	}

	::System::Void EEPBBOPNDFF(::System::Collections::Generic::List_1<::LMCBEJIGFIN*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LMCBEJIGFIN*>*))((::PBYTE)hIl2Cpp + MABDCMABEGN_EEPBBOPNDFF_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void FLHNGDLANDC(::System::String* GOMCGPKAKPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MABDCMABEGN_FLHNGDLANDC_OFFSET))(this, GOMCGPKAKPO);
	}

	::System::Void BGFLCMAMFNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABDCMABEGN_BGFLCMAMFNH_OFFSET))(this);
	}

	::System::Boolean OJDKOPKPPIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABDCMABEGN_OJDKOPKPPIC_OFFSET))(this);
	}

	::System::Void IOHPHFJBHHC(::LMCBEJIGFIN* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::LMCBEJIGFIN*))((::PBYTE)hIl2Cpp + MABDCMABEGN_IOHPHFJBHHC_OFFSET))(this, ECMMKCJLBMD);
	}

	::System::Boolean AIJADDGEPEJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABDCMABEGN_AIJADDGEPEJ_OFFSET))(this);
	}

	::System::Boolean HMBPLIGOJGH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABDCMABEGN_HMBPLIGOJGH_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PBCAAADNEPK, ::System::Single EFNJMBDJCDI, ::System::Single HJMJKCJMBHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MABDCMABEGN_OKJCHFGIKBH_OFFSET))(this, PBCAAADNEPK, EFNJMBDJCDI, HJMJKCJMBHG);
	}

	::System::Void OENOEFBECOA(::System::String* GOMCGPKAKPO, ::System::Single NAIPHNDMNDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MABDCMABEGN_OENOEFBECOA_OFFSET))(this, GOMCGPKAKPO, NAIPHNDMNDI);
	}

	::System::Void FJCAOCLMDBF(::LMCBEJIGFIN* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::LMCBEJIGFIN*))((::PBYTE)hIl2Cpp + MABDCMABEGN_FJCAOCLMDBF_OFFSET))(this, ECMMKCJLBMD);
	}

	::LMCBEJIGFIN* ANPBCLAFCJB(::System::String* MCOHLHMKLIP, ::System::Int32 KDDKDHBELOC, ::System::String* AELLPLBJELA, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Action_1<::System::UInt32>* BFMCBEKBNGF, ::System::Action* OLNAGGLCCOM, ::System::UInt32 BNNEAHHCIDE)
	{
		return ((::LMCBEJIGFIN*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Action_1<::System::UInt32>*, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + MABDCMABEGN_ANPBCLAFCJB_OFFSET))(this, MCOHLHMKLIP, KDDKDHBELOC, AELLPLBJELA, KECKGDFIALJ, BFMCBEKBNGF, OLNAGGLCCOM, BNNEAHHCIDE);
	}
};

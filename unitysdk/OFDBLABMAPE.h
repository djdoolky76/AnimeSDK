#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIDBPNBEKKN.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFDBLABMAPE_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x60ED50)
#define OFDBLABMAPE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x60EAE0)
#define OFDBLABMAPE_EOAIOCIBFIM_OFFSET UNITYSDK_OFFSET(0x60EB60)
#define OFDBLABMAPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x60E980)
#define OFDBLABMAPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x60E970)
#define OFDBLABMAPE_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x60EC40)
#define OFDBLABMAPE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x60EA80)
#define OFDBLABMAPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x60EA60)
#define OFDBLABMAPE_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x60EB80)
#define OFDBLABMAPE_ICONPHLDHDH_OFFSET UNITYSDK_OFFSET(0x60EB70)
#define OFDBLABMAPE_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1006E970)
#define OFDBLABMAPE_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x60EBE0)
#define OFDBLABMAPE_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x60ECF0)
#define OFDBLABMAPE_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1006E7C0)
#define OFDBLABMAPE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x60ED80)
#define OFDBLABMAPE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x60EA90)
#define OFDBLABMAPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x60EA70)
#define OFDBLABMAPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1006E7B0)
#define OFDBLABMAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x60E960)

inline static constexpr unsigned int OFDBLABMAPE_TypeDefinitionIndex = 64464;

struct alignas(8) OFDBLABMAPE
{
	static ::OFDBLABMAPE* StaticGet_FDJHEBHLJLD()
	{
		return (::OFDBLABMAPE*)Il2CppClass::FromTypeDefinitionIndex(OFDBLABMAPE_TypeDefinitionIndex)->GetStaticField(0x36990);
	}
	::System::Collections::Generic::List_1<::PIDBPNBEKKN>* LFMGKPJBKJO; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::PIDBPNBEKKN>* LFMGKPJBKJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PIDBPNBEKKN>*))((::PBYTE)hIl2Cpp + OFDBLABMAPE__CTOR_OFFSET))(this, LFMGKPJBKJO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFDBLABMAPE__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::OFDBLABMAPE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OFDBLABMAPE))((::PBYTE)hIl2Cpp + OFDBLABMAPE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFDBLABMAPE_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_TOSTRING_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::PIDBPNBEKKN>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::PIDBPNBEKKN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::OFDBLABMAPE KILPCOMOCMD, ::OFDBLABMAPE BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::OFDBLABMAPE, ::OFDBLABMAPE))((::PBYTE)hIl2Cpp + OFDBLABMAPE_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void EOAIOCIBFIM(::System::Collections::Generic::IEnumerable_1<::PIDBPNBEKKN>* EBNGDIMHCAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::PIDBPNBEKKN>*))((::PBYTE)hIl2Cpp + OFDBLABMAPE_EOAIOCIBFIM_OFFSET))(this, EBNGDIMHCAP);
	}

	::System::Void ICONPHLDHDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_ICONPHLDHDH_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::OFDBLABMAPE KILPCOMOCMD, ::OFDBLABMAPE BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::OFDBLABMAPE, ::OFDBLABMAPE))((::PBYTE)hIl2Cpp + OFDBLABMAPE_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFDBLABMAPE_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FLHNGDLANDC(::PIDBPNBEKKN MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + OFDBLABMAPE_FLHNGDLANDC_OFFSET))(this, MGOFOAFCFIJ);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Void ANPBCLAFCJB(::PIDBPNBEKKN MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + OFDBLABMAPE_ANPBCLAFCJB_OFFSET))(this, MGOFOAFCFIJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDBLABMAPE_PHOADBJGFBE_OFFSET))(this);
	}
};

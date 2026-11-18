#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIJLFGJIJGG.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMGFCFDABLN_AGOODIBBKIM_OFFSET UNITYSDK_OFFSET(0x778B20)
#define OMGFCFDABLN_APHGPJJCILI_OFFSET UNITYSDK_OFFSET(0x778A00)
#define OMGFCFDABLN_CFNOMAPAIAH_OFFSET UNITYSDK_OFFSET(0x778C50)
#define OMGFCFDABLN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x778CE0)
#define OMGFCFDABLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x7787F0)
#define OMGFCFDABLN_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7789F0)
#define OMGFCFDABLN_GLPOGDBIEJM_OFFSET UNITYSDK_OFFSET(0x778AB0)
#define OMGFCFDABLN_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x15FEDB70)
#define OMGFCFDABLN_JNAPIIJFCPL_OFFSET UNITYSDK_OFFSET(0x778AA0)
#define OMGFCFDABLN_MHKEECNPIHA_OFFSET UNITYSDK_OFFSET(0x778A90)
#define OMGFCFDABLN_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7789E0)
#define OMGFCFDABLN_NABODADEBDN_OFFSET UNITYSDK_OFFSET(0x64F000)
#define OMGFCFDABLN_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x15FEDA50)
#define OMGFCFDABLN_NPFLNANECIG_OFFSET UNITYSDK_OFFSET(0x60E920)
#define OMGFCFDABLN_OCEGGFILEKJ_OFFSET UNITYSDK_OFFSET(0x778BE0)
#define OMGFCFDABLN_PBLCEFJDDKH_OFFSET UNITYSDK_OFFSET(0x778BD0)
#define OMGFCFDABLN_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x778940)
#define OMGFCFDABLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7788C0)
#define OMGFCFDABLN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FECAE0)
#define OMGFCFDABLN__CTOR_OFFSET UNITYSDK_OFFSET(0x7788B0)

inline static constexpr unsigned int OMGFCFDABLN_TypeDefinitionIndex = 51489;

struct alignas(8) OMGFCFDABLN
{
	static ::OMGFCFDABLN* StaticGet_FDJHEBHLJLD()
	{
		return (::OMGFCFDABLN*)Il2CppClass::FromTypeDefinitionIndex(OMGFCFDABLN_TypeDefinitionIndex)->GetStaticField(0x2FAB0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_DIGMGOKDGMN()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OMGFCFDABLN_TypeDefinitionIndex)->GetStaticField(0x2FAC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::KIJLFGJIJGG>** StaticGet_NOAKEKMOLOI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::KIJLFGJIJGG>**)Il2CppClass::FromTypeDefinitionIndex(OMGFCFDABLN_TypeDefinitionIndex)->GetStaticField(0x2FAD0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_OKMEJIELNJN()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OMGFCFDABLN_TypeDefinitionIndex)->GetStaticField(0x2FAD8);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_HOFBGOLOFBO()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OMGFCFDABLN_TypeDefinitionIndex)->GetStaticField(0x2FAE0);
	}
	::System::String* OHINHBIHPAM; // 0x10
	::System::String* PNJCOKBBCOB; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* CIFJHFAFOCI; // 0x18
	::System::Int32 AFANBDINBPD; // 0x20

	::System::Void _ctor(::System::String* ONFBPGCAJJO, ::System::String* MLBNKKKCJGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OMGFCFDABLN__CTOR_OFFSET))(this, ONFBPGCAJJO, MLBNKKKCJGF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMGFCFDABLN__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::OMGFCFDABLN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMGFCFDABLN))((::PBYTE)hIl2Cpp + OMGFCFDABLN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + OMGFCFDABLN_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + OMGFCFDABLN_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean APHGPJJCILI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_APHGPJJCILI_OFFSET))(this);
	}

	::System::Boolean NABODADEBDN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_NABODADEBDN_OFFSET))(this);
	}

	::KIJLFGJIJGG MHKEECNPIHA()
	{
		return ((::KIJLFGJIJGG(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_MHKEECNPIHA_OFFSET))(this);
	}

	::System::String* JNAPIIJFCPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_JNAPIIJFCPL_OFFSET))(this);
	}

	::System::Boolean GLPOGDBIEJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_GLPOGDBIEJM_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::OMGFCFDABLN EJCBEJMGFAJ, ::OMGFCFDABLN EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::OMGFCFDABLN, ::OMGFCFDABLN))((::PBYTE)hIl2Cpp + OMGFCFDABLN_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::OMGFCFDABLN EJCBEJMGFAJ, ::OMGFCFDABLN EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::OMGFCFDABLN, ::OMGFCFDABLN))((::PBYTE)hIl2Cpp + OMGFCFDABLN_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Boolean NPFLNANECIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_NPFLNANECIG_OFFSET))(this);
	}

	/*
	::OMGFCFDABLN AGOODIBBKIM()
	{
		return ((::OMGFCFDABLN(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_AGOODIBBKIM_OFFSET))(this);
	}
	*/

	::System::Boolean PBLCEFJDDKH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_PBLCEFJDDKH_OFFSET))(this);
	}

	::System::Boolean OCEGGFILEKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_OCEGGFILEKJ_OFFSET))(this);
	}

	::System::Boolean CFNOMAPAIAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_CFNOMAPAIAH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGFCFDABLN_DPIHOJBBGLA_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NNCPJPMCHON;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKLKMOLPHBJ_ANMMILPOIEF_OFFSET UNITYSDK_OFFSET(0x1648B210)
#define AKLKMOLPHBJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1648B2A0)
#define AKLKMOLPHBJ_BIBHIODJGOE_OFFSET UNITYSDK_OFFSET(0x1648B500)
#define AKLKMOLPHBJ_CIDIEOAOEOB_OFFSET UNITYSDK_OFFSET(0x1648B4E0)
#define AKLKMOLPHBJ_DABIICENGCJ_OFFSET UNITYSDK_OFFSET(0x1648B4F0)
#define AKLKMOLPHBJ_HMCKOPGINMK_OFFSET UNITYSDK_OFFSET(0x1648B380)
#define AKLKMOLPHBJ_KACBBNNPPGF_OFFSET UNITYSDK_OFFSET(0x1648B510)
#define AKLKMOLPHBJ_KJMIHAKNAKL_OFFSET UNITYSDK_OFFSET(0x1648B200)
#define AKLKMOLPHBJ_KOHNNNFLPKA_OFFSET UNITYSDK_OFFSET(0x1648B410)
#define AKLKMOLPHBJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1648B450)
#define AKLKMOLPHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1648B1F0)

inline static constexpr unsigned int AKLKMOLPHBJ_TypeDefinitionIndex = 56558;

class AKLKMOLPHBJ : public ::System::Object
{
public:
	::System::String* BAJMDFNHLNN; // 0x10
	::System::Collections::Generic::List_1<::NNCPJPMCHON*>* DIFHDMPFKJO; // 0x18
	::System::Double _NBMBJKNNGFD_k__BackingField; // 0x20
	::System::Double _PCBCCGAHHLB_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ__CTOR_OFFSET))(this);
	}

	::System::Double KJMIHAKNAKL()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_KJMIHAKNAKL_OFFSET))(this);
	}

	static ::System::Int32 ANMMILPOIEF(::NNCPJPMCHON* MCGEHIODNKE, ::NNCPJPMCHON* PKHMBCCALGJ)
	{
		return ((::System::Int32(*)(::NNCPJPMCHON*, ::NNCPJPMCHON*))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_ANMMILPOIEF_OFFSET))(MCGEHIODNKE, PKHMBCCALGJ);
	}

	::System::Void BBOMJDBNHIC(::System::String* HIAIKHDFCLN, ::System::Double GIAEPMKCBIB, ::System::Double DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_BBOMJDBNHIC_OFFSET))(this, HIAIKHDFCLN, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::Void HMCKOPGINMK(::NNCPJPMCHON* NFBLPECBPKE)
	{
		return ((::System::Void(*)(::PVOID, ::NNCPJPMCHON*))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_HMCKOPGINMK_OFFSET))(this, NFBLPECBPKE);
	}

	::System::Collections::Generic::List_1<::NNCPJPMCHON*>* KOHNNNFLPKA()
	{
		return ((::System::Collections::Generic::List_1<::NNCPJPMCHON*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_KOHNNNFLPKA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void CIDIEOAOEOB(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_CIDIEOAOEOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DABIICENGCJ(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_DABIICENGCJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double BIBHIODJGOE()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_BIBHIODJGOE_OFFSET))(this);
	}

	::System::Void KACBBNNPPGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLKMOLPHBJ_KACBBNNPPGF_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define BHNJJIFLGDB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x142525C0)
#define BHNJJIFLGDB_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x14252590)
#define BHNJJIFLGDB_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x14252600)
#define BHNJJIFLGDB_CKGKCNCCDGK_OFFSET UNITYSDK_OFFSET(0x14252630)
#define BHNJJIFLGDB_DPJGFIFIKOM_OFFSET UNITYSDK_OFFSET(0x14252650)
#define BHNJJIFLGDB_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x14252610)
#define BHNJJIFLGDB_FCEDNHNBBHB_OFFSET UNITYSDK_OFFSET(0x142525F0)
#define BHNJJIFLGDB_FPBIMKOBPIM_OFFSET UNITYSDK_OFFSET(0x142525D0)
#define BHNJJIFLGDB_LLAKKDELGIL_OFFSET UNITYSDK_OFFSET(0x142525B0)
#define BHNJJIFLGDB_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x142525A0)
#define BHNJJIFLGDB_ODBDPEEPINO_OFFSET UNITYSDK_OFFSET(0x14252640)
#define BHNJJIFLGDB_ONFBLIJJKBE_OFFSET UNITYSDK_OFFSET(0x14252620)
#define BHNJJIFLGDB__CTOR_OFFSET UNITYSDK_OFFSET(0x142525E0)

inline static constexpr unsigned int BHNJJIFLGDB_TypeDefinitionIndex = 92895;

class BHNJJIFLGDB : public ::System::Object
{
public:
	::System::Action* _MLIBDLHKHJB_k__BackingField; // 0x10
	::System::String* _EGLGMLGIPAK_k__BackingField; // 0x18
	::System::String* _EOMOJEGEGKM_k__BackingField; // 0x20
	::System::Boolean _NOCAMJBFPGI_k__BackingField; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x2C
	::System::Int32 _JFPALPENGNB_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJJIFLGDB__CTOR_OFFSET))(this);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Action* LLAKKDELGIL()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_LLAKKDELGIL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean FPBIMKOBPIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_FPBIMKOBPIM_OFFSET))(this);
	}

	::System::Void FCEDNHNBBHB(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_FCEDNHNBBHB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDJLFIGAABO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void ONFBLIJJKBE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_ONFBLIJJKBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CKGKCNCCDGK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_CKGKCNCCDGK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ODBDPEEPINO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_ODBDPEEPINO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DPJGFIFIKOM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHNJJIFLGDB_DPJGFIFIKOM_OFFSET))(this, EGEGIMGMJHN);
	}
};

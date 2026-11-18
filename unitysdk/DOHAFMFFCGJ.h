#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANJODMGKGLK;
class FLBAPBMDLHJ;
namespace System { class String; }

#define DOHAFMFFCGJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1697A580)
#define DOHAFMFFCGJ_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1697A5D0)
#define DOHAFMFFCGJ_BLABKIAMEJL_OFFSET UNITYSDK_OFFSET(0x1697A6E0)
#define DOHAFMFFCGJ_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1697A620)
#define DOHAFMFFCGJ_JINEDNNPKCL_OFFSET UNITYSDK_OFFSET(0x1697A6F0)
#define DOHAFMFFCGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1697A6D0)

inline static constexpr unsigned int DOHAFMFFCGJ_TypeDefinitionIndex = 88972;

class DOHAFMFFCGJ : public ::System::Object
{
public:
	::System::String* _JKFDHBLNIDI_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHAFMFFCGJ__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::FLBAPBMDLHJ* FFAKNCKHEOE)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*))((::PBYTE)hIl2Cpp + DOHAFMFFCGJ_BBOMJDBNHIC_OFFSET))(this, FFAKNCKHEOE);
	}

	::System::Void BJANDJKKNCD(::FLBAPBMDLHJ* FFAKNCKHEOE)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*))((::PBYTE)hIl2Cpp + DOHAFMFFCGJ_BJANDJKKNCD_OFFSET))(this, FFAKNCKHEOE);
	}

	::System::Void GIAOBHOJCDP(::FLBAPBMDLHJ* FFAKNCKHEOE, ::ANJODMGKGLK* FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*, ::ANJODMGKGLK*))((::PBYTE)hIl2Cpp + DOHAFMFFCGJ_GIAOBHOJCDP_OFFSET))(this, FFAKNCKHEOE, FCEIKAIDHPM);
	}

	::System::String* BLABKIAMEJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHAFMFFCGJ_BLABKIAMEJL_OFFSET))(this);
	}

	::System::Void JINEDNNPKCL(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DOHAFMFFCGJ_JINEDNNPKCL_OFFSET))(this, EGEGIMGMJHN);
	}
};

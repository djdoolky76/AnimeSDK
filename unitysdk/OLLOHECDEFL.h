#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class HANODIHCMAN;

#define OLLOHECDEFL_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x1369F240)
#define OLLOHECDEFL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1369EDA0)
#define OLLOHECDEFL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1369F030)
#define OLLOHECDEFL_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x1369F250)
#define OLLOHECDEFL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1369F1B0)
#define OLLOHECDEFL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1369EE70)
#define OLLOHECDEFL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1369EDF0)
#define OLLOHECDEFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1369EED0)

inline static constexpr unsigned int OLLOHECDEFL_TypeDefinitionIndex = 39374;

class OLLOHECDEFL : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x213; // 0x0
	::HANODIHCMAN* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLOHECDEFL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOHECDEFL__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOHECDEFL_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOHECDEFL_ONCLEAN_OFFSET))(this);
	}

	static ::OLLOHECDEFL* JFDOOELFAOA()
	{
		return ((::OLLOHECDEFL*(*)())((::PBYTE)hIl2Cpp + OLLOHECDEFL_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOHECDEFL_MEFBHFEOKGH_OFFSET))(this);
	}

	::HANODIHCMAN* BLIOCCCNKDK()
	{
		return ((::HANODIHCMAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLOHECDEFL_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::HANODIHCMAN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HANODIHCMAN*))((::PBYTE)hIl2Cpp + OLLOHECDEFL_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}
};

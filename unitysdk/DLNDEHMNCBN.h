#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class MNBLIKPHDEA;

#define DLNDEHMNCBN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13E58090)
#define DLNDEHMNCBN_HLOMJBAOOGK_OFFSET UNITYSDK_OFFSET(0x13E581C0)
#define DLNDEHMNCBN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13E581D0)
#define DLNDEHMNCBN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13E58250)
#define DLNDEHMNCBN_OLIFGFDMNII_OFFSET UNITYSDK_OFFSET(0x13E581B0)
#define DLNDEHMNCBN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13E58160)
#define DLNDEHMNCBN__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E580E0)
#define DLNDEHMNCBN__CTOR_OFFSET UNITYSDK_OFFSET(0x13E581A0)

inline static constexpr unsigned int DLNDEHMNCBN_TypeDefinitionIndex = 68720;

class DLNDEHMNCBN : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x235; // 0x0
	::MNBLIKPHDEA* _FILLINLDODG_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNDEHMNCBN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNDEHMNCBN__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNDEHMNCBN_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNDEHMNCBN_ONCLEAN_OFFSET))(this);
	}

	::MNBLIKPHDEA* OLIFGFDMNII()
	{
		return ((::MNBLIKPHDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNDEHMNCBN_OLIFGFDMNII_OFFSET))(this);
	}

	::System::Void HLOMJBAOOGK(::MNBLIKPHDEA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MNBLIKPHDEA*))((::PBYTE)hIl2Cpp + DLNDEHMNCBN_HLOMJBAOOGK_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::DLNDEHMNCBN* JFDOOELFAOA()
	{
		return ((::DLNDEHMNCBN*(*)())((::PBYTE)hIl2Cpp + DLNDEHMNCBN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNDEHMNCBN_MEFBHFEOKGH_OFFSET))(this);
	}
};

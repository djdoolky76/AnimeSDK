#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class PJCFNFFGCPO;

#define IBPIJOHFAGA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15E9E010)
#define IBPIJOHFAGA_IOAIABPBHAE_OFFSET UNITYSDK_OFFSET(0x15E9E290)
#define IBPIJOHFAGA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15E9E180)
#define IBPIJOHFAGA_LJEMCGKECML_OFFSET UNITYSDK_OFFSET(0x15E9E130)
#define IBPIJOHFAGA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15E9E200)
#define IBPIJOHFAGA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15E9E0E0)
#define IBPIJOHFAGA__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E9E060)
#define IBPIJOHFAGA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9E120)

inline static constexpr unsigned int IBPIJOHFAGA_TypeDefinitionIndex = 92382;

class IBPIJOHFAGA : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x239; // 0x0
	::PJCFNFFGCPO* EEGPLJDADKO; // 0x50
	::System::Boolean LIEGMKLCIHI; // 0x58
	::System::Boolean HEKMAIJIAKB; // 0x59
	::System::Boolean FHAJMENGFAP; // 0x5A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBPIJOHFAGA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPIJOHFAGA__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPIJOHFAGA_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPIJOHFAGA_ONCLEAN_OFFSET))(this);
	}

	::System::Void LJEMCGKECML(::PJCFNFFGCPO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PJCFNFFGCPO*))((::PBYTE)hIl2Cpp + IBPIJOHFAGA_LJEMCGKECML_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::IBPIJOHFAGA* JFDOOELFAOA()
	{
		return ((::IBPIJOHFAGA*(*)())((::PBYTE)hIl2Cpp + IBPIJOHFAGA_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPIJOHFAGA_MEFBHFEOKGH_OFFSET))(this);
	}

	::PJCFNFFGCPO* IOAIABPBHAE()
	{
		return ((::PJCFNFFGCPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPIJOHFAGA_IOAIABPBHAE_OFFSET))(this);
	}
};

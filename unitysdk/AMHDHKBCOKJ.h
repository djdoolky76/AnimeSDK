#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class EGJGEPFAKCI;

#define AMHDHKBCOKJ_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x12D08700)
#define AMHDHKBCOKJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12D083B0)
#define AMHDHKBCOKJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12D085A0)
#define AMHDHKBCOKJ_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x12D08710)
#define AMHDHKBCOKJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12D08670)
#define AMHDHKBCOKJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12D08480)
#define AMHDHKBCOKJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D08400)
#define AMHDHKBCOKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D084E0)

inline static constexpr unsigned int AMHDHKBCOKJ_TypeDefinitionIndex = 65937;

class AMHDHKBCOKJ : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x211; // 0x0
	::EGJGEPFAKCI* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHDHKBCOKJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDHKBCOKJ__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDHKBCOKJ_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDHKBCOKJ_ONCLEAN_OFFSET))(this);
	}

	static ::AMHDHKBCOKJ* JFDOOELFAOA()
	{
		return ((::AMHDHKBCOKJ*(*)())((::PBYTE)hIl2Cpp + AMHDHKBCOKJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDHKBCOKJ_MEFBHFEOKGH_OFFSET))(this);
	}

	::EGJGEPFAKCI* BLIOCCCNKDK()
	{
		return ((::EGJGEPFAKCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDHKBCOKJ_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::EGJGEPFAKCI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EGJGEPFAKCI*))((::PBYTE)hIl2Cpp + AMHDHKBCOKJ_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}
};

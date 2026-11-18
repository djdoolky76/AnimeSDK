#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class DFJJIJBDDJF;

#define FLDBOCMKLEF_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x179B3E30)
#define FLDBOCMKLEF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x179B3CB0)
#define FLDBOCMKLEF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x179B3ED0)
#define FLDBOCMKLEF_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x179B3E20)
#define FLDBOCMKLEF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x179B3E40)
#define FLDBOCMKLEF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x179B3D80)
#define FLDBOCMKLEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x179B3D00)
#define FLDBOCMKLEF__CTOR_OFFSET UNITYSDK_OFFSET(0x179B3E00)

inline static constexpr unsigned int FLDBOCMKLEF_TypeDefinitionIndex = 74814;

class FLDBOCMKLEF : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x216; // 0x0
	::DFJJIJBDDJF* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLDBOCMKLEF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDBOCMKLEF__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDBOCMKLEF_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDBOCMKLEF_ONCLEAN_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::DFJJIJBDDJF* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DFJJIJBDDJF*))((::PBYTE)hIl2Cpp + FLDBOCMKLEF_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::DFJJIJBDDJF* BLIOCCCNKDK()
	{
		return ((::DFJJIJBDDJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDBOCMKLEF_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDBOCMKLEF_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::FLDBOCMKLEF* JFDOOELFAOA()
	{
		return ((::FLDBOCMKLEF*(*)())((::PBYTE)hIl2Cpp + FLDBOCMKLEF_JFDOOELFAOA_OFFSET))();
	}
};

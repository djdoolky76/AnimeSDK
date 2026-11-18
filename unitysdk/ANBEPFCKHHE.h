#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class PNIMLALFDGO;

#define ANBEPFCKHHE_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x1422F4F0)
#define ANBEPFCKHHE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1422F230)
#define ANBEPFCKHHE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1422F420)
#define ANBEPFCKHHE_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x1422F500)
#define ANBEPFCKHHE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1422F510)
#define ANBEPFCKHHE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1422F300)
#define ANBEPFCKHHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1422F280)
#define ANBEPFCKHHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1422F360)

inline static constexpr unsigned int ANBEPFCKHHE_TypeDefinitionIndex = 50412;

class ANBEPFCKHHE : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x214; // 0x0
	::PNIMLALFDGO* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANBEPFCKHHE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBEPFCKHHE__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBEPFCKHHE_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBEPFCKHHE_ONCLEAN_OFFSET))(this);
	}

	static ::ANBEPFCKHHE* JFDOOELFAOA()
	{
		return ((::ANBEPFCKHHE*(*)())((::PBYTE)hIl2Cpp + ANBEPFCKHHE_JFDOOELFAOA_OFFSET))();
	}

	::PNIMLALFDGO* BLIOCCCNKDK()
	{
		return ((::PNIMLALFDGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBEPFCKHHE_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::PNIMLALFDGO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PNIMLALFDGO*))((::PBYTE)hIl2Cpp + ANBEPFCKHHE_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBEPFCKHHE_MEFBHFEOKGH_OFFSET))(this);
	}
};

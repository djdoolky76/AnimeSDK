#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class EHIKJIHANOB;

#define LBFBCJGMGPP_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x126CAE50)
#define LBFBCJGMGPP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x126CAB90)
#define LBFBCJGMGPP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x126CAD80)
#define LBFBCJGMGPP_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x126CAEF0)
#define LBFBCJGMGPP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x126CAE60)
#define LBFBCJGMGPP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x126CAC60)
#define LBFBCJGMGPP__CCTOR_OFFSET UNITYSDK_OFFSET(0x126CABE0)
#define LBFBCJGMGPP__CTOR_OFFSET UNITYSDK_OFFSET(0x126CACC0)

inline static constexpr unsigned int LBFBCJGMGPP_TypeDefinitionIndex = 85496;

class LBFBCJGMGPP : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x203; // 0x0
	::EHIKJIHANOB* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFBCJGMGPP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFBCJGMGPP__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFBCJGMGPP_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFBCJGMGPP_ONCLEAN_OFFSET))(this);
	}

	static ::LBFBCJGMGPP* JFDOOELFAOA()
	{
		return ((::LBFBCJGMGPP*(*)())((::PBYTE)hIl2Cpp + LBFBCJGMGPP_JFDOOELFAOA_OFFSET))();
	}

	::EHIKJIHANOB* BLIOCCCNKDK()
	{
		return ((::EHIKJIHANOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFBCJGMGPP_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFBCJGMGPP_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::EHIKJIHANOB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EHIKJIHANOB*))((::PBYTE)hIl2Cpp + LBFBCJGMGPP_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIMEBLOJNCB_HKPPHKELIKH.h"
#include "unitysdk/JHKOPDIHKJK.h"

class AGJFDPBLDDF;
namespace System { class Action; }

#define GIMEBLOJNCB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16CC8690)
#define GIMEBLOJNCB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16CC8910)
#define GIMEBLOJNCB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16CC8880)
#define GIMEBLOJNCB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16CC8760)
#define GIMEBLOJNCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CC86E0)
#define GIMEBLOJNCB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC8870)

inline static constexpr unsigned int GIMEBLOJNCB_TypeDefinitionIndex = 42717;

class GIMEBLOJNCB : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x222; // 0x0
	::System::Action* CGGLMEEHLKB; // 0x50
	::AGJFDPBLDDF* OOPMMNLGNLJ; // 0x58
	::GIMEBLOJNCB_HKPPHKELIKH LGEOOBHMAPF; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMEBLOJNCB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMEBLOJNCB__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMEBLOJNCB_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMEBLOJNCB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMEBLOJNCB_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::GIMEBLOJNCB* JFDOOELFAOA()
	{
		return ((::GIMEBLOJNCB*(*)())((::PBYTE)hIl2Cpp + GIMEBLOJNCB_JFDOOELFAOA_OFFSET))();
	}
};

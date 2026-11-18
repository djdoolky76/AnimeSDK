#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define BJBCELGBBPO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1856E5F0)
#define BJBCELGBBPO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1856E560)
#define BJBCELGBBPO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1856E4D0)
#define BJBCELGBBPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1856E450)
#define BJBCELGBBPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1856E4C0)

inline static constexpr unsigned int BJBCELGBBPO_TypeDefinitionIndex = 83778;

class BJBCELGBBPO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x12C; // 0x0
	::System::String* BHDNBGLCNOM; // 0x20
	::System::Single EGEGIMGMJHN; // 0x28
	::System::UInt32 NMPJMCCBNLO; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJBCELGBBPO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBCELGBBPO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBCELGBBPO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBCELGBBPO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NMPJMCCBNLO, ::System::UInt32 JHGKGEGGGFF, ::System::String* NAPFALLANDL, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BJBCELGBBPO_CNHBDOMKKDE_OFFSET))(this, NMPJMCCBNLO, JHGKGEGGGFF, NAPFALLANDL, EGEGIMGMJHN);
	}
};

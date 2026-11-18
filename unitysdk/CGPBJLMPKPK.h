#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define CGPBJLMPKPK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x128F0C20)
#define CGPBJLMPKPK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x128F0B90)
#define CGPBJLMPKPK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x128F0B00)
#define CGPBJLMPKPK__CCTOR_OFFSET UNITYSDK_OFFSET(0x128F0A80)
#define CGPBJLMPKPK__CTOR_OFFSET UNITYSDK_OFFSET(0x128F0AF0)

inline static constexpr unsigned int CGPBJLMPKPK_TypeDefinitionIndex = 52772;

class CGPBJLMPKPK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xEC; // 0x0
	::System::String* DPHONIJGNNP; // 0x20
	::System::UInt32 FJGHGECLCDI; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGPBJLMPKPK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPBJLMPKPK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPBJLMPKPK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPBJLMPKPK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 FJGHGECLCDI, ::System::String* DPHONIJGNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CGPBJLMPKPK_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, FJGHGECLCDI, DPHONIJGNNP);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class String; }

#define FGKNOFHDHAB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15E5FA70)
#define FGKNOFHDHAB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15E5FB50)
#define FGKNOFHDHAB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15E5FBD0)
#define FGKNOFHDHAB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15E5FA10)
#define FGKNOFHDHAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E5FAC0)
#define FGKNOFHDHAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5FB40)

inline static constexpr unsigned int FGKNOFHDHAB_TypeDefinitionIndex = 41781;

class FGKNOFHDHAB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x95; // 0x0
	::System::String* HBOAAPFHHFC; // 0x48
	::System::String* PACMGKEKHJI; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGKNOFHDHAB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKNOFHDHAB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKNOFHDHAB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKNOFHDHAB_GETCLASSID_OFFSET))(this);
	}

	static ::FGKNOFHDHAB* JFDOOELFAOA()
	{
		return ((::FGKNOFHDHAB*(*)())((::PBYTE)hIl2Cpp + FGKNOFHDHAB_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKNOFHDHAB_MEFBHFEOKGH_OFFSET))(this);
	}
};

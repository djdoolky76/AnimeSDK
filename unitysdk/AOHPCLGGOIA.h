#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOHPCLGGOIA_OBMHHIBNNAN.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define AOHPCLGGOIA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x185428F0)
#define AOHPCLGGOIA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18542950)
#define AOHPCLGGOIA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x185427C0)
#define AOHPCLGGOIA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x18542850)
#define AOHPCLGGOIA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x185426C0)
#define AOHPCLGGOIA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18542740)
#define AOHPCLGGOIA__CTOR_OFFSET UNITYSDK_OFFSET(0x185427B0)

inline static constexpr unsigned int AOHPCLGGOIA_TypeDefinitionIndex = 60306;

class AOHPCLGGOIA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x14D; // 0x0
	::System::String* IFIKDGDNHFO; // 0x20
	::AOHPCLGGOIA_OBMHHIBNNAN FKMHMOELCIO; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOHPCLGGOIA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHPCLGGOIA__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHPCLGGOIA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHPCLGGOIA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHPCLGGOIA_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::AOHPCLGGOIA_OBMHHIBNNAN FKMHMOELCIO, ::System::String* IFIKDGDNHFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOHPCLGGOIA_OBMHHIBNNAN, ::System::String*))((::PBYTE)hIl2Cpp + AOHPCLGGOIA_CNHBDOMKKDE_OFFSET))(this, FKMHMOELCIO, IFIKDGDNHFO);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHPCLGGOIA_FIGPAOKNJLN_OFFSET))(this);
	}
};

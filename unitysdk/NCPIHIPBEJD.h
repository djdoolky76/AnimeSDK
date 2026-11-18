#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMBPPHMDPFI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCPIHIPBEJD_FHKBNFGDOBG_OFFSET UNITYSDK_OFFSET(0x11580180)
#define NCPIHIPBEJD_HFNIBBPKBNB_OFFSET UNITYSDK_OFFSET(0x11580210)
#define NCPIHIPBEJD_NHDNBKALLEC_OFFSET UNITYSDK_OFFSET(0x11580440)
#define NCPIHIPBEJD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x115804D0)
#define NCPIHIPBEJD__CTOR_OFFSET UNITYSDK_OFFSET(0x11580100)

inline static constexpr unsigned int NCPIHIPBEJD_TypeDefinitionIndex = 63174;

class NCPIHIPBEJD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::OMBPPHMDPFI*>* PDPIPHIIAPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPIHIPBEJD__CTOR_OFFSET))(this);
	}

	::System::Void FHKBNFGDOBG(::OMBPPHMDPFI* JHEAOGOHIAL)
	{
		return ((::System::Void(*)(::PVOID, ::OMBPPHMDPFI*))((::PBYTE)hIl2Cpp + NCPIHIPBEJD_FHKBNFGDOBG_OFFSET))(this, JHEAOGOHIAL);
	}

	::System::Boolean HFNIBBPKBNB(::System::String* MCOHLHMKLIP, ::OMBPPHMDPFI*& JHEAOGOHIAL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::OMBPPHMDPFI*&))((::PBYTE)hIl2Cpp + NCPIHIPBEJD_HFNIBBPKBNB_OFFSET))(this, MCOHLHMKLIP, JHEAOGOHIAL);
	}

	::System::Void NHDNBKALLEC(::OMBPPHMDPFI* JHEAOGOHIAL)
	{
		return ((::System::Void(*)(::PVOID, ::OMBPPHMDPFI*))((::PBYTE)hIl2Cpp + NCPIHIPBEJD_NHDNBKALLEC_OFFSET))(this, JHEAOGOHIAL);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPIHIPBEJD_PHOADBJGFBE_OFFSET))(this);
	}
};

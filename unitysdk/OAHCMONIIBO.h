#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class String; }

#define OAHCMONIIBO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB304930)
#define OAHCMONIIBO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xB304AA0)
#define OAHCMONIIBO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xB304A10)
#define OAHCMONIIBO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB3048E0)
#define OAHCMONIIBO__CCTOR_OFFSET UNITYSDK_OFFSET(0xB304980)
#define OAHCMONIIBO__CTOR_OFFSET UNITYSDK_OFFSET(0xB304A00)

inline static constexpr unsigned int OAHCMONIIBO_TypeDefinitionIndex = 52700;

class OAHCMONIIBO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC3; // 0x0
	::System::String* IGAAKDOIPNN; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAHCMONIIBO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHCMONIIBO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHCMONIIBO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHCMONIIBO_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHCMONIIBO_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::OAHCMONIIBO* JFDOOELFAOA()
	{
		return ((::OAHCMONIIBO*(*)())((::PBYTE)hIl2Cpp + OAHCMONIIBO_JFDOOELFAOA_OFFSET))();
	}
};

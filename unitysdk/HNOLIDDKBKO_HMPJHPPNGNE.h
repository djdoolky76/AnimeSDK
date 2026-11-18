#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMFAHGEFDFJ;

#define HNOLIDDKBKO_HMPJHPPNGNE_COMPARE_OFFSET UNITYSDK_OFFSET(0x140C36A0)
#define HNOLIDDKBKO_HMPJHPPNGNE__CCTOR_OFFSET UNITYSDK_OFFSET(0x140C37B0)
#define HNOLIDDKBKO_HMPJHPPNGNE__CTOR_OFFSET UNITYSDK_OFFSET(0x140C37A0)

inline static constexpr unsigned int HNOLIDDKBKO_HMPJHPPNGNE_TypeDefinitionIndex = 65217;

class HNOLIDDKBKO_HMPJHPPNGNE : public ::System::Object
{
public:
	static ::HNOLIDDKBKO_HMPJHPPNGNE** StaticGet_DDGNFJDLOKA()
	{
		return (::HNOLIDDKBKO_HMPJHPPNGNE**)Il2CppClass::FromTypeDefinitionIndex(HNOLIDDKBKO_HMPJHPPNGNE_TypeDefinitionIndex)->GetStaticField(0x32280);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOLIDDKBKO_HMPJHPPNGNE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNOLIDDKBKO_HMPJHPPNGNE__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::AMFAHGEFDFJ* HAAEBCOBKFF, ::AMFAHGEFDFJ* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::AMFAHGEFDFJ*, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + HNOLIDDKBKO_HMPJHPPNGNE_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};

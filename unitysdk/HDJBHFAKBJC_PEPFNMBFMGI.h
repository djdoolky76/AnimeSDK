#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMFAHGEFDFJ;
class HDJBHFAKBJC_MJNNDOPDJFM;

#define HDJBHFAKBJC_PEPFNMBFMGI_COMPARE_OFFSET UNITYSDK_OFFSET(0x16F24BF0)
#define HDJBHFAKBJC_PEPFNMBFMGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F24CA0)
#define HDJBHFAKBJC_PEPFNMBFMGI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24C60)

inline static constexpr unsigned int HDJBHFAKBJC_PEPFNMBFMGI_TypeDefinitionIndex = 76676;

class HDJBHFAKBJC_PEPFNMBFMGI : public ::System::Object
{
public:
	static ::HDJBHFAKBJC_PEPFNMBFMGI** StaticGet_DDGNFJDLOKA()
	{
		return (::HDJBHFAKBJC_PEPFNMBFMGI**)Il2CppClass::FromTypeDefinitionIndex(HDJBHFAKBJC_PEPFNMBFMGI_TypeDefinitionIndex)->GetStaticField(0x3DE50);
	}
	::HDJBHFAKBJC_MJNNDOPDJFM* JFGMKCELIBO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJBHFAKBJC_PEPFNMBFMGI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDJBHFAKBJC_PEPFNMBFMGI__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::AMFAHGEFDFJ* HAAEBCOBKFF, ::AMFAHGEFDFJ* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::AMFAHGEFDFJ*, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + HDJBHFAKBJC_PEPFNMBFMGI_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JHPLGJMKHKG_CGNKLBAOMFB_NNHHLPNDGPP_OFFSET UNITYSDK_OFFSET(0x17B268B0)
#define JHPLGJMKHKG_CGNKLBAOMFB_PAAMKIEOKBB_OFFSET UNITYSDK_OFFSET(0x17B268A0)
#define JHPLGJMKHKG_CGNKLBAOMFB__CTOR_OFFSET UNITYSDK_OFFSET(0x17B26890)

inline static constexpr unsigned int JHPLGJMKHKG_CGNKLBAOMFB_TypeDefinitionIndex = 69881;

class JHPLGJMKHKG_CGNKLBAOMFB : public ::System::Object
{
public:
	::System::Int32 NGCOMLCJJFE; // 0x10
	::System::Int32 LNGBHJGBOMI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPLGJMKHKG_CGNKLBAOMFB__CTOR_OFFSET))(this);
	}

	::System::Boolean PAAMKIEOKBB(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHPLGJMKHKG_CGNKLBAOMFB_PAAMKIEOKBB_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean NNHHLPNDGPP(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHPLGJMKHKG_CGNKLBAOMFB_NNHHLPNDGPP_OFFSET))(this, HAAEBCOBKFF);
	}
};

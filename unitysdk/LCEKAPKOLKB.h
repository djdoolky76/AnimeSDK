#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCNCALJFGPN;
template <typename T> class GOIBCOFFLKJ_1;

#define LCEKAPKOLKB_DJJCINEHGAA_OFFSET UNITYSDK_OFFSET(0x1F7A4970)
#define LCEKAPKOLKB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1F7A48C0)
#define LCEKAPKOLKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7A4860)

inline static constexpr unsigned int LCEKAPKOLKB_TypeDefinitionIndex = 29102;

class LCEKAPKOLKB : public ::System::Object
{
public:
	static ::GOIBCOFFLKJ_1<::BCNCALJFGPN*>** StaticGet_AIBLPKLIGNK()
	{
		return (::GOIBCOFFLKJ_1<::BCNCALJFGPN*>**)Il2CppClass::FromTypeDefinitionIndex(LCEKAPKOLKB_TypeDefinitionIndex)->GetStaticField(0x25F20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCEKAPKOLKB__CCTOR_OFFSET))();
	}

	static ::BCNCALJFGPN* JFDOOELFAOA()
	{
		return ((::BCNCALJFGPN*(*)())((::PBYTE)hIl2Cpp + LCEKAPKOLKB_JFDOOELFAOA_OFFSET))();
	}

	static ::System::Void DJJCINEHGAA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCEKAPKOLKB_DJJCINEHGAA_OFFSET))();
	}
};

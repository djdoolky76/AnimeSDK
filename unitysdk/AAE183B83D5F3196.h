#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A6A684AACF63E6A6/B2FBDF88D68B246E.h"
#include "unitysdk/System/Object.h"

class F2CFEC70BCFE5B1E;

#define AAE183B83D5F3196_B8470BE2784A2F7A_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define AAE183B83D5F3196__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E984B0)

inline static constexpr unsigned int AAE183B83D5F3196_TypeDefinitionIndex = 14968;

class AAE183B83D5F3196 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_F2B63D1C11115A47()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AAE183B83D5F3196_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::A6A684AACF63E6A6::B2FBDF88D68B246E* StaticGet_F96DC5682BB29350()
	{
		return (::A6A684AACF63E6A6::B2FBDF88D68B246E*)Il2CppClass::FromTypeDefinitionIndex(AAE183B83D5F3196_TypeDefinitionIndex)->GetStaticField(0x4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAE183B83D5F3196__CCTOR_OFFSET))();
	}

	static ::System::Boolean B8470BE2784A2F7A(::F2CFEC70BCFE5B1E* B657584D50B81BBF)
	{
		return ((::System::Boolean(*)(::F2CFEC70BCFE5B1E*))((::PBYTE)hIl2Cpp + AAE183B83D5F3196_B8470BE2784A2F7A_OFFSET))(B657584D50B81BBF);
	}
};

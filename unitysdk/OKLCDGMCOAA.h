#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LAPIFBGFPLG.h"
#include "unitysdk/System/Object.h"

#define OKLCDGMCOAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6709C0)

inline static constexpr unsigned int OKLCDGMCOAA_TypeDefinitionIndex = 95174;

class OKLCDGMCOAA : public ::System::Object
{
public:
	static ::Il2CppArray<::LAPIFBGFPLG>** StaticGet_AJBAFDNKEBD()
	{
		return (::Il2CppArray<::LAPIFBGFPLG>**)Il2CppClass::FromTypeDefinitionIndex(OKLCDGMCOAA_TypeDefinitionIndex)->GetStaticField(0x52AC0);
	}
	static ::Il2CppArray<::LAPIFBGFPLG>** StaticGet_LFOGGDKDOKH()
	{
		return (::Il2CppArray<::LAPIFBGFPLG>**)Il2CppClass::FromTypeDefinitionIndex(OKLCDGMCOAA_TypeDefinitionIndex)->GetStaticField(0x52AC8);
	}
	static ::Il2CppArray<::LAPIFBGFPLG>** StaticGet_BJNBOBNCOFF()
	{
		return (::Il2CppArray<::LAPIFBGFPLG>**)Il2CppClass::FromTypeDefinitionIndex(OKLCDGMCOAA_TypeDefinitionIndex)->GetStaticField(0x52AD0);
	}
	static ::Il2CppArray<::LAPIFBGFPLG>** StaticGet_GPJMENCEDEJ()
	{
		return (::Il2CppArray<::LAPIFBGFPLG>**)Il2CppClass::FromTypeDefinitionIndex(OKLCDGMCOAA_TypeDefinitionIndex)->GetStaticField(0x52AD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKLCDGMCOAA__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FEB9B321D6635272_A915B3057C604144_OFFSET UNITYSDK_OFFSET(0x3F23B90)
#define FEB9B321D6635272__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F23C00)

inline static constexpr unsigned int FEB9B321D6635272_TypeDefinitionIndex = 20084;

class FEB9B321D6635272 : public ::System::Object
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet_E2A9852917FB0B68()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FEB9B321D6635272_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void A915B3057C604144(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FEB9B321D6635272_A915B3057C604144_OFFSET))(E5EB06E4FD2C32F7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEB9B321D6635272__CCTOR_OFFSET))();
	}
};

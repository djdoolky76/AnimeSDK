#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define LOGEGDFLIJD___C_BCDPODPNCDC_OFFSET UNITYSDK_OFFSET(0x14D3FB50)
#define LOGEGDFLIJD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D3FB00)
#define LOGEGDFLIJD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3FB40)

inline static constexpr unsigned int LOGEGDFLIJD___c_TypeDefinitionIndex = 58406;

class LOGEGDFLIJD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LOGEGDFLIJD___c_TypeDefinitionIndex)->GetStaticField(0x4E710);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LOGEGDFLIJD___c_TypeDefinitionIndex)->GetStaticField(0x4E718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGEGDFLIJD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGEGDFLIJD___C__CTOR_OFFSET))(this);
	}

	::System::String* BCDPODPNCDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGEGDFLIJD___C_BCDPODPNCDC_OFFSET))(this);
	}
};

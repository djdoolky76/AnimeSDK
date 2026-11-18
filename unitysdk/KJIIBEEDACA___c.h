#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KJIIBEEDACA___C_NDJADLHJPIP_OFFSET UNITYSDK_OFFSET(0x15B96910)
#define KJIIBEEDACA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B968C0)
#define KJIIBEEDACA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B96900)

inline static constexpr unsigned int KJIIBEEDACA___c_TypeDefinitionIndex = 93031;

class KJIIBEEDACA___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__9_7()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KJIIBEEDACA___c_TypeDefinitionIndex)->GetStaticField(0x3E530);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KJIIBEEDACA___c_TypeDefinitionIndex)->GetStaticField(0x3E538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJIIBEEDACA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIIBEEDACA___C__CTOR_OFFSET))(this);
	}

	::System::String* NDJADLHJPIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIIBEEDACA___C_NDJADLHJPIP_OFFSET))(this);
	}
};

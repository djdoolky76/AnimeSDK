#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIANEKPLNNB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1318EC70)

inline static constexpr unsigned int MIANEKPLNNB_TypeDefinitionIndex = 83032;

class MIANEKPLNNB : public ::System::Object
{
public:
	static ::System::String** StaticGet_KBNFFOGKBEM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MIANEKPLNNB_TypeDefinitionIndex)->GetStaticField(0x4BFC0);
	}
	// static const ::System::String* HFAGCGKLOJN; // 0x0
	// static const ::System::String* PGNNJPEPCAG; // 0x0
	// static const ::System::String* KJOPDMLLOKG; // 0x0
	// static const ::System::String* OLIFPPNOGAJ; // 0x0
	// static const ::System::String* JDNCAMAALMC; // 0x0
	// static const ::System::String* LMOCNHAHLIJ; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIANEKPLNNB__CCTOR_OFFSET))();
	}
};

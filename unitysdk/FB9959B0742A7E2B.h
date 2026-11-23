#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FB9959B0742A7E2B_AF716015D2E7609B_OFFSET UNITYSDK_OFFSET(0x3959D30)
#define FB9959B0742A7E2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FB9959B0742A7E2B_TypeDefinitionIndex = 12486;

class FB9959B0742A7E2B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB9959B0742A7E2B__CTOR_OFFSET))(this);
	}

	static ::System::String* AF716015D2E7609B(::System::String* BB2342E8F43B62EA)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FB9959B0742A7E2B_AF716015D2E7609B_OFFSET))(BB2342E8F43B62EA);
	}
};

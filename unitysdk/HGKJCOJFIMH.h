#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHNMDPFKELC;

#define HGKJCOJFIMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C452C20)
#define HGKJCOJFIMH_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0x1C452BA0)

inline static constexpr unsigned int HGKJCOJFIMH_TypeDefinitionIndex = 81954;

	class HGKJCOJFIMH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKJCOJFIMH_CTOR_OFFSET))(this);
		}

		::EHNMDPFKELC* EPCCCIKOHJI(::EHNMDPFKELC* a1)
		{
			return ((::EHNMDPFKELC*(*)(::PVOID, ::EHNMDPFKELC*))((::PBYTE)hIl2Cpp + HGKJCOJFIMH_EPCCCIKOHJI_OFFSET))(this, a1);
		}

	};

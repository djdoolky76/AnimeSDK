#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMDKMIJLJFH.h"
class FDGPOGKILAJ;

#define BOGAMPIOBED_CTOR_OFFSET UNITYSDK_OFFSET(0xC18E500)

inline static constexpr unsigned int BOGAMPIOBED_TypeDefinitionIndex = 77628;

	class BOGAMPIOBED : public ::HMDKMIJLJFH
	{
	public:
		::System::Void _ctor(::FDGPOGKILAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDGPOGKILAJ*))((::PBYTE)hIl2Cpp + BOGAMPIOBED_CTOR_OFFSET))(this, a1);
		}

	};

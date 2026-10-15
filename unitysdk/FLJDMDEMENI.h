#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLJDMDEMENI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA71240)

inline static constexpr unsigned int FLJDMDEMENI_TypeDefinitionIndex = 43776;

	class FLJDMDEMENI : public ::System::Object
	{
	public:
		::System::Single BGCCFFPEALM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJDMDEMENI_CTOR_OFFSET))(this);
		}

	};

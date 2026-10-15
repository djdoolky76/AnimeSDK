#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Object.h"

#define CBHCLAFLPKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AEA90)

inline static constexpr unsigned int CBHCLAFLPKI_TypeDefinitionIndex = 43277;

	class CBHCLAFLPKI : public ::System::Object
	{
	public:
		::KLNKLOMDIIC HGIIPPHFNIP; // 0x10
		::KLNKLOMDIIC ADKGNFINANA; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHCLAFLPKI_CTOR_OFFSET))(this);
		}

	};

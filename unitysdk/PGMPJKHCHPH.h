#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAJLLHGOPMH;

#define PGMPJKHCHPH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B0A0510)
#define PGMPJKHCHPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A0570)

inline static constexpr unsigned int PGMPJKHCHPH_TypeDefinitionIndex = 37771;

	class PGMPJKHCHPH : public ::System::Object
	{
	public:
		::OAJLLHGOPMH* LCPEEHIMCNO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMPJKHCHPH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMPJKHCHPH_CLEAR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFLFKJJLJEJ;

#define FFLFKJJLJEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x130EEC30)
#define FFLFKJJLJEJ_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0x130EEBB0)

inline static constexpr unsigned int FFLFKJJLJEJ_TypeDefinitionIndex = 57503;

	class FFLFKJJLJEJ : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLFKJJLJEJ_CTOR_OFFSET))(this);
		}

		::FFLFKJJLJEJ* MJEODHKPKEB()
		{
			return ((::FFLFKJJLJEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLFKJJLJEJ_MJEODHKPKEB_OFFSET))(this);
		}

	};

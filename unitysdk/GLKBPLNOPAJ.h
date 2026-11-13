#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GLKBPLNOPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16C68180)

inline static constexpr unsigned int GLKBPLNOPAJ_TypeDefinitionIndex = 79832;

	class GLKBPLNOPAJ : public ::System::Object
	{
	public:
		::System::UInt32 MIOBMOCCOHF; // 0x10
		::System::Single EGFJNGLOCKO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKBPLNOPAJ_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"

#define HAOLAFIBPAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C14D6A0)
#define HAOLAFIBPAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C14D7B0)

inline static constexpr unsigned int HAOLAFIBPAK_TypeDefinitionIndex = 75926;

	class HAOLAFIBPAK : public ::HPKACEPPPCA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOLAFIBPAK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOLAFIBPAK_CLEAR_OFFSET))(this);
		}

	};

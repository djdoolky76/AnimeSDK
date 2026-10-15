#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"

#define HAOLAFIBPAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B92450)
#define HAOLAFIBPAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B92560)

inline static constexpr unsigned int HAOLAFIBPAK_TypeDefinitionIndex = 73800;

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"

#define HAOLAFIBPAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B9DDB0)
#define HAOLAFIBPAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9DEB0)

inline static constexpr unsigned int HAOLAFIBPAK_TypeDefinitionIndex = 73801;

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

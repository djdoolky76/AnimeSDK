#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;

#define DGHDHELLBBC_CTOR_OFFSET UNITYSDK_OFFSET(0xE84A9D0)
#define DGHDHELLBBC_GET_MOLD_OFFSET UNITYSDK_OFFSET(0xE84A980)
#define DGHDHELLBBC_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xE84A9A0)
#define DGHDHELLBBC_SET_MOLD_OFFSET UNITYSDK_OFFSET(0xE84A990)
#define DGHDHELLBBC_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xE84A9C0)

inline static constexpr unsigned int DGHDHELLBBC_TypeDefinitionIndex = 79487;

	class DGHDHELLBBC : public ::System::Object
	{
	public:
		::CHGHIALKMFM* _Mold_k__BackingField; // 0x10
		::PLHLAIJKMOD _Transform_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHDHELLBBC_CTOR_OFFSET))(this);
		}

		::CHGHIALKMFM* get_Mold()
		{
			return ((::CHGHIALKMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHDHELLBBC_GET_MOLD_OFFSET))(this);
		}

		::System::Void set_Mold(::CHGHIALKMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + DGHDHELLBBC_SET_MOLD_OFFSET))(this, a1);
		}

		::PLHLAIJKMOD get_Transform()
		{
			return ((::PLHLAIJKMOD(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHDHELLBBC_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::PLHLAIJKMOD a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + DGHDHELLBBC_SET_TRANSFORM_OFFSET))(this, a1);
		}

	};

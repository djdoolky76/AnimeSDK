#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HONIFDCKPFM.h"

#define GNPLPKBLGBG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1F990)
#define GNPLPKBLGBG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15B1F930)
#define GNPLPKBLGBG_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15B1F940)

inline static constexpr unsigned int GNPLPKBLGBG_TypeDefinitionIndex = 74008;

	class GNPLPKBLGBG : public ::HONIFDCKPFM
	{
	public:
		::System::Int32 PJKFLONMKED; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GNPLPKBLGBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPLPKBLGBG_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNPLPKBLGBG_SET_VALUE_OFFSET))(this, a1);
		}

	};

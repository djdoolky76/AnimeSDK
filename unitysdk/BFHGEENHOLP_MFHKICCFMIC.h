#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFHGEENHOLP_LuaObjectType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BFHGEENHOLP_MFHKICCFMIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB162920)

inline static constexpr unsigned int BFHGEENHOLP_MFHKICCFMIC_TypeDefinitionIndex = 69480;

	class BFHGEENHOLP_MFHKICCFMIC : public ::System::Object
	{
	public:
		::System::String* MNDFOPKBHKP; // 0x10
		::System::String* OENAMINOLLF; // 0x18
		::System::String* NMAHGFAPENI; // 0x20
		::System::Int32 GMDBHJKEAEI; // 0x28
		::BFHGEENHOLP_LuaObjectType GMPGDEINODK; // 0x2C
		::System::IntPtr BABELILGFOO; // 0x30
		::System::IntPtr CIIFLIOGDHF; // 0x38
		::System::Int32 OGPDIJFMIHM; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHGEENHOLP_MFHKICCFMIC_CTOR_OFFSET))(this);
		}

	};

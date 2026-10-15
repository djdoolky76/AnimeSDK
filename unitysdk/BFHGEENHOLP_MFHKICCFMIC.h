#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFHGEENHOLP_LuaObjectType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BFHGEENHOLP_MFHKICCFMIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1642F0)

inline static constexpr unsigned int BFHGEENHOLP_MFHKICCFMIC_TypeDefinitionIndex = 69480;

	class BFHGEENHOLP_MFHKICCFMIC : public ::System::Object
	{
	public:
		::System::String* NMAHGFAPENI; // 0x10
		::System::String* MNDFOPKBHKP; // 0x18
		::System::String* OENAMINOLLF; // 0x20
		::System::IntPtr BABELILGFOO; // 0x28
		::System::Int32 OGPDIJFMIHM; // 0x30
		::System::Byte _padding0[0x4];
		::System::IntPtr CIIFLIOGDHF; // 0x38
		::System::Int32 GMDBHJKEAEI; // 0x40
		::BFHGEENHOLP_LuaObjectType GMPGDEINODK; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHGEENHOLP_MFHKICCFMIC_CTOR_OFFSET))(this);
		}

	};

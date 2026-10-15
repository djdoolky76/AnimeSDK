#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHDAFDOMINP.h"
class INHCJHBALFC;

#define GBGAMLCHICD_CTOR_OFFSET UNITYSDK_OFFSET(0x159416E0)
#define GBGAMLCHICD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15941220)

inline static constexpr unsigned int GBGAMLCHICD_TypeDefinitionIndex = 54268;

	class GBGAMLCHICD : public ::BHDAFDOMINP
	{
	public:
		::System::UInt32 GNCFHIKODKE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGAMLCHICD_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::INHCJHBALFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHCJHBALFC*))((::PBYTE)hIl2Cpp + GBGAMLCHICD_EXECUTE_OFFSET))(this, a1);
		}

	};

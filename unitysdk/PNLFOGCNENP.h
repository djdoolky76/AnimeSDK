#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;

#define PNLFOGCNENP_CTOR_OFFSET UNITYSDK_OFFSET(0xC34D5F0)

inline static constexpr unsigned int PNLFOGCNENP_TypeDefinitionIndex = 80567;

	class PNLFOGCNENP : public ::System::Object
	{
	public:
		::ECNEEKNHIOE* HNEOOKPBCNK; // 0x10
		::System::UInt32 JGEBKHNJHNJ; // 0x18
		::System::Void _ctor(::ECNEEKNHIOE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::System::UInt32))((::PBYTE)hIl2Cpp + PNLFOGCNENP_CTOR_OFFSET))(this, a1, a2);
		}

	};

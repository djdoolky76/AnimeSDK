#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHDAFDOMINP.h"
class INHCJHBALFC;

#define EKCDEIELDDO_CTOR_OFFSET UNITYSDK_OFFSET(0x164470F0)
#define EKCDEIELDDO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16446EF0)

inline static constexpr unsigned int EKCDEIELDDO_TypeDefinitionIndex = 55431;

	class EKCDEIELDDO : public ::BHDAFDOMINP
	{
	public:
		::System::UInt64 ENJPLJGNMPL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCDEIELDDO_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::INHCJHBALFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHCJHBALFC*))((::PBYTE)hIl2Cpp + EKCDEIELDDO_EXECUTE_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHDAFDOMINP.h"
class INHCJHBALFC;

#define KMGHLKEPCHI_CTOR_OFFSET UNITYSDK_OFFSET(0x18F74480)
#define KMGHLKEPCHI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18F743E0)

inline static constexpr unsigned int KMGHLKEPCHI_TypeDefinitionIndex = 55428;

	class KMGHLKEPCHI : public ::BHDAFDOMINP
	{
	public:
		::System::Boolean JMGPHNKLFDO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGHLKEPCHI_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::INHCJHBALFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHCJHBALFC*))((::PBYTE)hIl2Cpp + KMGHLKEPCHI_EXECUTE_OFFSET))(this, a1);
		}

	};

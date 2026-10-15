#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHDAFDOMINP.h"
class GJEMBJDCAPG;
class INHCJHBALFC;
class JEFCCHAPOLA;

#define IPLBHJDFDEF_CTOR_OFFSET UNITYSDK_OFFSET(0x16516D20)
#define IPLBHJDFDEF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16516C70)

inline static constexpr unsigned int IPLBHJDFDEF_TypeDefinitionIndex = 54266;

	class IPLBHJDFDEF : public ::BHDAFDOMINP
	{
	public:
		::Il2CppArray<::JEFCCHAPOLA*>* CNIJIJMEPEF; // 0x20
		::Il2CppArray<::GJEMBJDCAPG*>* COLOHMBFKIH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLBHJDFDEF_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::INHCJHBALFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHCJHBALFC*))((::PBYTE)hIl2Cpp + IPLBHJDFDEF_EXECUTE_OFFSET))(this, a1);
		}

	};

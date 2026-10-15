#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMNJCDDMLHI;

#define LLLOAGEDCOB_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0xB7748A0)
#define LLLOAGEDCOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7748F0)
#define LLLOAGEDCOB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB774840)
#define LLLOAGEDCOB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB7747F0)

inline static constexpr unsigned int LLLOAGEDCOB_TypeDefinitionIndex = 77945;

	class LLLOAGEDCOB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLOAGEDCOB_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + LLLOAGEDCOB_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + LLLOAGEDCOB_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Void BJPFKNECHPL(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + LLLOAGEDCOB_BJPFKNECHPL_OFFSET))(this, a1);
		}

	};

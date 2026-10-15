#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class HAPKJCJOJLF;

#define FGPNCGAPKAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15763FC0)
#define FGPNCGAPKAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x15763FD0)
#define FGPNCGAPKAL_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x15764020)
#define FGPNCGAPKAL_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x15764040)

inline static constexpr unsigned int FGPNCGAPKAL_TypeDefinitionIndex = 59761;

	class FGPNCGAPKAL : public ::System::Object
	{
	public:
		::RPG::MVector3 MIFKHBDOGLN; // 0x10
		::System::Void _ctor(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FGPNCGAPKAL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::HAPKJCJOJLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAPKJCJOJLF*))((::PBYTE)hIl2Cpp + FGPNCGAPKAL_EQUALS_OFFSET))(this, a1);
		}

		::RPG::MVector3 HHMFILFAMNA()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPNCGAPKAL_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPNCGAPKAL_LDAMHBBILAD_OFFSET))(this);
		}

	};

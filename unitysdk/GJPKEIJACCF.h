#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class LCCKANIHNJM;

#define GJPKEIJACCF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A82660)
#define GJPKEIJACCF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15A82E20)
#define GJPKEIJACCF_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x15A82670)

inline static constexpr unsigned int GJPKEIJACCF_TypeDefinitionIndex = 78257;

	class GJPKEIJACCF : public ::KNFCEJEJINK
	{
	public:
		::LCCKANIHNJM* MKKLHFCCCNF; // 0x18
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::LCCKANIHNJM* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LCCKANIHNJM*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + GJPKEIJACCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPKEIJACCF_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJPKEIJACCF_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};

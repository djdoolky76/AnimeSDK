#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class AEPHFJDPEOE;
class DLECIKAMKEG;

#define FNOBGFDAHNI_BOFGKFBPIOD_OFFSET UNITYSDK_OFFSET(0x16804530)
#define FNOBGFDAHNI_CTOR_OFFSET UNITYSDK_OFFSET(0x168044C0)
#define FNOBGFDAHNI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16804740)
#define FNOBGFDAHNI_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x168044D0)

inline static constexpr unsigned int FNOBGFDAHNI_TypeDefinitionIndex = 80993;

	class FNOBGFDAHNI : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::AEPHFJDPEOE* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::AEPHFJDPEOE* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEPHFJDPEOE*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + FNOBGFDAHNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOBGFDAHNI_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void BOFGKFBPIOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOBGFDAHNI_BOFGKFBPIOD_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNOBGFDAHNI_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};

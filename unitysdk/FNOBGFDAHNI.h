#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class AEPHFJDPEOE;
class DLECIKAMKEG;

#define FNOBGFDAHNI_BOFGKFBPIOD_OFFSET UNITYSDK_OFFSET(0x17F39770)
#define FNOBGFDAHNI_CTOR_OFFSET UNITYSDK_OFFSET(0x17F39700)
#define FNOBGFDAHNI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x17F39980)
#define FNOBGFDAHNI_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x17F39710)

inline static constexpr unsigned int FNOBGFDAHNI_TypeDefinitionIndex = 80992;

	class FNOBGFDAHNI : public ::KNFCEJEJINK
	{
	public:
		::AEPHFJDPEOE* MKKLHFCCCNF; // 0x18
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x20
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

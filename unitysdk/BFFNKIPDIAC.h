#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class LHGFBHEMCLJ;

#define BFFNKIPDIAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB160F90)
#define BFFNKIPDIAC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB1612D0)
#define BFFNKIPDIAC_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB160FA0)

inline static constexpr unsigned int BFFNKIPDIAC_TypeDefinitionIndex = 78266;

	class BFFNKIPDIAC : public ::KNFCEJEJINK
	{
	public:
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x18
		::LHGFBHEMCLJ* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::LHGFBHEMCLJ* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LHGFBHEMCLJ*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + BFFNKIPDIAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFNKIPDIAC_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFFNKIPDIAC_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};

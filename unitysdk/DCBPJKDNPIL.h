#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class DLECIKAMKEG;
class PAEKNBMDMFN;

#define DCBPJKDNPIL_CTOR_OFFSET UNITYSDK_OFFSET(0xE238F20)
#define DCBPJKDNPIL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE239200)
#define DCBPJKDNPIL_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xE238F30)

inline static constexpr unsigned int DCBPJKDNPIL_TypeDefinitionIndex = 78260;

	class DCBPJKDNPIL : public ::KNFCEJEJINK
	{
	public:
		::PAEKNBMDMFN* MKKLHFCCCNF; // 0x18
		::DLECIKAMKEG* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::PAEKNBMDMFN* a1, ::DLECIKAMKEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAEKNBMDMFN*, ::DLECIKAMKEG*))((::PBYTE)hIl2Cpp + DCBPJKDNPIL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBPJKDNPIL_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCBPJKDNPIL_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};

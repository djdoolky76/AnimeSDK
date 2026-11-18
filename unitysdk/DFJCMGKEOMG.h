#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNLAHBLEDOK.h"
#include "unitysdk/Share/EAffixLevel.h"
#include "unitysdk/Share/EArcanaType.h"
#include "unitysdk/LJIIBLMEJCL.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFJCMGKEOMG_LEDNFIPPFPM_OFFSET UNITYSDK_OFFSET(0x1A58F920)
#define DFJCMGKEOMG_LKAEJGAPLMJ_OFFSET UNITYSDK_OFFSET(0x1A58F700)
#define DFJCMGKEOMG_OFGMIFAHBAA_OFFSET UNITYSDK_OFFSET(0x1A58F980)
#define DFJCMGKEOMG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A58F930)
#define DFJCMGKEOMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58F6F0)

inline static constexpr unsigned int DFJCMGKEOMG_TypeDefinitionIndex = 14755;

class DFJCMGKEOMG : public ::GNLAHBLEDOK
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* HFMIKBLLFNJ; // 0x58

	::System::Void _ctor(::LJIIBLMEJCL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LJIIBLMEJCL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DFJCMGKEOMG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void LKAEJGAPLMJ(::System::String* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DFJCMGKEOMG_LKAEJGAPLMJ_OFFSET))(this, HNOPAJLDCFB);
	}

	::Share::EArcanaType LEDNFIPPFPM()
	{
		return ((::Share::EArcanaType(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJCMGKEOMG_LEDNFIPPFPM_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJCMGKEOMG_OJENCMOGDKL_OFFSET))(this);
	}

	::Share::EAffixLevel OFGMIFAHBAA()
	{
		return ((::Share::EAffixLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJCMGKEOMG_OFGMIFAHBAA_OFFSET))(this);
	}
};

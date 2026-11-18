#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFILPJEOEKL.h"
#include "unitysdk/CCAMLNFCKFO.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFFPIHJACGD_EPMJCJAMFKP_OFFSET UNITYSDK_OFFSET(0x1ADD1580)
#define EFFPIHJACGD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1ADD19C0)
#define EFFPIHJACGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD1570)

inline static constexpr unsigned int EFFPIHJACGD_TypeDefinitionIndex = 12602;

class EFFPIHJACGD : public ::CFILPJEOEKL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* AKBJMFGBNPJ; // 0x78

	::System::Void _ctor(::CCAMLNFCKFO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CCAMLNFCKFO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EFFPIHJACGD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void EPMJCJAMFKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFPIHJACGD_EPMJCJAMFKP_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFPIHJACGD_OJENCMOGDKL_OFFSET))(this);
	}
};

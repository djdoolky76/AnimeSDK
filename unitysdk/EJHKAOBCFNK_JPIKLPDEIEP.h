#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_PNEJDCLKPKF;
class EJHKAOBCFNK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJHKAOBCFNK_JPIKLPDEIEP_CHOLOGKDODP_OFFSET UNITYSDK_OFFSET(0xF9D2E60)
#define EJHKAOBCFNK_JPIKLPDEIEP_HHJDNEFGCKM_OFFSET UNITYSDK_OFFSET(0xF9D2CE0)
#define EJHKAOBCFNK_JPIKLPDEIEP__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D2CD0)

inline static constexpr unsigned int EJHKAOBCFNK_JPIKLPDEIEP_TypeDefinitionIndex = 39803;

class EJHKAOBCFNK_JPIKLPDEIEP : public ::System::Object
{
public:
	::EJHKAOBCFNK* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JJBELKNLNIA; // 0x18
	::System::Action* DIENEAELFIL; // 0x20
	::System::String* OLOMNNBBHPJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHKAOBCFNK_JPIKLPDEIEP__CTOR_OFFSET))(this);
	}

	::System::Void HHJDNEFGCKM(::CHFJLNEHAAF_PNEJDCLKPKF* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CHFJLNEHAAF_PNEJDCLKPKF*))((::PBYTE)hIl2Cpp + EJHKAOBCFNK_JPIKLPDEIEP_HHJDNEFGCKM_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void CHOLOGKDODP(::CHFJLNEHAAF_PNEJDCLKPKF* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CHFJLNEHAAF_PNEJDCLKPKF*))((::PBYTE)hIl2Cpp + EJHKAOBCFNK_JPIKLPDEIEP_CHOLOGKDODP_OFFSET))(this, IGAAKDOIPNN);
	}
};

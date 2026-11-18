#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_PNEJDCLKPKF;
class EJHKAOBCFNK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJHKAOBCFNK_EEFLNNLCKNH_AMJBFIDELFI_OFFSET UNITYSDK_OFFSET(0x1354D3D0)
#define EJHKAOBCFNK_EEFLNNLCKNH_IBLKMPLPIGL_OFFSET UNITYSDK_OFFSET(0x1354D640)
#define EJHKAOBCFNK_EEFLNNLCKNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1354D3C0)

inline static constexpr unsigned int EJHKAOBCFNK_EEFLNNLCKNH_TypeDefinitionIndex = 39807;

class EJHKAOBCFNK_EEFLNNLCKNH : public ::System::Object
{
public:
	::System::String* OLOMNNBBHPJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JJBELKNLNIA; // 0x18
	::System::Action* DIENEAELFIL; // 0x20
	::EJHKAOBCFNK* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHKAOBCFNK_EEFLNNLCKNH__CTOR_OFFSET))(this);
	}

	::System::Void AMJBFIDELFI(::CHFJLNEHAAF_PNEJDCLKPKF* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CHFJLNEHAAF_PNEJDCLKPKF*))((::PBYTE)hIl2Cpp + EJHKAOBCFNK_EEFLNNLCKNH_AMJBFIDELFI_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void IBLKMPLPIGL(::CHFJLNEHAAF_PNEJDCLKPKF* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CHFJLNEHAAF_PNEJDCLKPKF*))((::PBYTE)hIl2Cpp + EJHKAOBCFNK_EEFLNNLCKNH_IBLKMPLPIGL_OFFSET))(this, IGAAKDOIPNN);
	}
};

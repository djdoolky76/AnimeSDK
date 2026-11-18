#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMKPJHFHLLM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class BPHGNMNLLHF;
class OIOMDBNBLLH;
namespace MoleMole { class UIRoleSelectPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPLBDAMOCAP_GMDFCHBKEAO_OFFSET UNITYSDK_OFFSET(0x10601ED0)
#define NPLBDAMOCAP_OLIPEKIFLPP_OFFSET UNITYSDK_OFFSET(0x10601F30)
#define NPLBDAMOCAP__CTOR_OFFSET UNITYSDK_OFFSET(0x10601EB0)

inline static constexpr unsigned int NPLBDAMOCAP_TypeDefinitionIndex = 58297;

class NPLBDAMOCAP : public ::System::Object
{
public:
	::MoleMole::UIRoleSelectPageController* HDNKMBCIOHD; // 0x10
	::BPHGNMNLLHF* OCBDKJPJDOO; // 0x18
	::OIOMDBNBLLH* JKMGMIJCNJD; // 0x20
	::System::Int32 BGDDDGANKKH; // 0x28

	::System::Void _ctor(::MoleMole::UIRoleSelectPageController* NCIMBHDKIJM, ::BPHGNMNLLHF* OCBDKJPJDOO, ::System::Int32 BGDDDGANKKH, ::OIOMDBNBLLH* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoleSelectPageController*, ::BPHGNMNLLHF*, ::System::Int32, ::OIOMDBNBLLH*))((::PBYTE)hIl2Cpp + NPLBDAMOCAP__CTOR_OFFSET))(this, NCIMBHDKIJM, OCBDKJPJDOO, BGDDDGANKKH, LJBPECKCCEA);
	}

	::System::Void GMDFCHBKEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLBDAMOCAP_GMDFCHBKEAO_OFFSET))(this);
	}

	::System::Void OLIPEKIFLPP(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::DMKPJHFHLLM, ::System::UInt16>>* FNINGEOGDAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::DMKPJHFHLLM, ::System::UInt16>>*))((::PBYTE)hIl2Cpp + NPLBDAMOCAP_OLIPEKIFLPP_OFFSET))(this, FNINGEOGDAD);
	}
};

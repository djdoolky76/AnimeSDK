#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/System/Object.h"

class LMDFHIBGBGD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMDFHIBGBGD_NLNHNJLNENK_BCPLCPHPMBO_OFFSET UNITYSDK_OFFSET(0x12D3CA10)
#define LMDFHIBGBGD_NLNHNJLNENK_OBDKBDLELAE_OFFSET UNITYSDK_OFFSET(0x12D3CA40)
#define LMDFHIBGBGD_NLNHNJLNENK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D3CA00)

inline static constexpr unsigned int LMDFHIBGBGD_NLNHNJLNENK_TypeDefinitionIndex = 79908;

class LMDFHIBGBGD_NLNHNJLNENK : public ::System::Object
{
public:
	::LMDFHIBGBGD* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::FHJPJMKIHBG>* HGBADPMBENM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_NLNHNJLNENK__CTOR_OFFSET))(this);
	}

	::System::Void BCPLCPHPMBO(::System::Int64 BEPMDFENBMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_NLNHNJLNENK_BCPLCPHPMBO_OFFSET))(this, BEPMDFENBMH);
	}

	::System::Void OBDKBDLELAE(::System::String* OLOMNNBBHPJ, ::System::Boolean HOGLEMKKBEB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_NLNHNJLNENK_OBDKBDLELAE_OFFSET))(this, OLOMNNBBHPJ, HOGLEMKKBEB);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPPMPHICDEA_EOEBAMPJBFG_MIMMNBBDJCN_OFFSET UNITYSDK_OFFSET(0x18169510)
#define GPPMPHICDEA_EOEBAMPJBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x18169500)

inline static constexpr unsigned int GPPMPHICDEA_EOEBAMPJBFG_TypeDefinitionIndex = 42679;

class GPPMPHICDEA_EOEBAMPJBFG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DCCMIMAGHJC; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IABMOKFGLFB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* PNGFNNLEHIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EOEBAMPJBFG__CTOR_OFFSET))(this);
	}

	::System::Int32 MIMMNBBDJCN(::System::String* EJCBEJMGFAJ, ::System::String* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_EOEBAMPJBFG_MIMMNBBDJCN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

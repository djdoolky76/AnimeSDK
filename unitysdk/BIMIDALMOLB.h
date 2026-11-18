#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
template <typename T> class DHLIOFKOPIP_1;

#define BIMIDALMOLB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15079880)
#define BIMIDALMOLB__CTOR_OFFSET UNITYSDK_OFFSET(0x15079810)

inline static constexpr unsigned int BIMIDALMOLB_TypeDefinitionIndex = 91766;

class BIMIDALMOLB
{
public:
	::System::Void _ctor(::System::String* PDMDAGGIDON)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIMIDALMOLB__CTOR_OFFSET))(this, PDMDAGGIDON);
	}

	::DHLIOFKOPIP_1<::System::Int32>* COKNIICCODC(::System::String* JFMCMEPKOHP)
	{
		return ((::DHLIOFKOPIP_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIMIDALMOLB_COKNIICCODC_OFFSET))(this, JFMCMEPKOHP);
	}
};

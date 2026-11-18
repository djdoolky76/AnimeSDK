#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define KMCMHBCPMBE_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1FA66D60)
#define KMCMHBCPMBE_OCLNCNOPCFE_OFFSET UNITYSDK_OFFSET(0x1FA66D50)

inline static constexpr unsigned int KMCMHBCPMBE_TypeDefinitionIndex = 18144;

class KMCMHBCPMBE : public ::System::Attribute
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x10
	::System::Boolean _EKOKNNMIPKO_k__BackingField; // 0x18

	::System::Boolean OCLNCNOPCFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCMHBCPMBE_OCLNCNOPCFE_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCMHBCPMBE_DECMGICKDLH_OFFSET))(this);
	}
};

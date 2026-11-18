#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define HAKEKPCAEHP_CELFFLPOAGN_OFFSET UNITYSDK_OFFSET(0x17A32220)

inline static constexpr unsigned int HAKEKPCAEHP_TypeDefinitionIndex = 42938;

class HAKEKPCAEHP : public ::System::Object
{
public:
	static ::System::String* CELFFLPOAGN(::System::Collections::IEnumerable* ANGKFAGHBMM)
	{
		return ((::System::String*(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + HAKEKPCAEHP_CELFFLPOAGN_OFFSET))(ANGKFAGHBMM);
	}
};

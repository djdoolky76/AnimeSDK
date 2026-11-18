#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAJHBDJBJFB_AONLGHJIKCG_OFFSET UNITYSDK_OFFSET(0x123811E0)

inline static constexpr unsigned int FAJHBDJBJFB_TypeDefinitionIndex = 67213;

class FAJHBDJBJFB : public ::System::Object
{
public:
	static ::System::Boolean AONLGHJIKCG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC, ::System::String* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FAJHBDJBJFB_AONLGHJIKCG_OFFSET))(DJLOKMMLFJC, IPMMCGDMODG);
	}
};

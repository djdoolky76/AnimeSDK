#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define BNIDDHPBJOH_DCJCHGOGLMF_OFFSET UNITYSDK_OFFSET(0x11602070)

inline static constexpr unsigned int BNIDDHPBJOH_TypeDefinitionIndex = 83625;

class BNIDDHPBJOH : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_KEEJFMJEHBK()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(BNIDDHPBJOH_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* DCJCHGOGLMF(::System::String* GLBEOLEENIJ, ::System::String* HAAJFLJEHNH, ::System::String* KEGFAPIAFBP)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BNIDDHPBJOH_DCJCHGOGLMF_OFFSET))(GLBEOLEENIJ, HAAJFLJEHNH, KEGFAPIAFBP);
	}
};

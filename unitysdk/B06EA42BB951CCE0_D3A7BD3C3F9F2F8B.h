#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define B06EA42BB951CCE0_D3A7BD3C3F9F2F8B_EC3911C532053F38_OFFSET UNITYSDK_OFFSET(0x3E8D500)

inline static constexpr unsigned int B06EA42BB951CCE0_D3A7BD3C3F9F2F8B_TypeDefinitionIndex = 14975;

class B06EA42BB951CCE0_D3A7BD3C3F9F2F8B : public ::System::Object
{
public:
	static ::System::Exception* EC3911C532053F38(::System::String* B083BE7841B347C4)
	{
		return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + B06EA42BB951CCE0_D3A7BD3C3F9F2F8B_EC3911C532053F38_OFFSET))(B083BE7841B347C4);
	}
};

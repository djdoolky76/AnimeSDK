#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class String; }

#define GIIBGGMAJHL_CPJEMHNIHDL_OFFSET UNITYSDK_OFFSET(0x1F0125C0)
#define GIIBGGMAJHL_EDHCMCGMBNA_OFFSET UNITYSDK_OFFSET(0x1F0128B0)

inline static constexpr unsigned int GIIBGGMAJHL_TypeDefinitionIndex = 36099;

class GIIBGGMAJHL : public ::System::Object
{
public:
	static ::System::String* CPJEMHNIHDL(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GIIBGGMAJHL_CPJEMHNIHDL_OFFSET))(AEMAHLJGGMO);
	}

	static ::CFMGIKJLMBJ* EDHCMCGMBNA(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + GIIBGGMAJHL_EDHCMCGMBNA_OFFSET))(AEMAHLJGGMO, IOPMHNGHKGA);
	}
};

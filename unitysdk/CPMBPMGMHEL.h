#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class String; }

#define CPMBPMGMHEL_CPJEMHNIHDL_OFFSET UNITYSDK_OFFSET(0x1DC885D0)
#define CPMBPMGMHEL_EDHCMCGMBNA_OFFSET UNITYSDK_OFFSET(0x1DC86F80)

inline static constexpr unsigned int CPMBPMGMHEL_TypeDefinitionIndex = 93622;

class CPMBPMGMHEL : public ::System::Object
{
public:
	static ::CFMGIKJLMBJ* EDHCMCGMBNA(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + CPMBPMGMHEL_EDHCMCGMBNA_OFFSET))(AEMAHLJGGMO, IOPMHNGHKGA);
	}

	static ::System::String* CPJEMHNIHDL(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CPMBPMGMHEL_CPJEMHNIHDL_OFFSET))(AEMAHLJGGMO);
	}
};

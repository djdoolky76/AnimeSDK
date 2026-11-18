#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class String; }

#define FMJKMKDCNKA_CPJEMHNIHDL_OFFSET UNITYSDK_OFFSET(0x1FC63520)
#define FMJKMKDCNKA_EDHCMCGMBNA_OFFSET UNITYSDK_OFFSET(0x1FC61D10)

inline static constexpr unsigned int FMJKMKDCNKA_TypeDefinitionIndex = 95208;

class FMJKMKDCNKA : public ::System::Object
{
public:
	static ::CFMGIKJLMBJ* EDHCMCGMBNA(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + FMJKMKDCNKA_EDHCMCGMBNA_OFFSET))(AEMAHLJGGMO, IOPMHNGHKGA);
	}

	static ::System::String* CPJEMHNIHDL(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMJKMKDCNKA_CPJEMHNIHDL_OFFSET))(AEMAHLJGGMO);
	}
};

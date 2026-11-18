#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class String; }

#define GKKJGFPDFGN_CPJEMHNIHDL_OFFSET UNITYSDK_OFFSET(0x1E4D4310)
#define GKKJGFPDFGN_EDHCMCGMBNA_OFFSET UNITYSDK_OFFSET(0x1E4D36A0)

inline static constexpr unsigned int GKKJGFPDFGN_TypeDefinitionIndex = 93313;

class GKKJGFPDFGN : public ::System::Object
{
public:
	static ::CFMGIKJLMBJ* EDHCMCGMBNA(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + GKKJGFPDFGN_EDHCMCGMBNA_OFFSET))(AEMAHLJGGMO, IOPMHNGHKGA);
	}

	static ::System::String* CPJEMHNIHDL(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GKKJGFPDFGN_CPJEMHNIHDL_OFFSET))(AEMAHLJGGMO);
	}
};

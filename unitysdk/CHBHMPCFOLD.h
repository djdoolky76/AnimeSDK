#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class String; }

#define CHBHMPCFOLD_CPJEMHNIHDL_OFFSET UNITYSDK_OFFSET(0x1E73BBB0)
#define CHBHMPCFOLD_EDHCMCGMBNA_OFFSET UNITYSDK_OFFSET(0x1E739C60)

inline static constexpr unsigned int CHBHMPCFOLD_TypeDefinitionIndex = 94459;

class CHBHMPCFOLD : public ::System::Object
{
public:
	static ::CFMGIKJLMBJ* EDHCMCGMBNA(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + CHBHMPCFOLD_EDHCMCGMBNA_OFFSET))(AEMAHLJGGMO, IOPMHNGHKGA);
	}

	static ::System::String* CPJEMHNIHDL(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHBHMPCFOLD_CPJEMHNIHDL_OFFSET))(AEMAHLJGGMO);
	}
};

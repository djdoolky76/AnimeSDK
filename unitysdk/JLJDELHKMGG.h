#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class String; }

#define JLJDELHKMGG_CPJEMHNIHDL_OFFSET UNITYSDK_OFFSET(0x1E4DACE0)
#define JLJDELHKMGG_EDHCMCGMBNA_OFFSET UNITYSDK_OFFSET(0x1E4D9A30)

inline static constexpr unsigned int JLJDELHKMGG_TypeDefinitionIndex = 93510;

class JLJDELHKMGG : public ::System::Object
{
public:
	static ::CFMGIKJLMBJ* EDHCMCGMBNA(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + JLJDELHKMGG_EDHCMCGMBNA_OFFSET))(AEMAHLJGGMO, IOPMHNGHKGA);
	}

	static ::System::String* CPJEMHNIHDL(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + JLJDELHKMGG_CPJEMHNIHDL_OFFSET))(AEMAHLJGGMO);
	}
};

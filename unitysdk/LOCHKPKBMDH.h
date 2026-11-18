#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class String; }

#define LOCHKPKBMDH_CPJEMHNIHDL_OFFSET UNITYSDK_OFFSET(0x1CBC7FD0)
#define LOCHKPKBMDH_EDHCMCGMBNA_OFFSET UNITYSDK_OFFSET(0x1CBC77E0)

inline static constexpr unsigned int LOCHKPKBMDH_TypeDefinitionIndex = 93815;

class LOCHKPKBMDH : public ::System::Object
{
public:
	static ::CFMGIKJLMBJ* EDHCMCGMBNA(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + LOCHKPKBMDH_EDHCMCGMBNA_OFFSET))(AEMAHLJGGMO, IOPMHNGHKGA);
	}

	static ::System::String* CPJEMHNIHDL(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LOCHKPKBMDH_CPJEMHNIHDL_OFFSET))(AEMAHLJGGMO);
	}
};

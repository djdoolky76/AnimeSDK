#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class String; }

#define BJEKLFPFMMC_CPJEMHNIHDL_OFFSET UNITYSDK_OFFSET(0x1D3D5AD0)
#define BJEKLFPFMMC_EDHCMCGMBNA_OFFSET UNITYSDK_OFFSET(0x1D3D3F20)

inline static constexpr unsigned int BJEKLFPFMMC_TypeDefinitionIndex = 94350;

class BJEKLFPFMMC : public ::System::Object
{
public:
	static ::CFMGIKJLMBJ* EDHCMCGMBNA(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + BJEKLFPFMMC_EDHCMCGMBNA_OFFSET))(AEMAHLJGGMO, IOPMHNGHKGA);
	}

	static ::System::String* CPJEMHNIHDL(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + BJEKLFPFMMC_CPJEMHNIHDL_OFFSET))(AEMAHLJGGMO);
	}
};

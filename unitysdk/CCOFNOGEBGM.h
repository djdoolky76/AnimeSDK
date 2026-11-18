#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHNMKCKALOP;
namespace System { class String; }

#define CCOFNOGEBGM_BMFHJKPABFA_OFFSET UNITYSDK_OFFSET(0x1D9EFC10)
#define CCOFNOGEBGM_GAHJFNJMCMA_OFFSET UNITYSDK_OFFSET(0x1D9EF190)
#define CCOFNOGEBGM_GOHMBFNNPIL_OFFSET UNITYSDK_OFFSET(0x1D9EFC90)
#define CCOFNOGEBGM_JLNAOBONPFG_1_OFFSET UNITYSDK_OFFSET(0x1D9EFC50)
#define CCOFNOGEBGM_JLNAOBONPFG_OFFSET UNITYSDK_OFFSET(0x1D9ED9D0)
#define CCOFNOGEBGM_LNKICFKKIGE_OFFSET UNITYSDK_OFFSET(0x1D9EFCD0)

inline static constexpr unsigned int CCOFNOGEBGM_TypeDefinitionIndex = 93633;

class CCOFNOGEBGM : public ::System::Object
{
public:
	static ::System::String* JLNAOBONPFG()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CCOFNOGEBGM_JLNAOBONPFG_OFFSET))();
	}

	static ::System::Void GAHJFNJMCMA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOFNOGEBGM_GAHJFNJMCMA_OFFSET))();
	}

	static ::System::Void BMFHJKPABFA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOFNOGEBGM_BMFHJKPABFA_OFFSET))();
	}

	static ::System::Void JLNAOBONPFG_1(::MHNMKCKALOP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::MHNMKCKALOP*))((::PBYTE)hIl2Cpp + CCOFNOGEBGM_JLNAOBONPFG_1_OFFSET))(GEEHGDABNJF);
	}

	static ::System::Void GOHMBFNNPIL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOFNOGEBGM_GOHMBFNNPIL_OFFSET))();
	}

	static ::System::Void LNKICFKKIGE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOFNOGEBGM_LNKICFKKIGE_OFFSET))();
	}
};

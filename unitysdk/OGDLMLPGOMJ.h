#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGDLMLPGOMJ_EMGILBOFKGK_OFFSET UNITYSDK_OFFSET(0x15FDCFA0)
#define OGDLMLPGOMJ_KIALJCECAFF_OFFSET UNITYSDK_OFFSET(0x15FDD020)
#define OGDLMLPGOMJ_MMCDFFKOPGC_OFFSET UNITYSDK_OFFSET(0x15FDCF20)
#define OGDLMLPGOMJ_PCBGALIHKOL_OFFSET UNITYSDK_OFFSET(0x15FDD0A0)

inline static constexpr unsigned int OGDLMLPGOMJ_TypeDefinitionIndex = 48313;

class OGDLMLPGOMJ : public ::System::Object
{
public:
	static ::System::Void MMCDFFKOPGC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGDLMLPGOMJ_MMCDFFKOPGC_OFFSET))();
	}

	static ::System::Boolean EMGILBOFKGK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGDLMLPGOMJ_EMGILBOFKGK_OFFSET))();
	}

	static ::System::UInt32 KIALJCECAFF()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + OGDLMLPGOMJ_KIALJCECAFF_OFFSET))();
	}

	static ::System::Void PCBGALIHKOL(::System::Boolean CMJBKCEKEFK)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + OGDLMLPGOMJ_PCBGALIHKOL_OFFSET))(CMJBKCEKEFK);
	}
};

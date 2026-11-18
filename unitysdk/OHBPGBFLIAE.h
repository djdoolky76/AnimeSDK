#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHFDEBPOBOG.h"
#include "unitysdk/OOEDCMIIJKJ.h"
#include "unitysdk/System/Object.h"

class EOMFFBGMKBF;
namespace System::IO { class MemoryStream; }

#define OHBPGBFLIAE_APPJMKMDNNC_OFFSET UNITYSDK_OFFSET(0x172C7380)
#define OHBPGBFLIAE_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x172C73D0)
#define OHBPGBFLIAE_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x172C7490)
#define OHBPGBFLIAE__CTOR_OFFSET UNITYSDK_OFFSET(0x172C72D0)

inline static constexpr unsigned int OHBPGBFLIAE_TypeDefinitionIndex = 84069;

class OHBPGBFLIAE : public ::System::Object
{
public:
	::System::IO::MemoryStream* LDOJPPBLCEN; // 0x10
	::HHFDEBPOBOG CIOFMFHEMIE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBPGBFLIAE__CTOR_OFFSET))(this);
	}

	::System::Void APPJMKMDNNC(::HHFDEBPOBOG ILJNMDLHDON)
	{
		return ((::System::Void(*)(::PVOID, ::HHFDEBPOBOG))((::PBYTE)hIl2Cpp + OHBPGBFLIAE_APPJMKMDNNC_OFFSET))(this, ILJNMDLHDON);
	}

	::System::IO::MemoryStream* JGECEJIHMLG(::EOMFFBGMKBF* PCPCLPGMMEM)
	{
		return ((::System::IO::MemoryStream*(*)(::PVOID, ::EOMFFBGMKBF*))((::PBYTE)hIl2Cpp + OHBPGBFLIAE_JGECEJIHMLG_OFFSET))(this, PCPCLPGMMEM);
	}

	static ::OOEDCMIIJKJ JIDMADDMGIE(::Il2CppArray<::System::Byte>* PMAMMGFJAJL, ::System::Int32 BOGPAHGJOJK, ::System::Int32 BEPMDFENBMH, ::HHFDEBPOBOG ILJNMDLHDON, ::EOMFFBGMKBF* PCPCLPGMMEM)
	{
		return ((::OOEDCMIIJKJ(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::HHFDEBPOBOG, ::EOMFFBGMKBF*))((::PBYTE)hIl2Cpp + OHBPGBFLIAE_JIDMADDMGIE_OFFSET))(PMAMMGFJAJL, BOGPAHGJOJK, BEPMDFENBMH, ILJNMDLHDON, PCPCLPGMMEM);
	}
};

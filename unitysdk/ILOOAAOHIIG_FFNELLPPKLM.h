#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
class ILOOAAOHIIG;
class JOOHEPGEHNK;
class NDCLBAKBEIP;

#define ILOOAAOHIIG_FFNELLPPKLM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164CA360)
#define ILOOAAOHIIG_FFNELLPPKLM_CTOR_OFFSET UNITYSDK_OFFSET(0x164CA350)

inline static constexpr unsigned int ILOOAAOHIIG_FFNELLPPKLM_TypeDefinitionIndex = 79474;

	class ILOOAAOHIIG_FFNELLPPKLM : public ::System::Object
	{
	public:
		::JOOHEPGEHNK* EKCBMIGDAEB; // 0x10
		::NDCLBAKBEIP* MCMMLMMMFOA; // 0x18
		::System::Void _ctor(::NDCLBAKBEIP* a1, ::JOOHEPGEHNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDCLBAKBEIP*, ::JOOHEPGEHNK*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_FFNELLPPKLM_CTOR_OFFSET))(this, a1, a2);
		}

		::ILOOAAOHIIG* BPLPBPMEODA(::CHGHIALKMFM* a1)
		{
			return ((::ILOOAAOHIIG*(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_FFNELLPPKLM_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};

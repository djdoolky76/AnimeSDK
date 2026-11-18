#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNBOFBNDHFO;

#define EOCMAKHEHMO_KMKOBCDOAIF_CMCGMPDDMGJ_OFFSET UNITYSDK_OFFSET(0x16167F40)
#define EOCMAKHEHMO_KMKOBCDOAIF__CTOR_OFFSET UNITYSDK_OFFSET(0x16167F30)

inline static constexpr unsigned int EOCMAKHEHMO_KMKOBCDOAIF_TypeDefinitionIndex = 53269;

class EOCMAKHEHMO_KMKOBCDOAIF : public ::System::Object
{
public:
	::System::UInt32 DONFNODEALN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCMAKHEHMO_KMKOBCDOAIF__CTOR_OFFSET))(this);
	}

	::System::Void CMCGMPDDMGJ(::BNBOFBNDHFO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::BNBOFBNDHFO*))((::PBYTE)hIl2Cpp + EOCMAKHEHMO_KMKOBCDOAIF_CMCGMPDDMGJ_OFFSET))(this, GLAOEHCGCFO);
	}
};

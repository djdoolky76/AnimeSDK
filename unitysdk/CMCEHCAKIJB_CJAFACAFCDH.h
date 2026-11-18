#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMCEHCAKIJB;
class NEIACFLEDCC;

#define CMCEHCAKIJB_CJAFACAFCDH_MHLJGIMPEBF_OFFSET UNITYSDK_OFFSET(0x19A18DA0)
#define CMCEHCAKIJB_CJAFACAFCDH__CTOR_OFFSET UNITYSDK_OFFSET(0x19A18D90)

inline static constexpr unsigned int CMCEHCAKIJB_CJAFACAFCDH_TypeDefinitionIndex = 89210;

class CMCEHCAKIJB_CJAFACAFCDH : public ::System::Object
{
public:
	::NEIACFLEDCC* CLGCNKFMLCN; // 0x10
	::CMCEHCAKIJB* KLHPEBKNIFB; // 0x18
	::System::Int32 GDNHHAOKLFG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCEHCAKIJB_CJAFACAFCDH__CTOR_OFFSET))(this);
	}

	::System::Void MHLJGIMPEBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCEHCAKIJB_CJAFACAFCDH_MHLJGIMPEBF_OFFSET))(this);
	}
};

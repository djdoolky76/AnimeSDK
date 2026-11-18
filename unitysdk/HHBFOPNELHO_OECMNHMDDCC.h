#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHBFOPNELHO;
class OKJBFPAGNAF;
class OPCGCFHAMIP;

#define HHBFOPNELHO_OECMNHMDDCC_MJGEFMEOECJ_OFFSET UNITYSDK_OFFSET(0x16CEFA10)
#define HHBFOPNELHO_OECMNHMDDCC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEFA00)

inline static constexpr unsigned int HHBFOPNELHO_OECMNHMDDCC_TypeDefinitionIndex = 40613;

class HHBFOPNELHO_OECMNHMDDCC : public ::System::Object
{
public:
	::OKJBFPAGNAF* LJBPECKCCEA; // 0x10
	::HHBFOPNELHO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBFOPNELHO_OECMNHMDDCC__CTOR_OFFSET))(this);
	}

	::System::Void MJGEFMEOECJ(::OPCGCFHAMIP* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OPCGCFHAMIP*))((::PBYTE)hIl2Cpp + HHBFOPNELHO_OECMNHMDDCC_MJGEFMEOECJ_OFFSET))(this, GLAOEHCGCFO);
	}
};

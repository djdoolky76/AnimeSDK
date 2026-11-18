#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNJOKMFJGEH_PJEMCPEJDGE;
class IHNJCJPPBIH;

#define FNJOKMFJGEH_BBPKMACKFJJ_BOPFNMPBJOH_OFFSET UNITYSDK_OFFSET(0x1FFC56F0)
#define FNJOKMFJGEH_BBPKMACKFJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC56E0)

inline static constexpr unsigned int FNJOKMFJGEH_BBPKMACKFJJ_TypeDefinitionIndex = 18125;

class FNJOKMFJGEH_BBPKMACKFJJ : public ::System::Object
{
public:
	::System::Object* PDFEDOCLDHG; // 0x10
	::FNJOKMFJGEH_PJEMCPEJDGE* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJOKMFJGEH_BBPKMACKFJJ__CTOR_OFFSET))(this);
	}

	::System::Void BOPFNMPBJOH(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + FNJOKMFJGEH_BBPKMACKFJJ_BOPFNMPBJOH_OFFSET))(this, NAPFALLANDL);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNPIBPDIIAN;
class PJHKDJEGJOG;

#define BNPIBPDIIAN_KIKAAFHCMOD_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x11521B20)
#define BNPIBPDIIAN_KIKAAFHCMOD__CTOR_OFFSET UNITYSDK_OFFSET(0x11521B10)

inline static constexpr unsigned int BNPIBPDIIAN_KIKAAFHCMOD_TypeDefinitionIndex = 84956;

class BNPIBPDIIAN_KIKAAFHCMOD : public ::System::Object
{
public:
	::BNPIBPDIIAN* KLHPEBKNIFB; // 0x10
	::PJHKDJEGJOG* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIBPDIIAN_KIKAAFHCMOD__CTOR_OFFSET))(this);
	}

	::System::Void AACLKPHGMLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPIBPDIIAN_KIKAAFHCMOD_AACLKPHGMLM_OFFSET))(this);
	}
};

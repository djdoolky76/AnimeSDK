#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJICEPIGIIK;
class NEIACFLEDCC;

#define FJICEPIGIIK_CFLGMDGLPND_MHLJGIMPEBF_OFFSET UNITYSDK_OFFSET(0x10EBBD10)
#define FJICEPIGIIK_CFLGMDGLPND__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBBD00)

inline static constexpr unsigned int FJICEPIGIIK_CFLGMDGLPND_TypeDefinitionIndex = 70587;

class FJICEPIGIIK_CFLGMDGLPND : public ::System::Object
{
public:
	::FJICEPIGIIK* KLHPEBKNIFB; // 0x10
	::NEIACFLEDCC* CLGCNKFMLCN; // 0x18
	::System::Int32 GDNHHAOKLFG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJICEPIGIIK_CFLGMDGLPND__CTOR_OFFSET))(this);
	}

	::System::Void MHLJGIMPEBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJICEPIGIIK_CFLGMDGLPND_MHLJGIMPEBF_OFFSET))(this);
	}
};

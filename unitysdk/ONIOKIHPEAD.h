#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKNIEPCILLG;
class GAMICCELBAG;
class LCFAKNCOMEF;

#define ONIOKIHPEAD_JBHNIIEDEID_OFFSET UNITYSDK_OFFSET(0x13A75140)
#define ONIOKIHPEAD_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0x13A750A0)
#define ONIOKIHPEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A75090)

inline static constexpr unsigned int ONIOKIHPEAD_TypeDefinitionIndex = 67952;

class ONIOKIHPEAD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIOKIHPEAD__CTOR_OFFSET))(this);
	}

	static ::System::Boolean NFAOKJPILBO(::FKNIEPCILLG* EAIMGHKJLNF, ::LCFAKNCOMEF*& ENHKBEPHNOG)
	{
		return ((::System::Boolean(*)(::FKNIEPCILLG*, ::LCFAKNCOMEF*&))((::PBYTE)hIl2Cpp + ONIOKIHPEAD_NFAOKJPILBO_OFFSET))(EAIMGHKJLNF, ENHKBEPHNOG);
	}

	static ::System::Boolean JBHNIIEDEID(::FKNIEPCILLG* EAIMGHKJLNF, ::GAMICCELBAG*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::FKNIEPCILLG*, ::GAMICCELBAG*&))((::PBYTE)hIl2Cpp + ONIOKIHPEAD_JBHNIIEDEID_OFFSET))(EAIMGHKJLNF, EGEGIMGMJHN);
	}
};

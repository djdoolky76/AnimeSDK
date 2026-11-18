#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class ODNBJIEICJH;

#define JCNKNFOEHFE_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x14A512D0)
#define JCNKNFOEHFE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A53450)

inline static constexpr unsigned int JCNKNFOEHFE_TypeDefinitionIndex = 59368;

class JCNKNFOEHFE : public ::PBJOCICFNGK
{
public:
	::ODNBJIEICJH* FPFDBCJDECN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNKNFOEHFE__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JCNKNFOEHFE_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};

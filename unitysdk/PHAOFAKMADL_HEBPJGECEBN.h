#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOMJDICEKPN;
class KJAICHGIAPC;

#define PHAOFAKMADL_HEBPJGECEBN_NNCBEMEDADO_OFFSET UNITYSDK_OFFSET(0x1197C170)
#define PHAOFAKMADL_HEBPJGECEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1197C160)

inline static constexpr unsigned int PHAOFAKMADL_HEBPJGECEBN_TypeDefinitionIndex = 54362;

class PHAOFAKMADL_HEBPJGECEBN : public ::System::Object
{
public:
	::FOMJDICEKPN* NJOEFOAEJPI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAOFAKMADL_HEBPJGECEBN__CTOR_OFFSET))(this);
	}

	::System::Boolean NNCBEMEDADO(::KJAICHGIAPC* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KJAICHGIAPC*))((::PBYTE)hIl2Cpp + PHAOFAKMADL_HEBPJGECEBN_NNCBEMEDADO_OFFSET))(this, IMLLDOHDCNC);
	}
};

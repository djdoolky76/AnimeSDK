#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKBLBDMOFHE.h"

class CNJMJICDKJI;
namespace System { class String; }

#define DBDMKONNDAA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12B9CFD0)
#define DBDMKONNDAA_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x12B9CE30)
#define DBDMKONNDAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12B9CF30)
#define DBDMKONNDAA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B9CDB0)

inline static constexpr unsigned int DBDMKONNDAA_TypeDefinitionIndex = 44468;

class DBDMKONNDAA : public ::JKBLBDMOFHE
{
public:
	::System::Void _ctor(::CNJMJICDKJI*& JKONFJNDGDP)
	{
		return ((::System::Void(*)(::PVOID, ::CNJMJICDKJI*&))((::PBYTE)hIl2Cpp + DBDMKONNDAA__CTOR_OFFSET))(this, JKONFJNDGDP);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDMKONNDAA_GPKMPDHNCGL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDMKONNDAA_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDMKONNDAA_DPIHOJBBGLA_OFFSET))(this);
	}
};

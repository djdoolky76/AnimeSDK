#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKHGLFCPBLO;
class LKFLEAOHCNL;

#define POOFKGJJLAH_FBLCEPEPBPI_FMMKOPICKDB_OFFSET UNITYSDK_OFFSET(0x1A807100)
#define POOFKGJJLAH_FBLCEPEPBPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8070F0)

inline static constexpr unsigned int POOFKGJJLAH_FBLCEPEPBPI_TypeDefinitionIndex = 81842;

class POOFKGJJLAH_FBLCEPEPBPI : public ::System::Object
{
public:
	::IKHGLFCPBLO* MOBNMDEDJIP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOFKGJJLAH_FBLCEPEPBPI__CTOR_OFFSET))(this);
	}

	::System::Boolean FMMKOPICKDB(::LKFLEAOHCNL* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::LKFLEAOHCNL*))((::PBYTE)hIl2Cpp + POOFKGJJLAH_FBLCEPEPBPI_FMMKOPICKDB_OFFSET))(this, PELAJIFDIPN);
	}
};

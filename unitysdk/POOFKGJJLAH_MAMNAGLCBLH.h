#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKHGLFCPBLO;
class LKFLEAOHCNL;

#define POOFKGJJLAH_MAMNAGLCBLH_JILGNCNCICA_OFFSET UNITYSDK_OFFSET(0x1D639550)
#define POOFKGJJLAH_MAMNAGLCBLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D639540)

inline static constexpr unsigned int POOFKGJJLAH_MAMNAGLCBLH_TypeDefinitionIndex = 81845;

class POOFKGJJLAH_MAMNAGLCBLH : public ::System::Object
{
public:
	::IKHGLFCPBLO* MOBNMDEDJIP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOFKGJJLAH_MAMNAGLCBLH__CTOR_OFFSET))(this);
	}

	::System::Boolean JILGNCNCICA(::LKFLEAOHCNL* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::LKFLEAOHCNL*))((::PBYTE)hIl2Cpp + POOFKGJJLAH_MAMNAGLCBLH_JILGNCNCICA_OFFSET))(this, PELAJIFDIPN);
	}
};

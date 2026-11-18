#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCOAGGHCODK;

#define GDBADFKOFFG_MCOHHNBJKBN_EDKFLJGIJOB_OFFSET UNITYSDK_OFFSET(0x11C9F310)
#define GDBADFKOFFG_MCOHHNBJKBN__CTOR_OFFSET UNITYSDK_OFFSET(0x11C9F300)

inline static constexpr unsigned int GDBADFKOFFG_MCOHHNBJKBN_TypeDefinitionIndex = 74124;

class GDBADFKOFFG_MCOHHNBJKBN : public ::System::Object
{
public:
	::System::Int32 JCDJABFEKME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_MCOHHNBJKBN__CTOR_OFFSET))(this);
	}

	::System::Boolean EDKFLJGIJOB(::KCOAGGHCODK* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KCOAGGHCODK*))((::PBYTE)hIl2Cpp + GDBADFKOFFG_MCOHHNBJKBN_EDKFLJGIJOB_OFFSET))(this, HEAJMIGHEHG);
	}
};

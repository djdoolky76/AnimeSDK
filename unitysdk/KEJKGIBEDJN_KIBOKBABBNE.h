#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKABGAHPDBG;

#define KEJKGIBEDJN_KIBOKBABBNE_IMLIKKOHMOM_OFFSET UNITYSDK_OFFSET(0x14FD57D0)
#define KEJKGIBEDJN_KIBOKBABBNE__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD57C0)

inline static constexpr unsigned int KEJKGIBEDJN_KIBOKBABBNE_TypeDefinitionIndex = 67229;

class KEJKGIBEDJN_KIBOKBABBNE : public ::System::Object
{
public:
	::System::UInt32 OIKFFGKDHME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJKGIBEDJN_KIBOKBABBNE__CTOR_OFFSET))(this);
	}

	::System::Boolean IMLIKKOHMOM(::FKABGAHPDBG* DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKABGAHPDBG*))((::PBYTE)hIl2Cpp + KEJKGIBEDJN_KIBOKBABBNE_IMLIKKOHMOM_OFFSET))(this, DEKJDEPKKLH);
	}
};

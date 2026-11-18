#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GDPJANILHJC_PGPIFKCOOKD_OMELBKOLAMM_OFFSET UNITYSDK_OFFSET(0xBB86B30)
#define GDPJANILHJC_PGPIFKCOOKD__CTOR_OFFSET UNITYSDK_OFFSET(0xBB86B20)

inline static constexpr unsigned int GDPJANILHJC_PGPIFKCOOKD_TypeDefinitionIndex = 47440;

class GDPJANILHJC_PGPIFKCOOKD : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* NPFIONPDFED; // 0x10
	::System::Action_1<::System::Single>* HAAJELGELCC; // 0x18
	::System::String* HIAIKHDFCLN; // 0x20
	::System::Single OGKEBCPEPED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPJANILHJC_PGPIFKCOOKD__CTOR_OFFSET))(this);
	}

	::System::Void OMELBKOLAMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPJANILHJC_PGPIFKCOOKD_OMELBKOLAMM_OFFSET))(this);
	}
};

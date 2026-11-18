#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IFPFKBKAMEL_JJLDDNGFKGO_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x141C1C70)
#define IFPFKBKAMEL_JJLDDNGFKGO_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x141C1C60)
#define IFPFKBKAMEL_JJLDDNGFKGO__CTOR_OFFSET UNITYSDK_OFFSET(0x141C1C50)

inline static constexpr unsigned int IFPFKBKAMEL_JJLDDNGFKGO_TypeDefinitionIndex = 91208;

class IFPFKBKAMEL_JJLDDNGFKGO : public ::System::Object
{
public:
	::System::Action* KCNFHMFDOHI; // 0x10
	::System::Action* POCANNAFFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_JJLDDNGFKGO__CTOR_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_JJLDDNGFKGO_KBAFCIJONFJ_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPFKBKAMEL_JJLDDNGFKGO_HCDMMJLJLAL_OFFSET))(this);
	}
};

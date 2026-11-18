#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEOOCBFJOOH.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
class CJIEIHEDMME;

#define CJKHLPEHFLA_ELOOHHBBNMO_OFFSET UNITYSDK_OFFSET(0x19710950)
#define CJKHLPEHFLA__CTOR_OFFSET UNITYSDK_OFFSET(0x19710900)

inline static constexpr unsigned int CJKHLPEHFLA_TypeDefinitionIndex = 86913;

class CJKHLPEHFLA : public ::System::Object
{
public:
	::AOJKLCGGPAK* PLBEAIIJADM; // 0x10
	::CJIEIHEDMME* FDFNOJIFOPF; // 0x18
	::System::UInt32 GLNLLDHFCDB; // 0x20

	::System::Void _ctor(::CJIEIHEDMME* IHACKHOBPKG, ::AOJKLCGGPAK* OGFLBKKACCC)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + CJKHLPEHFLA__CTOR_OFFSET))(this, IHACKHOBPKG, OGFLBKKACCC);
	}

	::CEOOCBFJOOH ELOOHHBBNMO()
	{
		return ((::CEOOCBFJOOH(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKHLPEHFLA_ELOOHHBBNMO_OFFSET))(this);
	}
};

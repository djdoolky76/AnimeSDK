#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class OKNKCEAHHFP;

#define LHNGCNDIIEP_GNCALHCFOGN_EJJAFMMHFJJ_OFFSET UNITYSDK_OFFSET(0xD42E0F0)
#define LHNGCNDIIEP_GNCALHCFOGN_MHBDOIEGDOO_OFFSET UNITYSDK_OFFSET(0xD42E110)
#define LHNGCNDIIEP_GNCALHCFOGN__CTOR_OFFSET UNITYSDK_OFFSET(0xD42E0E0)

inline static constexpr unsigned int LHNGCNDIIEP_GNCALHCFOGN_TypeDefinitionIndex = 66699;

class LHNGCNDIIEP_GNCALHCFOGN : public ::System::Object
{
public:
	::Share::EAvatarSkillType BBDHPBAPPPI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNGCNDIIEP_GNCALHCFOGN__CTOR_OFFSET))(this);
	}

	::System::Boolean EJJAFMMHFJJ(::OKNKCEAHHFP* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::OKNKCEAHHFP*))((::PBYTE)hIl2Cpp + LHNGCNDIIEP_GNCALHCFOGN_EJJAFMMHFJJ_OFFSET))(this, EJCBEJMGFAJ);
	}

	::System::Boolean MHBDOIEGDOO(::OKNKCEAHHFP* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::OKNKCEAHHFP*))((::PBYTE)hIl2Cpp + LHNGCNDIIEP_GNCALHCFOGN_MHBDOIEGDOO_OFFSET))(this, EJCBEJMGFAJ);
	}
};

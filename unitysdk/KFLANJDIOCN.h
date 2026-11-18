#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJIEMKHJEEM.h"
#include "unitysdk/System/Object.h"

class BDCKHDEBKKK;
namespace System { class String; }

#define KFLANJDIOCN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1764E5B0)
#define KFLANJDIOCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1764E620)

inline static constexpr unsigned int KFLANJDIOCN_TypeDefinitionIndex = 57292;

class KFLANJDIOCN : public ::System::Object
{
public:
	::BDCKHDEBKKK* FFPINLFKAGN; // 0x10
	::System::String* NOMJPHPNDDD; // 0x18
	::AJIEMKHJEEM EHNJCPCLCOJ; // 0x20
	::System::Int32 IONIFOMEAMB; // 0x24
	::System::Boolean ENEILOANKLG; // 0x28
	::System::Boolean AONOLOPLAPP; // 0x29
	::System::Boolean BBCBDLLPFJC; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLANJDIOCN__CTOR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::KFLANJDIOCN* LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::KFLANJDIOCN*))((::PBYTE)hIl2Cpp + KFLANJDIOCN_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}
};

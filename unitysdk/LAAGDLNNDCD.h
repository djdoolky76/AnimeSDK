#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LAAGDLNNDCD__CCTOR_OFFSET UNITYSDK_OFFSET(0xD411530)

inline static constexpr unsigned int LAAGDLNNDCD_TypeDefinitionIndex = 68071;

class LAAGDLNNDCD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LECPLCNCALC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LAAGDLNNDCD_TypeDefinitionIndex)->GetStaticField(0x32A10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAAGDLNNDCD__CCTOR_OFFSET))();
	}
};

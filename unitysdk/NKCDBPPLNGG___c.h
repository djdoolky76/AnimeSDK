#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NKCDBPPLNGG___C_DFHDOIEAPCC_OFFSET UNITYSDK_OFFSET(0x105C21E0)
#define NKCDBPPLNGG___C_JGLLHBDDIJJ_OFFSET UNITYSDK_OFFSET(0x105C21D0)
#define NKCDBPPLNGG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105C2180)
#define NKCDBPPLNGG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105C21C0)

inline static constexpr unsigned int NKCDBPPLNGG___c_TypeDefinitionIndex = 55001;

class NKCDBPPLNGG___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__35_19()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NKCDBPPLNGG___c_TypeDefinitionIndex)->GetStaticField(0x4AF90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NKCDBPPLNGG___c_TypeDefinitionIndex)->GetStaticField(0x4AF98);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__35_20()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NKCDBPPLNGG___c_TypeDefinitionIndex)->GetStaticField(0x4AFA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKCDBPPLNGG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCDBPPLNGG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JGLLHBDDIJJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCDBPPLNGG___C_JGLLHBDDIJJ_OFFSET))(this);
	}

	::System::Boolean DFHDOIEAPCC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCDBPPLNGG___C_DFHDOIEAPCC_OFFSET))(this);
	}
};

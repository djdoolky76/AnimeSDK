#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADOAJIBJGNJ;
namespace System { template <typename T> class Action_1; }

#define GDHPBDANJCA___C_DAGKBNKBPCI_OFFSET UNITYSDK_OFFSET(0x10EE3750)
#define GDHPBDANJCA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10EE3700)
#define GDHPBDANJCA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE3740)

inline static constexpr unsigned int GDHPBDANJCA___c_TypeDefinitionIndex = 64792;

class GDHPBDANJCA___c : public ::System::Object
{
public:
	static ::System::Action_1<::ADOAJIBJGNJ*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::ADOAJIBJGNJ*>**)Il2CppClass::FromTypeDefinitionIndex(GDHPBDANJCA___c_TypeDefinitionIndex)->GetStaticField(0x37810);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDHPBDANJCA___c_TypeDefinitionIndex)->GetStaticField(0x37818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDHPBDANJCA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHPBDANJCA___C__CTOR_OFFSET))(this);
	}

	::System::Void DAGKBNKBPCI(::ADOAJIBJGNJ* NCPAFDHPCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ADOAJIBJGNJ*))((::PBYTE)hIl2Cpp + GDHPBDANJCA___C_DAGKBNKBPCI_OFFSET))(this, NCPAFDHPCPI);
	}
};

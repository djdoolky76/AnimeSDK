#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKMFENKPFKM;
namespace System { template <typename T> class Action_1; }

#define MLKECPODBDD___C_DAGKBNKBPCI_OFFSET UNITYSDK_OFFSET(0x11A1DAC0)
#define MLKECPODBDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A1DA70)
#define MLKECPODBDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1DAB0)

inline static constexpr unsigned int MLKECPODBDD___c_TypeDefinitionIndex = 53196;

class MLKECPODBDD___c : public ::System::Object
{
public:
	static ::System::Action_1<::MKMFENKPFKM*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::MKMFENKPFKM*>**)Il2CppClass::FromTypeDefinitionIndex(MLKECPODBDD___c_TypeDefinitionIndex)->GetStaticField(0x3E830);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MLKECPODBDD___c_TypeDefinitionIndex)->GetStaticField(0x3E838);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLKECPODBDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKECPODBDD___C__CTOR_OFFSET))(this);
	}

	::System::Void DAGKBNKBPCI(::MKMFENKPFKM* MBKOJAMIJJB)
	{
		return ((::System::Void(*)(::PVOID, ::MKMFENKPFKM*))((::PBYTE)hIl2Cpp + MLKECPODBDD___C_DAGKBNKBPCI_OFFSET))(this, MBKOJAMIJJB);
	}
};

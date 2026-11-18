#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFCCBJALLFK;
namespace System { template <typename T> class Action_1; }

#define PFPGCMLACMD___C_DAGKBNKBPCI_OFFSET UNITYSDK_OFFSET(0x155386C0)
#define PFPGCMLACMD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15538670)
#define PFPGCMLACMD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155386B0)

inline static constexpr unsigned int PFPGCMLACMD___c_TypeDefinitionIndex = 77399;

class PFPGCMLACMD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PFPGCMLACMD___c_TypeDefinitionIndex)->GetStaticField(0x4DE80);
	}
	static ::System::Action_1<::BFCCBJALLFK*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::BFCCBJALLFK*>**)Il2CppClass::FromTypeDefinitionIndex(PFPGCMLACMD___c_TypeDefinitionIndex)->GetStaticField(0x4DE88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPGCMLACMD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPGCMLACMD___C__CTOR_OFFSET))(this);
	}

	::System::Void DAGKBNKBPCI(::BFCCBJALLFK* GGADNNHAHMG)
	{
		return ((::System::Void(*)(::PVOID, ::BFCCBJALLFK*))((::PBYTE)hIl2Cpp + PFPGCMLACMD___C_DAGKBNKBPCI_OFFSET))(this, GGADNNHAHMG);
	}
};

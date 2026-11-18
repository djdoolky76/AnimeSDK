#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAANNHAOKEL;
namespace System { template <typename T> class Action_1; }

#define BPBFJKLKAML___C_IFHDMONFCBD_OFFSET UNITYSDK_OFFSET(0xFF946A0)
#define BPBFJKLKAML___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF94650)
#define BPBFJKLKAML___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFF94690)

inline static constexpr unsigned int BPBFJKLKAML___c_TypeDefinitionIndex = 51270;

class BPBFJKLKAML___c : public ::System::Object
{
public:
	static ::System::Action_1<::BAANNHAOKEL*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::BAANNHAOKEL*>**)Il2CppClass::FromTypeDefinitionIndex(BPBFJKLKAML___c_TypeDefinitionIndex)->GetStaticField(0x30F60);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BPBFJKLKAML___c_TypeDefinitionIndex)->GetStaticField(0x30F68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPBFJKLKAML___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFJKLKAML___C__CTOR_OFFSET))(this);
	}

	::System::Void IFHDMONFCBD(::BAANNHAOKEL* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::BAANNHAOKEL*))((::PBYTE)hIl2Cpp + BPBFJKLKAML___C_IFHDMONFCBD_OFFSET))(this, GBELIHABEDH);
	}
};

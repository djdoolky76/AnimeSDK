#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IHABOJKLPOI___C_BINFBMKBPLA_OFFSET UNITYSDK_OFFSET(0x1DCEFC10)
#define IHABOJKLPOI___C_OFOJHPECGDN_OFFSET UNITYSDK_OFFSET(0x1DCEFD50)
#define IHABOJKLPOI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCEFBC0)
#define IHABOJKLPOI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCEFC00)

inline static constexpr unsigned int IHABOJKLPOI___c_TypeDefinitionIndex = 95094;

class IHABOJKLPOI___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__38_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IHABOJKLPOI___c_TypeDefinitionIndex)->GetStaticField(0x52940);
	}
	static ::System::Action** StaticGet___9__49_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IHABOJKLPOI___c_TypeDefinitionIndex)->GetStaticField(0x52948);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IHABOJKLPOI___c_TypeDefinitionIndex)->GetStaticField(0x52950);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHABOJKLPOI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHABOJKLPOI___C__CTOR_OFFSET))(this);
	}

	::System::Void BINFBMKBPLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHABOJKLPOI___C_BINFBMKBPLA_OFFSET))(this);
	}

	::System::Void OFOJHPECGDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHABOJKLPOI___C_OFOJHPECGDN_OFFSET))(this);
	}
};

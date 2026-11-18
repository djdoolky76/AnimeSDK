#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFJLKEFDALJ;
namespace System { template <typename T> class Action_1; }

#define CJAKOIFLKFG___C_POCJMAPKMNE_OFFSET UNITYSDK_OFFSET(0x18DD91E0)
#define CJAKOIFLKFG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DD9190)
#define CJAKOIFLKFG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD91D0)

inline static constexpr unsigned int CJAKOIFLKFG___c_TypeDefinitionIndex = 54685;

class CJAKOIFLKFG___c : public ::System::Object
{
public:
	static ::System::Action_1<::BFJLKEFDALJ*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::BFJLKEFDALJ*>**)Il2CppClass::FromTypeDefinitionIndex(CJAKOIFLKFG___c_TypeDefinitionIndex)->GetStaticField(0x43090);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CJAKOIFLKFG___c_TypeDefinitionIndex)->GetStaticField(0x43098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJAKOIFLKFG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAKOIFLKFG___C__CTOR_OFFSET))(this);
	}

	::System::Void POCJMAPKMNE(::BFJLKEFDALJ* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::BFJLKEFDALJ*))((::PBYTE)hIl2Cpp + CJAKOIFLKFG___C_POCJMAPKMNE_OFFSET))(this, GLAOEHCGCFO);
	}
};

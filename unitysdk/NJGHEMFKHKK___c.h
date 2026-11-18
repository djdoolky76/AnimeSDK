#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoNPCCrowdPlatModelComponent;
namespace System { template <typename T> class Action_1; }

#define NJGHEMFKHKK___C_ANCPLBHHDEO_OFFSET UNITYSDK_OFFSET(0x1AE26630)
#define NJGHEMFKHKK___C_NEMGGLPHAJA_OFFSET UNITYSDK_OFFSET(0x1AE26500)
#define NJGHEMFKHKK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE264B0)
#define NJGHEMFKHKK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE264F0)

inline static constexpr unsigned int NJGHEMFKHKK___c_TypeDefinitionIndex = 71653;

class NJGHEMFKHKK___c : public ::System::Object
{
public:
	static ::System::Action_1<::MonoNPCCrowdPlatModelComponent*>** StaticGet___9__10_2()
	{
		return (::System::Action_1<::MonoNPCCrowdPlatModelComponent*>**)Il2CppClass::FromTypeDefinitionIndex(NJGHEMFKHKK___c_TypeDefinitionIndex)->GetStaticField(0x39850);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NJGHEMFKHKK___c_TypeDefinitionIndex)->GetStaticField(0x39858);
	}
	static ::System::Action_1<::MonoNPCCrowdPlatModelComponent*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::MonoNPCCrowdPlatModelComponent*>**)Il2CppClass::FromTypeDefinitionIndex(NJGHEMFKHKK___c_TypeDefinitionIndex)->GetStaticField(0x39860);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJGHEMFKHKK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK___C__CTOR_OFFSET))(this);
	}

	::System::Void NEMGGLPHAJA(::MonoNPCCrowdPlatModelComponent* JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MonoNPCCrowdPlatModelComponent*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK___C_NEMGGLPHAJA_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Void ANCPLBHHDEO(::MonoNPCCrowdPlatModelComponent* JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MonoNPCCrowdPlatModelComponent*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK___C_ANCPLBHHDEO_OFFSET))(this, JNDDJMAHNAI);
	}
};

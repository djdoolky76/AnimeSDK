#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHIEJFIKEHA;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MJHMACDCPEF___C_CCONPDGLPHL_OFFSET UNITYSDK_OFFSET(0x151D9370)
#define MJHMACDCPEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151D9320)
#define MJHMACDCPEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151D9360)

inline static constexpr unsigned int MJHMACDCPEF___c_TypeDefinitionIndex = 56500;

class MJHMACDCPEF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MJHMACDCPEF___c_TypeDefinitionIndex)->GetStaticField(0x48560);
	}
	static ::System::Action_2<::System::Boolean, ::GHIEJFIKEHA*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::System::Boolean, ::GHIEJFIKEHA*>**)Il2CppClass::FromTypeDefinitionIndex(MJHMACDCPEF___c_TypeDefinitionIndex)->GetStaticField(0x48568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJHMACDCPEF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHMACDCPEF___C__CTOR_OFFSET))(this);
	}

	::System::Void CCONPDGLPHL(::System::Boolean EBFCACIEKBC, ::GHIEJFIKEHA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::GHIEJFIKEHA*))((::PBYTE)hIl2Cpp + MJHMACDCPEF___C_CCONPDGLPHL_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};

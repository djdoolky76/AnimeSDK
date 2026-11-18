#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLHCPDPPIIH;
namespace System { template <typename T> class Action_1; }

#define COJKPPCNJCM___C_GLEMDJIMPFL_OFFSET UNITYSDK_OFFSET(0x19730EC0)
#define COJKPPCNJCM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19730E70)
#define COJKPPCNJCM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19730EB0)

inline static constexpr unsigned int COJKPPCNJCM___c_TypeDefinitionIndex = 52985;

class COJKPPCNJCM___c : public ::System::Object
{
public:
	static ::System::Action_1<::OLHCPDPPIIH*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::OLHCPDPPIIH*>**)Il2CppClass::FromTypeDefinitionIndex(COJKPPCNJCM___c_TypeDefinitionIndex)->GetStaticField(0x47C90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(COJKPPCNJCM___c_TypeDefinitionIndex)->GetStaticField(0x47C98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COJKPPCNJCM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJKPPCNJCM___C__CTOR_OFFSET))(this);
	}

	::System::Void GLEMDJIMPFL(::OLHCPDPPIIH* CHPPFKKIKMA)
	{
		return ((::System::Void(*)(::PVOID, ::OLHCPDPPIIH*))((::PBYTE)hIl2Cpp + COJKPPCNJCM___C_GLEMDJIMPFL_OFFSET))(this, CHPPFKKIKMA);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHMEICNMNCJ;
namespace System { template <typename T> class Action_1; }

#define LJKHOFMKCHJ___C_MMKEOPOGHLK_OFFSET UNITYSDK_OFFSET(0x16375100)
#define LJKHOFMKCHJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163750B0)
#define LJKHOFMKCHJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163750F0)

inline static constexpr unsigned int LJKHOFMKCHJ___c_TypeDefinitionIndex = 89716;

class LJKHOFMKCHJ___c : public ::System::Object
{
public:
	static ::System::Action_1<::GHMEICNMNCJ*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::GHMEICNMNCJ*>**)Il2CppClass::FromTypeDefinitionIndex(LJKHOFMKCHJ___c_TypeDefinitionIndex)->GetStaticField(0x41670);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LJKHOFMKCHJ___c_TypeDefinitionIndex)->GetStaticField(0x41678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJKHOFMKCHJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKHOFMKCHJ___C__CTOR_OFFSET))(this);
	}

	::System::Void MMKEOPOGHLK(::GHMEICNMNCJ* CEBMAGKAEOM)
	{
		return ((::System::Void(*)(::PVOID, ::GHMEICNMNCJ*))((::PBYTE)hIl2Cpp + LJKHOFMKCHJ___C_MMKEOPOGHLK_OFFSET))(this, CEBMAGKAEOM);
	}
};

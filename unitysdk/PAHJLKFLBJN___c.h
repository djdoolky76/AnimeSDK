#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PAHJLKFLBJN;

#define PAHJLKFLBJN___C_EDBKGJKBLIM_OFFSET UNITYSDK_OFFSET(0x1FE2B5F0)
#define PAHJLKFLBJN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE2B5A0)
#define PAHJLKFLBJN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE2B5E0)

inline static constexpr unsigned int PAHJLKFLBJN___c_TypeDefinitionIndex = 18220;

class PAHJLKFLBJN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PAHJLKFLBJN___c_TypeDefinitionIndex)->GetStaticField(0x8420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAHJLKFLBJN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHJLKFLBJN___C__CTOR_OFFSET))(this);
	}

	::PAHJLKFLBJN* EDBKGJKBLIM()
	{
		return ((::PAHJLKFLBJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHJLKFLBJN___C_EDBKGJKBLIM_OFFSET))(this);
	}
};

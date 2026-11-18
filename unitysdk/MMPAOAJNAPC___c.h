#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MMPAOAJNAPC___C_IPBPLHNJALA_OFFSET UNITYSDK_OFFSET(0x14DF5590)
#define MMPAOAJNAPC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DF5540)
#define MMPAOAJNAPC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF5580)

inline static constexpr unsigned int MMPAOAJNAPC___c_TypeDefinitionIndex = 54635;

class MMPAOAJNAPC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MMPAOAJNAPC___c_TypeDefinitionIndex)->GetStaticField(0x50B50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMPAOAJNAPC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPAOAJNAPC___C__CTOR_OFFSET))(this);
	}

	::System::Object* IPBPLHNJALA()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPAOAJNAPC___C_IPBPLHNJALA_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCLPKBONCJJ___C_GHIDMJBANNB_OFFSET UNITYSDK_OFFSET(0x15FBF700)
#define OCLPKBONCJJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FBF6B0)
#define OCLPKBONCJJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBF6F0)

inline static constexpr unsigned int OCLPKBONCJJ___c_TypeDefinitionIndex = 76340;

class OCLPKBONCJJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OCLPKBONCJJ___c_TypeDefinitionIndex)->GetStaticField(0x3F860);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCLPKBONCJJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLPKBONCJJ___C__CTOR_OFFSET))(this);
	}

	::System::Single GHIDMJBANNB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLPKBONCJJ___C_GHIDMJBANNB_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKFPGJEFDBF;

#define AKFPGJEFDBF___C_NKICDKGHMCG_OFFSET UNITYSDK_OFFSET(0x1FF6B800)
#define AKFPGJEFDBF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B7B0)
#define AKFPGJEFDBF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6B7F0)

inline static constexpr unsigned int AKFPGJEFDBF___c_TypeDefinitionIndex = 18212;

class AKFPGJEFDBF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AKFPGJEFDBF___c_TypeDefinitionIndex)->GetStaticField(0x8450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFPGJEFDBF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFPGJEFDBF___C__CTOR_OFFSET))(this);
	}

	::AKFPGJEFDBF* NKICDKGHMCG()
	{
		return ((::AKFPGJEFDBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFPGJEFDBF___C_NKICDKGHMCG_OFFSET))(this);
	}
};

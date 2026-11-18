#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFKHCDMJEKA;

#define GFKHCDMJEKA___C_JDLFHFDMHGE_OFFSET UNITYSDK_OFFSET(0x1FCDE770)
#define GFKHCDMJEKA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCDE720)
#define GFKHCDMJEKA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCDE760)

inline static constexpr unsigned int GFKHCDMJEKA___c_TypeDefinitionIndex = 18235;

class GFKHCDMJEKA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GFKHCDMJEKA___c_TypeDefinitionIndex)->GetStaticField(0x8510);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFKHCDMJEKA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKHCDMJEKA___C__CTOR_OFFSET))(this);
	}

	::GFKHCDMJEKA* JDLFHFDMHGE()
	{
		return ((::GFKHCDMJEKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKHCDMJEKA___C_JDLFHFDMHGE_OFFSET))(this);
	}
};

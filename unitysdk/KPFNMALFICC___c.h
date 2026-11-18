#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KPFNMALFICC;

#define KPFNMALFICC___C_KPHNLHHMJLH_OFFSET UNITYSDK_OFFSET(0x1FA9AF80)
#define KPFNMALFICC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA9AF30)
#define KPFNMALFICC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9AF70)

inline static constexpr unsigned int KPFNMALFICC___c_TypeDefinitionIndex = 18254;

class KPFNMALFICC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPFNMALFICC___c_TypeDefinitionIndex)->GetStaticField(0x8530);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPFNMALFICC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFNMALFICC___C__CTOR_OFFSET))(this);
	}

	::KPFNMALFICC* KPHNLHHMJLH()
	{
		return ((::KPFNMALFICC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFNMALFICC___C_KPHNLHHMJLH_OFFSET))(this);
	}
};

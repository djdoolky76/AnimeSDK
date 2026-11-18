#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CHNLAGKLALB.h"

#define JJOFKMIDICA_LMOGKFCIJIC_OFFSET UNITYSDK_OFFSET(0x1A479CA0)
#define JJOFKMIDICA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A479D00)
#define JJOFKMIDICA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A479CF0)

inline static constexpr unsigned int JJOFKMIDICA_TypeDefinitionIndex = 47178;

class JJOFKMIDICA : public ::System::Object
{
public:
	static ::JJOFKMIDICA** StaticGet_DDGNFJDLOKA()
	{
		return (::JJOFKMIDICA**)Il2CppClass::FromTypeDefinitionIndex(JJOFKMIDICA_TypeDefinitionIndex)->GetStaticField(0x44460);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOFKMIDICA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJOFKMIDICA__CCTOR_OFFSET))();
	}

	::CHNLAGKLALB LMOGKFCIJIC(::System::UInt32 ABHBKFJKINO)
	{
		return ((::CHNLAGKLALB(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJOFKMIDICA_LMOGKFCIJIC_OFFSET))(this, ABHBKFJKINO);
	}
};

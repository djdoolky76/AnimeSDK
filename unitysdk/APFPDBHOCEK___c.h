#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APFPDBHOCEK;

#define APFPDBHOCEK___C_GLJIGBDKCAP_OFFSET UNITYSDK_OFFSET(0x1FA0E080)
#define APFPDBHOCEK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0E030)
#define APFPDBHOCEK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0E070)

inline static constexpr unsigned int APFPDBHOCEK___c_TypeDefinitionIndex = 18260;

class APFPDBHOCEK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(APFPDBHOCEK___c_TypeDefinitionIndex)->GetStaticField(0x7E40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APFPDBHOCEK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFPDBHOCEK___C__CTOR_OFFSET))(this);
	}

	::APFPDBHOCEK* GLJIGBDKCAP()
	{
		return ((::APFPDBHOCEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFPDBHOCEK___C_GLJIGBDKCAP_OFFSET))(this);
	}
};

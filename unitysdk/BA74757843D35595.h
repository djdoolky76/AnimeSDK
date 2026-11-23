#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE09FDD7BC556D53.h"
#include "unitysdk/System/Object.h"

#define BA74757843D35595_A8588228CAAD3132_OFFSET UNITYSDK_OFFSET(0x3F01870)
#define BA74757843D35595_EFC6FC1BED3DD21E_OFFSET UNITYSDK_OFFSET(0x3F017E0)
#define BA74757843D35595__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA74757843D35595_TypeDefinitionIndex = 15271;

class BA74757843D35595 : public ::System::Object
{
public:
	static ::EE09FDD7BC556D53* StaticGet_ABB2BAAEF1A638BC()
	{
		return (::EE09FDD7BC556D53*)Il2CppClass::FromTypeDefinitionIndex(BA74757843D35595_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Boolean* StaticGet_AF310982FF0D1E67()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BA74757843D35595_TypeDefinitionIndex)->GetStaticField(0x58);
	}

	static ::EE09FDD7BC556D53 A8588228CAAD3132()
	{
		return ((::EE09FDD7BC556D53(*)())((::PBYTE)hIl2Cpp + BA74757843D35595_A8588228CAAD3132_OFFSET))();
	}

	static ::System::Int32 EFC6FC1BED3DD21E(::System::IntPtr B03018C24D85EDA4, ::System::Int32& F54AF627638DE3C9)
	{
		return ((::System::Int32(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + BA74757843D35595_EFC6FC1BED3DD21E_OFFSET))(B03018C24D85EDA4, F54AF627638DE3C9);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA74757843D35595__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DACHIABDACO;
namespace System { template <typename T> class Action_1; }

#define GCEHLBALCJD___C_KHLNJKNLGEF_OFFSET UNITYSDK_OFFSET(0x1812BA90)
#define GCEHLBALCJD___C_PJJJEHBOHMF_OFFSET UNITYSDK_OFFSET(0x1812BAF0)
#define GCEHLBALCJD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1812BA40)
#define GCEHLBALCJD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1812BA80)

inline static constexpr unsigned int GCEHLBALCJD___c_TypeDefinitionIndex = 80318;

class GCEHLBALCJD___c : public ::System::Object
{
public:
	static ::System::Action_1<::DACHIABDACO*>** StaticGet___9__16_0()
	{
		return (::System::Action_1<::DACHIABDACO*>**)Il2CppClass::FromTypeDefinitionIndex(GCEHLBALCJD___c_TypeDefinitionIndex)->GetStaticField(0x3AE60);
	}
	static ::System::Action_1<::DACHIABDACO*>** StaticGet___9__15_0()
	{
		return (::System::Action_1<::DACHIABDACO*>**)Il2CppClass::FromTypeDefinitionIndex(GCEHLBALCJD___c_TypeDefinitionIndex)->GetStaticField(0x3AE68);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GCEHLBALCJD___c_TypeDefinitionIndex)->GetStaticField(0x3AE70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCEHLBALCJD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEHLBALCJD___C__CTOR_OFFSET))(this);
	}

	::System::Void KHLNJKNLGEF(::DACHIABDACO* CFGEFGHBEBM)
	{
		return ((::System::Void(*)(::PVOID, ::DACHIABDACO*))((::PBYTE)hIl2Cpp + GCEHLBALCJD___C_KHLNJKNLGEF_OFFSET))(this, CFGEFGHBEBM);
	}

	::System::Void PJJJEHBOHMF(::DACHIABDACO* CFGEFGHBEBM)
	{
		return ((::System::Void(*)(::PVOID, ::DACHIABDACO*))((::PBYTE)hIl2Cpp + GCEHLBALCJD___C_PJJJEHBOHMF_OFFSET))(this, CFGEFGHBEBM);
	}
};

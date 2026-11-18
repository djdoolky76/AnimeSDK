#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define PGCKDGJCNLH___C_AMHINNJHBBG_OFFSET UNITYSDK_OFFSET(0x1AFE07E0)
#define PGCKDGJCNLH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFE0790)
#define PGCKDGJCNLH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE07D0)

inline static constexpr unsigned int PGCKDGJCNLH___c_TypeDefinitionIndex = 44637;

class PGCKDGJCNLH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PGCKDGJCNLH___c_TypeDefinitionIndex)->GetStaticField(0x39DE0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__27_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PGCKDGJCNLH___c_TypeDefinitionIndex)->GetStaticField(0x39DE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGCKDGJCNLH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCKDGJCNLH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 AMHINNJHBBG(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PGCKDGJCNLH___C_AMHINNJHBBG_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};

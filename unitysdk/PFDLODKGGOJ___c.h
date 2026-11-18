#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNBLIFPKFEJ.h"
#include "unitysdk/System/Object.h"

#define PFDLODKGGOJ___C_FDKFBIAOIHJ_OFFSET UNITYSDK_OFFSET(0x1B84D850)
#define PFDLODKGGOJ___C_GDEFGJCICLI_OFFSET UNITYSDK_OFFSET(0x1B84D860)
#define PFDLODKGGOJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B84D800)
#define PFDLODKGGOJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B84D840)

inline static constexpr unsigned int PFDLODKGGOJ___c_TypeDefinitionIndex = 24194;

class PFDLODKGGOJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PFDLODKGGOJ___c_TypeDefinitionIndex)->GetStaticField(0x18100);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFDLODKGGOJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDLODKGGOJ___C__CTOR_OFFSET))(this);
	}

	::DNBLIFPKFEJ FDKFBIAOIHJ(::System::Int32 HAAEBCOBKFF)
	{
		return ((::DNBLIFPKFEJ(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFDLODKGGOJ___C_FDKFBIAOIHJ_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 GDEFGJCICLI(::DNBLIFPKFEJ HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::DNBLIFPKFEJ))((::PBYTE)hIl2Cpp + PFDLODKGGOJ___C_GDEFGJCICLI_OFFSET))(this, HAAEBCOBKFF);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNBLIFPKFEJ.h"
#include "unitysdk/System/Object.h"

#define DCADLJAPMBH___C_LCFCPJPHJLP_OFFSET UNITYSDK_OFFSET(0x1AAC5520)
#define DCADLJAPMBH___C_PHBPOFCIOMJ_OFFSET UNITYSDK_OFFSET(0x1AAC5530)
#define DCADLJAPMBH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAC54D0)
#define DCADLJAPMBH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAC5510)

inline static constexpr unsigned int DCADLJAPMBH___c_TypeDefinitionIndex = 22857;

class DCADLJAPMBH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DCADLJAPMBH___c_TypeDefinitionIndex)->GetStaticField(0xB9C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCADLJAPMBH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCADLJAPMBH___C__CTOR_OFFSET))(this);
	}

	::DNBLIFPKFEJ LCFCPJPHJLP(::System::Int32 HAAEBCOBKFF)
	{
		return ((::DNBLIFPKFEJ(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCADLJAPMBH___C_LCFCPJPHJLP_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 PHBPOFCIOMJ(::DNBLIFPKFEJ HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::DNBLIFPKFEJ))((::PBYTE)hIl2Cpp + DCADLJAPMBH___C_PHBPOFCIOMJ_OFFSET))(this, HAAEBCOBKFF);
	}
};

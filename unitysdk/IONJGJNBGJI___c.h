#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FeverConfig; }
namespace System { template <typename T> class Func_1; }

#define IONJGJNBGJI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1988DA90)
#define IONJGJNBGJI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1988DA40)
#define IONJGJNBGJI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1988DA80)

inline static constexpr unsigned int IONJGJNBGJI___c_TypeDefinitionIndex = 44967;

class IONJGJNBGJI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IONJGJNBGJI___c_TypeDefinitionIndex)->GetStaticField(0x4D380);
	}
	static ::System::Func_1<::MoleMole::FeverConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::FeverConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IONJGJNBGJI___c_TypeDefinitionIndex)->GetStaticField(0x4D388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONJGJNBGJI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJGJNBGJI___C__CTOR_OFFSET))(this);
	}

	::MoleMole::FeverConfig* LPCHADDECLC()
	{
		return ((::MoleMole::FeverConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJGJNBGJI___C_LPCHADDECLC_OFFSET))(this);
	}
};

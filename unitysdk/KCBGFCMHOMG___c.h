#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DitherConfigSeparate; }
namespace System { template <typename T> class Func_1; }

#define KCBGFCMHOMG___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1514C190)
#define KCBGFCMHOMG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1514C140)
#define KCBGFCMHOMG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1514C180)

inline static constexpr unsigned int KCBGFCMHOMG___c_TypeDefinitionIndex = 55017;

class KCBGFCMHOMG___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::DitherConfigSeparate*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::DitherConfigSeparate*>**)Il2CppClass::FromTypeDefinitionIndex(KCBGFCMHOMG___c_TypeDefinitionIndex)->GetStaticField(0x4A070);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KCBGFCMHOMG___c_TypeDefinitionIndex)->GetStaticField(0x4A078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCBGFCMHOMG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBGFCMHOMG___C__CTOR_OFFSET))(this);
	}

	::MoleMole::DitherConfigSeparate* LPCHADDECLC()
	{
		return ((::MoleMole::DitherConfigSeparate*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBGFCMHOMG___C_LPCHADDECLC_OFFSET))(this);
	}
};

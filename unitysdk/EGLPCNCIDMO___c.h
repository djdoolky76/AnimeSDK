#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShootingGroundScriptableObject; }
namespace System { template <typename T> class Func_1; }

#define EGLPCNCIDMO___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x148DECF0)
#define EGLPCNCIDMO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148DECA0)
#define EGLPCNCIDMO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148DECE0)

inline static constexpr unsigned int EGLPCNCIDMO___c_TypeDefinitionIndex = 39130;

class EGLPCNCIDMO___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigShootingGroundScriptableObject*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigShootingGroundScriptableObject*>**)Il2CppClass::FromTypeDefinitionIndex(EGLPCNCIDMO___c_TypeDefinitionIndex)->GetStaticField(0x3AB20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGLPCNCIDMO___c_TypeDefinitionIndex)->GetStaticField(0x3AB28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLPCNCIDMO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLPCNCIDMO___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigShootingGroundScriptableObject* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigShootingGroundScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLPCNCIDMO___C_LPCHADDECLC_OFFSET))(this);
	}
};

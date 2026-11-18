#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFixedCameraEntry; }
namespace System { template <typename T> class Func_1; }

#define DGEHGNECNEC___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x7F761B0)
#define DGEHGNECNEC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F76160)
#define DGEHGNECNEC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7F761A0)

inline static constexpr unsigned int DGEHGNECNEC___c_TypeDefinitionIndex = 66926;

class DGEHGNECNEC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DGEHGNECNEC___c_TypeDefinitionIndex)->GetStaticField(0x50710);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigFixedCameraEntry*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigFixedCameraEntry*>**)Il2CppClass::FromTypeDefinitionIndex(DGEHGNECNEC___c_TypeDefinitionIndex)->GetStaticField(0x50718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGEHGNECNEC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEHGNECNEC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigFixedCameraEntry* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigFixedCameraEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEHGNECNEC___C_LPCHADDECLC_OFFSET))(this);
	}
};

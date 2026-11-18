#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { template <typename T> class Func_1; }

#define PBLMONCMBAA___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15FFC640)
#define PBLMONCMBAA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FFC5F0)
#define PBLMONCMBAA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFC630)

inline static constexpr unsigned int PBLMONCMBAA___c_TypeDefinitionIndex = 60473;

class PBLMONCMBAA___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ScenePerformConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ScenePerformConfig*>**)Il2CppClass::FromTypeDefinitionIndex(PBLMONCMBAA___c_TypeDefinitionIndex)->GetStaticField(0x39D90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PBLMONCMBAA___c_TypeDefinitionIndex)->GetStaticField(0x39D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBLMONCMBAA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLMONCMBAA___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ScenePerformConfig* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ScenePerformConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLMONCMBAA___C_LPCHADDECLC_OFFSET))(this);
	}
};

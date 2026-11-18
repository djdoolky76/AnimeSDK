#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBattlePhotoActivity; }
namespace System { template <typename T> class Func_1; }

#define ONIJJFKCPEO___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1AF946D0)
#define ONIJJFKCPEO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF94680)
#define ONIJJFKCPEO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF946C0)

inline static constexpr unsigned int ONIJJFKCPEO___c_TypeDefinitionIndex = 71515;

class ONIJJFKCPEO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ONIJJFKCPEO___c_TypeDefinitionIndex)->GetStaticField(0x49230);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigBattlePhotoActivity*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigBattlePhotoActivity*>**)Il2CppClass::FromTypeDefinitionIndex(ONIJJFKCPEO___c_TypeDefinitionIndex)->GetStaticField(0x49238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONIJJFKCPEO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJJFKCPEO___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigBattlePhotoActivity* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigBattlePhotoActivity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJJFKCPEO___C_LPCHADDECLC_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigChessEntityMap; }
namespace System { template <typename T> class Func_1; }

#define CONFIGCHESSENTITYDATAMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13281DD0)
#define CONFIGCHESSENTITYDATAMODULE___C__CREATEOP_B__2_0_OFFSET UNITYSDK_OFFSET(0x13281E20)
#define CONFIGCHESSENTITYDATAMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13281E10)

inline static constexpr unsigned int ConfigChessEntityDataModule___c_TypeDefinitionIndex = 84566;

class ConfigChessEntityDataModule___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessEntityDataModule___c_TypeDefinitionIndex)->GetStaticField(0x49930);
	}
	static ::System::Func_1<::MoleMole::ConfigChessEntityMap*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigChessEntityMap*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessEntityDataModule___c_TypeDefinitionIndex)->GetStaticField(0x49938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATAMODULE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATAMODULE___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigChessEntityMap* _CreateOp_b__2_0()
	{
		return ((::MoleMole::ConfigChessEntityMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATAMODULE___C__CREATEOP_B__2_0_OFFSET))(this);
	}
};

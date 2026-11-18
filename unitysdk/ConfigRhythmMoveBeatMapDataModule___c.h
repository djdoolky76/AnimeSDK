#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigRhythmMoveBeatMap; }
namespace System { template <typename T> class Func_1; }

#define CONFIGRHYTHMMOVEBEATMAPDATAMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12050740)
#define CONFIGRHYTHMMOVEBEATMAPDATAMODULE___C__CREATEOP_B__2_0_OFFSET UNITYSDK_OFFSET(0x12050790)
#define CONFIGRHYTHMMOVEBEATMAPDATAMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12050780)

inline static constexpr unsigned int ConfigRhythmMoveBeatMapDataModule___c_TypeDefinitionIndex = 90935;

class ConfigRhythmMoveBeatMapDataModule___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::ConfigRhythmMoveBeatMap*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigRhythmMoveBeatMap*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigRhythmMoveBeatMapDataModule___c_TypeDefinitionIndex)->GetStaticField(0x430E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigRhythmMoveBeatMapDataModule___c_TypeDefinitionIndex)->GetStaticField(0x430E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATAMODULE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATAMODULE___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigRhythmMoveBeatMap* _CreateOp_b__2_0()
	{
		return ((::MoleMole::ConfigRhythmMoveBeatMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGRHYTHMMOVEBEATMAPDATAMODULE___C__CREATEOP_B__2_0_OFFSET))(this);
	}
};

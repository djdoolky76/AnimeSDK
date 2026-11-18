#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISwitchTeamBattleLevelRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IOHDPFDAFFA___C_IDPCFJJMDJA_OFFSET UNITYSDK_OFFSET(0x16AB4BD0)
#define IOHDPFDAFFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AB4B80)
#define IOHDPFDAFFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB4BC0)

inline static constexpr unsigned int IOHDPFDAFFA___c_TypeDefinitionIndex = 58696;

class IOHDPFDAFFA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IOHDPFDAFFA___c_TypeDefinitionIndex)->GetStaticField(0x4F680);
	}
	static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::System::Object*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IOHDPFDAFFA___c_TypeDefinitionIndex)->GetStaticField(0x4F688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOHDPFDAFFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHDPFDAFFA___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 IDPCFJJMDJA(::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data* LJBPECKCCEA)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*))((::PBYTE)hIl2Cpp + IOHDPFDAFFA___C_IDPCFJJMDJA_OFFSET))(this, LJBPECKCCEA);
	}
};

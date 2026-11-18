#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityRhythmClickBeatmapConfig; }
namespace System { template <typename T> class Func_1; }

#define ALKKMGGGLOB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x11BC1760)
#define ALKKMGGGLOB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BC1710)
#define ALKKMGGGLOB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC1750)

inline static constexpr unsigned int ALKKMGGGLOB___c_TypeDefinitionIndex = 58903;

class ALKKMGGGLOB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ALKKMGGGLOB___c_TypeDefinitionIndex)->GetStaticField(0x40010);
	}
	static ::System::Func_1<::MoleMole::ActivityRhythmClickBeatmapConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ActivityRhythmClickBeatmapConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ALKKMGGGLOB___c_TypeDefinitionIndex)->GetStaticField(0x40018);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALKKMGGGLOB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKKMGGGLOB___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ActivityRhythmClickBeatmapConfig* LPCHADDECLC()
	{
		return ((::MoleMole::ActivityRhythmClickBeatmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKKMGGGLOB___C_LPCHADDECLC_OFFSET))(this);
	}
};

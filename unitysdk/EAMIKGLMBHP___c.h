#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Level { class LevelConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define EAMIKGLMBHP___C_JAFCCEBIBJP_OFFSET UNITYSDK_OFFSET(0x13537800)
#define EAMIKGLMBHP___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x13537640)
#define EAMIKGLMBHP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135375F0)
#define EAMIKGLMBHP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13537630)

inline static constexpr unsigned int EAMIKGLMBHP___c_TypeDefinitionIndex = 71801;

class EAMIKGLMBHP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EAMIKGLMBHP___c_TypeDefinitionIndex)->GetStaticField(0x4B7F0);
	}
	static ::System::Func_2<::MoleMole::Level::LevelConfig*, ::MoleMole::Level::LevelConfig*>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::MoleMole::Level::LevelConfig*, ::MoleMole::Level::LevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(EAMIKGLMBHP___c_TypeDefinitionIndex)->GetStaticField(0x4B7F8);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::Level::LevelConfig*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::Level::LevelConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(EAMIKGLMBHP___c_TypeDefinitionIndex)->GetStaticField(0x4B800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAMIKGLMBHP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMIKGLMBHP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::Level::LevelConfig*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::Level::LevelConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMIKGLMBHP___C_JFNPHKAHEJF_OFFSET))(this);
	}

	::MoleMole::Level::LevelConfig* JAFCCEBIBJP(::MoleMole::Level::LevelConfig* DFMKILICPFB)
	{
		return ((::MoleMole::Level::LevelConfig*(*)(::PVOID, ::MoleMole::Level::LevelConfig*))((::PBYTE)hIl2Cpp + EAMIKGLMBHP___C_JAFCCEBIBJP_OFFSET))(this, DFMKILICPFB);
	}
};

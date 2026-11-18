#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKBFCKAFPIN___C_GBIAKPMOEMG_OFFSET UNITYSDK_OFFSET(0x14FBF420)
#define JKBFCKAFPIN___C_HFFHMFCDCHO_OFFSET UNITYSDK_OFFSET(0x14FBF290)
#define JKBFCKAFPIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FBF240)
#define JKBFCKAFPIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBF280)

inline static constexpr unsigned int JKBFCKAFPIN___c_TypeDefinitionIndex = 39755;

class JKBFCKAFPIN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JKBFCKAFPIN___c_TypeDefinitionIndex)->GetStaticField(0x3B610);
	}
	static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(JKBFCKAFPIN___c_TypeDefinitionIndex)->GetStaticField(0x3B618);
	}
	static ::System::Action** StaticGet___9__21_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(JKBFCKAFPIN___c_TypeDefinitionIndex)->GetStaticField(0x3B620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKBFCKAFPIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBFCKAFPIN___C__CTOR_OFFSET))(this);
	}

	::System::Void HFFHMFCDCHO(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + JKBFCKAFPIN___C_HFFHMFCDCHO_OFFSET))(this, NNJOMEFILCC);
	}

	::System::Void GBIAKPMOEMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBFCKAFPIN___C_GBIAKPMOEMG_OFFSET))(this);
	}
};

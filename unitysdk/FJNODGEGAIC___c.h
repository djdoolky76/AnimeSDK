#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJNODGEGAIC___C_EDGANENABHG_OFFSET UNITYSDK_OFFSET(0x10EBCF60)
#define FJNODGEGAIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10EBCF10)
#define FJNODGEGAIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBCF50)

inline static constexpr unsigned int FJNODGEGAIC___c_TypeDefinitionIndex = 64168;

class FJNODGEGAIC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FJNODGEGAIC___c_TypeDefinitionIndex)->GetStaticField(0x37700);
	}
	static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>** StaticGet___9__53_0()
	{
		return (::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(FJNODGEGAIC___c_TypeDefinitionIndex)->GetStaticField(0x37708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJNODGEGAIC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNODGEGAIC___C__CTOR_OFFSET))(this);
	}

	::System::Void EDGANENABHG(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + FJNODGEGAIC___C_EDGANENABHG_OFFSET))(this, NNJOMEFILCC);
	}
};

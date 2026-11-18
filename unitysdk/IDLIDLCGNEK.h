#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"

namespace MoleMole { class ConfigUIMainPageBuddiesShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDLIDLCGNEK_BIMMPOKCPPK_OFFSET UNITYSDK_OFFSET(0x15EA7830)
#define IDLIDLCGNEK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15EA6E70)
#define IDLIDLCGNEK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15EA7AB0)
#define IDLIDLCGNEK_HPFNJEHIDGG_OFFSET UNITYSDK_OFFSET(0x15EA72B0)
#define IDLIDLCGNEK_LOLNFBDNALK_OFFSET UNITYSDK_OFFSET(0x15EA6BF0)

inline static constexpr unsigned int IDLIDLCGNEK_TypeDefinitionIndex = 61023;

class IDLIDLCGNEK : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIMainPageBuddiesShow** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ConfigUIMainPageBuddiesShow**)Il2CppClass::FromTypeDefinitionIndex(IDLIDLCGNEK_TypeDefinitionIndex)->GetStaticField(0x32350);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>** StaticGet_OODOINBDDMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(IDLIDLCGNEK_TypeDefinitionIndex)->GetStaticField(0x32358);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_ANACDLFGJMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(IDLIDLCGNEK_TypeDefinitionIndex)->GetStaticField(0x32360);
	}

	static ::System::Boolean LOLNFBDNALK(::System::Int32 MKKDGLGFANH, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*& DHMLKNEDOAH)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*&))((::PBYTE)hIl2Cpp + IDLIDLCGNEK_LOLNFBDNALK_OFFSET))(MKKDGLGFANH, DHMLKNEDOAH);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IDLIDLCGNEK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void HPFNJEHIDGG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDLIDLCGNEK_HPFNJEHIDGG_OFFSET))();
	}

	static ::System::Boolean BIMMPOKCPPK(::System::Int32 MKKDGLGFANH, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + IDLIDLCGNEK_BIMMPOKCPPK_OFFSET))(MKKDGLGFANH, HMMMOCJAEOA);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IDLIDLCGNEK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"

namespace MoleMole { class ConfigUIMainPageShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPGCIMKCPHH_BIMMPOKCPPK_OFFSET UNITYSDK_OFFSET(0x148BF180)
#define DPGCIMKCPHH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x148BE540)
#define DPGCIMKCPHH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x148BF400)
#define DPGCIMKCPHH_HPFNJEHIDGG_OFFSET UNITYSDK_OFFSET(0x148BE980)
#define DPGCIMKCPHH_LOLNFBDNALK_OFFSET UNITYSDK_OFFSET(0x148BEF00)

inline static constexpr unsigned int DPGCIMKCPHH_TypeDefinitionIndex = 69653;

class DPGCIMKCPHH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_ANACDLFGJMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DPGCIMKCPHH_TypeDefinitionIndex)->GetStaticField(0x3AA70);
	}
	static ::MoleMole::ConfigUIMainPageShow** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ConfigUIMainPageShow**)Il2CppClass::FromTypeDefinitionIndex(DPGCIMKCPHH_TypeDefinitionIndex)->GetStaticField(0x3AA78);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>** StaticGet_OODOINBDDMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(DPGCIMKCPHH_TypeDefinitionIndex)->GetStaticField(0x3AA80);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DPGCIMKCPHH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean LOLNFBDNALK(::System::Int32 MKKDGLGFANH, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*& DHMLKNEDOAH)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*&))((::PBYTE)hIl2Cpp + DPGCIMKCPHH_LOLNFBDNALK_OFFSET))(MKKDGLGFANH, DHMLKNEDOAH);
	}

	static ::System::Boolean BIMMPOKCPPK(::System::Int32 MKKDGLGFANH, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + DPGCIMKCPHH_BIMMPOKCPPK_OFFSET))(MKKDGLGFANH, HMMMOCJAEOA);
	}

	static ::System::Void HPFNJEHIDGG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPGCIMKCPHH_HPFNJEHIDGG_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DPGCIMKCPHH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};

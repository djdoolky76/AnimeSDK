#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"

namespace MoleMole { class ConfigUIMainPageSkinShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMEFDCMLFEM_BIMMPOKCPPK_OFFSET UNITYSDK_OFFSET(0x1381D340)
#define IMEFDCMLFEM_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1381C990)
#define IMEFDCMLFEM_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1381D840)
#define IMEFDCMLFEM_HPFNJEHIDGG_OFFSET UNITYSDK_OFFSET(0x1381CDD0)
#define IMEFDCMLFEM_LOLNFBDNALK_OFFSET UNITYSDK_OFFSET(0x1381D5C0)

inline static constexpr unsigned int IMEFDCMLFEM_TypeDefinitionIndex = 47310;

class IMEFDCMLFEM : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIMainPageSkinShow** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ConfigUIMainPageSkinShow**)Il2CppClass::FromTypeDefinitionIndex(IMEFDCMLFEM_TypeDefinitionIndex)->GetStaticField(0x3E1B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_ANACDLFGJMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(IMEFDCMLFEM_TypeDefinitionIndex)->GetStaticField(0x3E1B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MainPageItemShowSetting*>** StaticGet_OODOINBDDMB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MainPageItemShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(IMEFDCMLFEM_TypeDefinitionIndex)->GetStaticField(0x3E1C0);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IMEFDCMLFEM_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean BIMMPOKCPPK(::System::Int32 MKKDGLGFANH, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + IMEFDCMLFEM_BIMMPOKCPPK_OFFSET))(MKKDGLGFANH, HMMMOCJAEOA);
	}

	static ::System::Void HPFNJEHIDGG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMEFDCMLFEM_HPFNJEHIDGG_OFFSET))();
	}

	static ::System::Boolean LOLNFBDNALK(::System::Int32 MKKDGLGFANH, ::MoleMole::MainPageItemShowSetting*& PANBKFEPDFO)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::MainPageItemShowSetting*&))((::PBYTE)hIl2Cpp + IMEFDCMLFEM_LOLNFBDNALK_OFFSET))(MKKDGLGFANH, PANBKFEPDFO);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IMEFDCMLFEM_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};

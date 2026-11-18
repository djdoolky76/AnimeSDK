#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace MoleMole { class GalGameFacialSetting; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGEFLIGFLJL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1A30D840)
#define LGEFLIGFLJL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1A30DC40)
#define LGEFLIGFLJL_DHPKCBHADHB_OFFSET UNITYSDK_OFFSET(0x1A30D550)
#define LGEFLIGFLJL_EBMIJGIEDGA_OFFSET UNITYSDK_OFFSET(0x1A30D130)
#define LGEFLIGFLJL_EMCBKBADMEJ_OFFSET UNITYSDK_OFFSET(0x1A30DD30)
#define LGEFLIGFLJL_HFENAHPFNKL_OFFSET UNITYSDK_OFFSET(0x1A30DA60)
#define LGEFLIGFLJL_OFBOIAGAHDH_OFFSET UNITYSDK_OFFSET(0x1A30CCD0)

inline static constexpr unsigned int LGEFLIGFLJL_TypeDefinitionIndex = 62380;

class LGEFLIGFLJL : public ::System::Object
{
public:
	static ::MoleMole::ConfigGalGameAvatarShow** StaticGet_CKAGGAJDMIE()
	{
		return (::MoleMole::ConfigGalGameAvatarShow**)Il2CppClass::FromTypeDefinitionIndex(LGEFLIGFLJL_TypeDefinitionIndex)->GetStaticField(0x4A1D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>** StaticGet_NEAEGPHGOKD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>**)Il2CppClass::FromTypeDefinitionIndex(LGEFLIGFLJL_TypeDefinitionIndex)->GetStaticField(0x4A1D8);
	}

	static ::System::Void OFBOIAGAHDH(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_OFBOIAGAHDH_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::GalGameFacialSetting* EBMIJGIEDGA(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::GalGameFacialSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_EBMIJGIEDGA_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::UIAvatarCommonLightSetting* DHPKCBHADHB()
	{
		return ((::MoleMole::UIAvatarCommonLightSetting*(*)())((::PBYTE)hIl2Cpp + LGEFLIGFLJL_DHPKCBHADHB_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigGalGameAvatarShow* HFENAHPFNKL()
	{
		return ((::MoleMole::ConfigGalGameAvatarShow*(*)())((::PBYTE)hIl2Cpp + LGEFLIGFLJL_HFENAHPFNKL_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::AvatarShowSetting* EMCBKBADMEJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::AvatarShowSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_EMCBKBADMEJ_OFFSET))(MCOHLHMKLIP);
	}
};

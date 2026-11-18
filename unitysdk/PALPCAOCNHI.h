#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LABDAGJPPLO.h"
#include "unitysdk/MoleMole/Config/LanguageTextStyleConfig.h"
#include "unitysdk/OHHAGPCBOKC.h"

class NLGBJFDJJIH;
namespace MoleMole::Config { class ConfigUITextStyle; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PALPCAOCNHI_AJHCIPHHFID_OFFSET UNITYSDK_OFFSET(0xFD9C540)
#define PALPCAOCNHI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0xFD9C370)
#define PALPCAOCNHI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xFD9CC00)
#define PALPCAOCNHI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xFD9CB10)
#define PALPCAOCNHI_DPFIIDAJEPH_OFFSET UNITYSDK_OFFSET(0xFD9BFD0)
#define PALPCAOCNHI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0xFD9CF80)
#define PALPCAOCNHI_MKEPNPGHDBA_1_OFFSET UNITYSDK_OFFSET(0xFD9CD10)
#define PALPCAOCNHI_MKEPNPGHDBA_OFFSET UNITYSDK_OFFSET(0xFD9BDA0)
#define PALPCAOCNHI_NHBHDHGLOJK_OFFSET UNITYSDK_OFFSET(0xFD9C830)
#define PALPCAOCNHI_OHGAHOOCMHE_OFFSET UNITYSDK_OFFSET(0xFD9C150)

inline static constexpr unsigned int PALPCAOCNHI_TypeDefinitionIndex = 41362;

class PALPCAOCNHI : public ::System::Object
{
public:
	static ::NLGBJFDJJIH** StaticGet_PKFAFAJBDDE()
	{
		return (::NLGBJFDJJIH**)Il2CppClass::FromTypeDefinitionIndex(PALPCAOCNHI_TypeDefinitionIndex)->GetStaticField(0x36170);
	}
	static ::MoleMole::Config::ConfigUITextStyle** StaticGet_LJLNEOFFBBD()
	{
		return (::MoleMole::Config::ConfigUITextStyle**)Il2CppClass::FromTypeDefinitionIndex(PALPCAOCNHI_TypeDefinitionIndex)->GetStaticField(0x36178);
	}

	static ::System::Boolean MKEPNPGHDBA(::LABDAGJPPLO& AAOCANGHBDG, ::OHHAGPCBOKC& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::LABDAGJPPLO&, ::OHHAGPCBOKC&))((::PBYTE)hIl2Cpp + PALPCAOCNHI_MKEPNPGHDBA_OFFSET))(AAOCANGHBDG, IGAAKDOIPNN);
	}

	static ::System::Boolean OHGAHOOCMHE(::System::String* ABFOABHBENH, ::MoleMole::Config::LanguageTextStyleConfig& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::LanguageTextStyleConfig&))((::PBYTE)hIl2Cpp + PALPCAOCNHI_OHGAHOOCMHE_OFFSET))(ABFOABHBENH, IGAAKDOIPNN);
	}

	static ::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PALPCAOCNHI_CHLEALKAOJO_OFFSET))();
	}

	static ::System::Void AJHCIPHHFID()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PALPCAOCNHI_AJHCIPHHFID_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PALPCAOCNHI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void NHBHDHGLOJK(::MoleMole::Config::ConfigUITextStyle* DFMKILICPFB)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigUITextStyle*))((::PBYTE)hIl2Cpp + PALPCAOCNHI_NHBHDHGLOJK_OFFSET))(DFMKILICPFB);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PALPCAOCNHI_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DPFIIDAJEPH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PALPCAOCNHI_DPFIIDAJEPH_OFFSET))();
	}

	static ::System::Boolean MKEPNPGHDBA_1(::System::String* ABFOABHBENH, ::MoleMole::LanguageType MBABHIFLICA, ::OHHAGPCBOKC& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::LanguageType, ::OHHAGPCBOKC&))((::PBYTE)hIl2Cpp + PALPCAOCNHI_MKEPNPGHDBA_1_OFFSET))(ABFOABHBENH, MBABHIFLICA, IGAAKDOIPNN);
	}

	static ::MoleMole::Config::ConfigUITextStyle* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigUITextStyle*(*)())((::PBYTE)hIl2Cpp + PALPCAOCNHI_KGNEJKNNODJ_OFFSET))();
	}
};

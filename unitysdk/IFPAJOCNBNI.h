#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZenkovSpecialAvatar; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IFPAJOCNBNI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15EBA860)
#define IFPAJOCNBNI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15EBAA70)
#define IFPAJOCNBNI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x15EBAB60)

inline static constexpr unsigned int IFPAJOCNBNI_TypeDefinitionIndex = 60036;

class IFPAJOCNBNI : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigZenkovSpecialAvatar** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigZenkovSpecialAvatar**)Il2CppClass::FromTypeDefinitionIndex(IFPAJOCNBNI_TypeDefinitionIndex)->GetStaticField(0x37CF0);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IFPAJOCNBNI_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IFPAJOCNBNI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigZenkovSpecialAvatar* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigZenkovSpecialAvatar*(*)())((::PBYTE)hIl2Cpp + IFPAJOCNBNI_KGNEJKNNODJ_OFFSET))();
	}
};

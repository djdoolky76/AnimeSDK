#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigControllableObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IGOLNCFNPDB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x141D79E0)
#define IGOLNCFNPDB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x141D78F0)
#define IGOLNCFNPDB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x141D7710)

inline static constexpr unsigned int IGOLNCFNPDB_TypeDefinitionIndex = 70515;

class IGOLNCFNPDB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigControllableObject** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigControllableObject**)Il2CppClass::FromTypeDefinitionIndex(IGOLNCFNPDB_TypeDefinitionIndex)->GetStaticField(0x49E50);
	}

	static ::MoleMole::Config::ConfigControllableObject* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigControllableObject*(*)())((::PBYTE)hIl2Cpp + IGOLNCFNPDB_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IGOLNCFNPDB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IGOLNCFNPDB_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};

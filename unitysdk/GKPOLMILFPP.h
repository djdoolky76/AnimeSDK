#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHack; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GKPOLMILFPP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15F26CB0)
#define GKPOLMILFPP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15F270A0)
#define GKPOLMILFPP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x15F26EC0)

inline static constexpr unsigned int GKPOLMILFPP_TypeDefinitionIndex = 45678;

class GKPOLMILFPP : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHack** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigHack**)Il2CppClass::FromTypeDefinitionIndex(GKPOLMILFPP_TypeDefinitionIndex)->GetStaticField(0x44180);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GKPOLMILFPP_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigHack* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigHack*(*)())((::PBYTE)hIl2Cpp + GKPOLMILFPP_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GKPOLMILFPP_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FADFIFIOFNC_BBHBIJMKLNF_OFFSET UNITYSDK_OFFSET(0x158C8900)
#define FADFIFIOFNC_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x158C8BF0)
#define FADFIFIOFNC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x158C88B0)
#define FADFIFIOFNC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x158C8AC0)

inline static constexpr unsigned int FADFIFIOFNC_TypeDefinitionIndex = 61619;

class FADFIFIOFNC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLevelResultPerforms** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigLevelResultPerforms**)Il2CppClass::FromTypeDefinitionIndex(FADFIFIOFNC_TypeDefinitionIndex)->GetStaticField(0x318A0);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FADFIFIOFNC_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void BBHBIJMKLNF(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FADFIFIOFNC_BBHBIJMKLNF_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FADFIFIOFNC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigLevelResultPerforms* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms*(*)())((::PBYTE)hIl2Cpp + FADFIFIOFNC_COPIDBEMEIE_OFFSET))();
	}
};

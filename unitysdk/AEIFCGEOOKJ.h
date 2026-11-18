#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigInLevelCustomized; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AEIFCGEOOKJ_BBHBIJMKLNF_OFFSET UNITYSDK_OFFSET(0x126485D0)
#define AEIFCGEOOKJ_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x12648790)
#define AEIFCGEOOKJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x12648580)
#define AEIFCGEOOKJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x12648450)

inline static constexpr unsigned int AEIFCGEOOKJ_TypeDefinitionIndex = 60405;

class AEIFCGEOOKJ : public ::System::Object
{
public:
	static ::MoleMole::ConfigInLevelCustomized** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ConfigInLevelCustomized**)Il2CppClass::FromTypeDefinitionIndex(AEIFCGEOOKJ_TypeDefinitionIndex)->GetStaticField(0x2FAF0);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + AEIFCGEOOKJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AEIFCGEOOKJ_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigInLevelCustomized* COPIDBEMEIE()
	{
		return ((::MoleMole::ConfigInLevelCustomized*(*)())((::PBYTE)hIl2Cpp + AEIFCGEOOKJ_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void BBHBIJMKLNF(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + AEIFCGEOOKJ_BBHBIJMKLNF_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};

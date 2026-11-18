#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneStoreLight; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PKLNLIGIKFF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14BAC930)
#define PKLNLIGIKFF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14BACB50)
#define PKLNLIGIKFF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x14BACC40)

inline static constexpr unsigned int PKLNLIGIKFF_TypeDefinitionIndex = 61663;

class PKLNLIGIKFF : public ::System::Object
{
public:
	static ::MoleMole::ConfigBigSceneStoreLight** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ConfigBigSceneStoreLight**)Il2CppClass::FromTypeDefinitionIndex(PKLNLIGIKFF_TypeDefinitionIndex)->GetStaticField(0x3FC70);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PKLNLIGIKFF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PKLNLIGIKFF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigBigSceneStoreLight* KGNEJKNNODJ()
	{
		return ((::MoleMole::ConfigBigSceneStoreLight*(*)())((::PBYTE)hIl2Cpp + PKLNLIGIKFF_KGNEJKNNODJ_OFFSET))();
	}
};

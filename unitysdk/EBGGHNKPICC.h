#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EBGGHNKPICC_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x13E6F450)
#define EBGGHNKPICC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13E6F240)
#define EBGGHNKPICC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13E6F630)
#define EBGGHNKPICC__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6F230)

inline static constexpr unsigned int EBGGHNKPICC_TypeDefinitionIndex = 84924;

class EBGGHNKPICC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigFlowerShopActivityScriptableObject**)Il2CppClass::FromTypeDefinitionIndex(EBGGHNKPICC_TypeDefinitionIndex)->GetStaticField(0x406C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGGHNKPICC__CTOR_OFFSET))(this);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EBGGHNKPICC_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigFlowerShopActivityScriptableObject*(*)())((::PBYTE)hIl2Cpp + EBGGHNKPICC_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EBGGHNKPICC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};

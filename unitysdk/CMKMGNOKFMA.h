#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialKeywordCondition; }
namespace MoleMole::Config { class ConfigMaterialKeywordConditions; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CMKMGNOKFMA_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13E14060)
#define CMKMGNOKFMA_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13E14400)
#define CMKMGNOKFMA_JDADOOODGKM_OFFSET UNITYSDK_OFFSET(0x13E13BF0)

inline static constexpr unsigned int CMKMGNOKFMA_TypeDefinitionIndex = 78715;

class CMKMGNOKFMA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CBJFDEKKNOD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CMKMGNOKFMA_TypeDefinitionIndex)->GetStaticField(0x4CD20);
	}
	static ::MoleMole::Config::ConfigMaterialKeywordConditions** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigMaterialKeywordConditions**)Il2CppClass::FromTypeDefinitionIndex(CMKMGNOKFMA_TypeDefinitionIndex)->GetStaticField(0x4CD28);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialKeywordCondition*>*>** StaticGet_JBPBINFKANH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialKeywordCondition*>*>**)Il2CppClass::FromTypeDefinitionIndex(CMKMGNOKFMA_TypeDefinitionIndex)->GetStaticField(0x4CD30);
	}

	static ::System::Void JDADOOODGKM(::UnityEngine::Material* KNNDDLMOKCG, ::System::String* KEKLFCCONCL)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + CMKMGNOKFMA_JDADOOODGKM_OFFSET))(KNNDDLMOKCG, KEKLFCCONCL);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CMKMGNOKFMA_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CMKMGNOKFMA_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};

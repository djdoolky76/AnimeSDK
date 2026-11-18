#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTempleLevelUp; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MKEKHOCOGDG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1216CA40)
#define MKEKHOCOGDG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1216C950)
#define MKEKHOCOGDG_JNANCAIDLBI_OFFSET UNITYSDK_OFFSET(0x1216CC00)
#define MKEKHOCOGDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1216C940)

inline static constexpr unsigned int MKEKHOCOGDG_TypeDefinitionIndex = 84054;

class MKEKHOCOGDG : public ::System::Object
{
public:
	static ::MoleMole::ConfigTempleLevelUp** StaticGet_NOIIOJEKIKM()
	{
		return (::MoleMole::ConfigTempleLevelUp**)Il2CppClass::FromTypeDefinitionIndex(MKEKHOCOGDG_TypeDefinitionIndex)->GetStaticField(0x38630);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEKHOCOGDG__CTOR_OFFSET))(this);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MKEKHOCOGDG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MKEKHOCOGDG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigTempleLevelUp* JNANCAIDLBI()
	{
		return ((::MoleMole::ConfigTempleLevelUp*(*)())((::PBYTE)hIl2Cpp + MKEKHOCOGDG_JNANCAIDLBI_OFFSET))();
	}
};

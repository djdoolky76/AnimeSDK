#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNpcPrototype; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LKJFNHENIAA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16C5FEA0)
#define LKJFNHENIAA_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16C5FC70)
#define LKJFNHENIAA_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16C5FB80)
#define LKJFNHENIAA_EHPGOHJNDMB_OFFSET UNITYSDK_OFFSET(0x16C60080)

inline static constexpr unsigned int LKJFNHENIAA_TypeDefinitionIndex = 87437;

class LKJFNHENIAA : public ::System::Object
{
public:
	static ::MoleMole::ConfigNpcPrototype** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ConfigNpcPrototype**)Il2CppClass::FromTypeDefinitionIndex(LKJFNHENIAA_TypeDefinitionIndex)->GetStaticField(0x3BB50);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LKJFNHENIAA_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigNpcPrototype* COPIDBEMEIE()
	{
		return ((::MoleMole::ConfigNpcPrototype*(*)())((::PBYTE)hIl2Cpp + LKJFNHENIAA_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LKJFNHENIAA_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void EHPGOHJNDMB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + LKJFNHENIAA_EHPGOHJNDMB_OFFSET))(KECKGDFIALJ, MCOHLHMKLIP);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSplineTag; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MPFJEICHGCG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19210BA0)
#define MPFJEICHGCG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x19210DC0)
#define MPFJEICHGCG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x192109C0)

inline static constexpr unsigned int MPFJEICHGCG_TypeDefinitionIndex = 88120;

class MPFJEICHGCG : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSplineTag** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigSplineTag**)Il2CppClass::FromTypeDefinitionIndex(MPFJEICHGCG_TypeDefinitionIndex)->GetStaticField(0x3BD60);
	}

	static ::MoleMole::Config::ConfigSplineTag* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigSplineTag*(*)())((::PBYTE)hIl2Cpp + MPFJEICHGCG_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MPFJEICHGCG_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MPFJEICHGCG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};

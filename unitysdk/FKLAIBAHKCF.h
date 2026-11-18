#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define FKLAIBAHKCF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14AD9820)
#define FKLAIBAHKCF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14ADA1F0)
#define FKLAIBAHKCF_OJNOGGOAGNN_OFFSET UNITYSDK_OFFSET(0x14ADA080)
#define FKLAIBAHKCF_OPNBJPOOBAA_OFFSET UNITYSDK_OFFSET(0x14AD9AE0)
#define FKLAIBAHKCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AD9780)

inline static constexpr unsigned int FKLAIBAHKCF_TypeDefinitionIndex = 57192;

class FKLAIBAHKCF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>** StaticGet_KENOKFPNJGG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(FKLAIBAHKCF_TypeDefinitionIndex)->GetStaticField(0x4E440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKLAIBAHKCF__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FKLAIBAHKCF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Single OPNBJPOOBAA(::System::String* CBMDJKGKBFF, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI)
	{
		return ((::System::Single(*)(::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FKLAIBAHKCF_OPNBJPOOBAA_OFFSET))(CBMDJKGKBFF, MFMPICKHAMJ, JKELDNKGNDI);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FKLAIBAHKCF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::UnityEngine::AnimationCurve* OJNOGGOAGNN(::System::String* MCOHLHMKLIP)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + FKLAIBAHKCF_OJNOGGOAGNN_OFFSET))(MCOHLHMKLIP);
	}
};

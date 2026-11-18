#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::TimelineComponent { class ConstraintSourcePathInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Animations { class IConstraint; }

#define KJHLCLKLIPH_CEBGIGMAKME_OFFSET UNITYSDK_OFFSET(0x13C69600)
#define KJHLCLKLIPH_HGDJKPOLACM_OFFSET UNITYSDK_OFFSET(0x13C693A0)
#define KJHLCLKLIPH_KIAIKKBNNHM_OFFSET UNITYSDK_OFFSET(0x13C68DF0)

inline static constexpr unsigned int KJHLCLKLIPH_TypeDefinitionIndex = 59432;

class KJHLCLKLIPH : public ::System::Object
{
public:
	static ::System::Boolean KIAIKKBNNHM(::UnityEngine::Animations::IConstraint* IGAHCNOIGPM, ::UnityEngine::GameObject* IAPKABMDJNF)
	{
		return ((::System::Boolean(*)(::UnityEngine::Animations::IConstraint*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KJHLCLKLIPH_KIAIKKBNNHM_OFFSET))(IGAHCNOIGPM, IAPKABMDJNF);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>* HGDJKPOLACM(::UnityEngine::Animations::IConstraint* IGAHCNOIGPM)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>*(*)(::UnityEngine::Animations::IConstraint*))((::PBYTE)hIl2Cpp + KJHLCLKLIPH_HGDJKPOLACM_OFFSET))(IGAHCNOIGPM);
	}

	static ::System::Void CEBGIGMAKME(::UnityEngine::Animations::IConstraint* IGAHCNOIGPM, ::UnityEngine::GameObject* IAPKABMDJNF, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>* INONLICEDLC, ::System::Boolean NPKEIBACEKG)
	{
		return ((::System::Void(*)(::UnityEngine::Animations::IConstraint*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::ConstraintSourcePathInfo*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KJHLCLKLIPH_CEBGIGMAKME_OFFSET))(IGAHCNOIGPM, IAPKABMDJNF, INONLICEDLC, NPKEIBACEKG);
	}
};

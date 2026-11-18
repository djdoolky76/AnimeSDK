#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define OOCKDNNMLEG_JMHGEALKLAB_LNKIDOBNBKB_OFFSET UNITYSDK_OFFSET(0x15FF3ED0)
#define OOCKDNNMLEG_JMHGEALKLAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF3EC0)

inline static constexpr unsigned int OOCKDNNMLEG_JMHGEALKLAB_TypeDefinitionIndex = 81858;

class OOCKDNNMLEG_JMHGEALKLAB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* NGODDCIOJDP; // 0x10
	::MoleMole::Utils::INapCameraSequenceDataTableEntry* AAIJGGIEOGK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JMHGEALKLAB__CTOR_OFFSET))(this);
	}

	::System::Void LNKIDOBNBKB(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_JMHGEALKLAB_LNKIDOBNBKB_OFFSET))(this, AAOCANGHBDG);
	}
};

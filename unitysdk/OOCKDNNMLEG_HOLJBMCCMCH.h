#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define OOCKDNNMLEG_HOLJBMCCMCH_JMJPGPEMDLI_OFFSET UNITYSDK_OFFSET(0x13A77B40)
#define OOCKDNNMLEG_HOLJBMCCMCH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A77B30)

inline static constexpr unsigned int OOCKDNNMLEG_HOLJBMCCMCH_TypeDefinitionIndex = 81859;

class OOCKDNNMLEG_HOLJBMCCMCH : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* NGODDCIOJDP; // 0x10
	::MoleMole::Utils::INapCameraSequenceDataTableEntry* AAIJGGIEOGK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HOLJBMCCMCH__CTOR_OFFSET))(this);
	}

	::System::Void JMJPGPEMDLI(::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HOLJBMCCMCH_JMJPGPEMDLI_OFFSET))(this, AAOCANGHBDG);
	}
};

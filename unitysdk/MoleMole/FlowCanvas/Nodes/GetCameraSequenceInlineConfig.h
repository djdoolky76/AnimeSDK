#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace MoleMole::Utils { class NapCameraSequence; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_GETCAMERASEQUENCEINLINECONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x10402DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_GETCAMERASEQUENCEINLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10403050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetCameraSequenceInlineConfig_TypeDefinitionIndex = 53643;

	class GetCameraSequenceInlineConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GETCAMERASEQUENCEINLINECONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Utils::INapCameraSequenceDataTableEntry* Invoke(::System::String* key, ::MoleMole::Utils::NapCameraSequence* sequence)
		{
			return ((::MoleMole::Utils::INapCameraSequenceDataTableEntry*(*)(::PVOID, ::System::String*, ::MoleMole::Utils::NapCameraSequence*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GETCAMERASEQUENCEINLINECONFIG_INVOKE_OFFSET))(this, key, sequence);
		}
	};
}

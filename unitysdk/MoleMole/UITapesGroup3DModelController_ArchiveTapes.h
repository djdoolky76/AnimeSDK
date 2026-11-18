#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController_TapeAdsorbField; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ARCHIVETAPES__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9CD80)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController_ArchiveTapes_TypeDefinitionIndex = 84918;

	class UITapesGroup3DModelController_ArchiveTapes : public ::System::Object
	{
	public:
		::MoleMole::UITapesGroup3DModelController_TapeAdsorbField* Field; // 0x10
		::MoleMole::UITape3DModelController* InitCenterTape; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::UITape3DModelController*, ::System::Int32>* Tape2DataIndex; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* Tapes; // 0x28
		::System::Single CordonRt; // 0x30
		::UnityEngine::Vector3 TapeBorderWorldLf; // 0x34
		::System::Single CordonLf; // 0x40
		::UnityEngine::Vector3 TapeBorderWorldRt; // 0x44
		::UnityEngine::Vector3 TapeShowPositionOffset; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ARCHIVETAPES__CTOR_OFFSET))(this);
		}
	};
}

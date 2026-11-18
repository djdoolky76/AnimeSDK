#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1C6F0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_PlayVideo___c__DisplayClass13_1_TypeDefinitionIndex = 90139;

	template <typename T>
	class CameraSequence_PlayVideo___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* ctrl; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}
	};
}

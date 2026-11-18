#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1C700)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_2__RECEIVENOTIFYBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0x12C1C710)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_PlayVideo___c__DisplayClass13_2_TypeDefinitionIndex = 90138;

	template <typename T1, typename T2>
	class CameraSequence_PlayVideo___c__DisplayClass13_2 : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* runningCoroutine; // 0x10
		::System::Object* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_2__CTOR_OFFSET))(this);
		}

		::System::Void _ReceiveNotifyBegin_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_PLAYVIDEO___C__DISPLAYCLASS13_2__RECEIVENOTIFYBEGIN_B__1_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UTILS_CAMERASEQUENCE_METHOD_ONCAMERACUT_OFFSET UNITYSDK_OFFSET(0x1058C4B0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int Method_TypeDefinitionIndex = 47485;

	class Method : public ::System::Object
	{
	public:
		static ::System::Void OnCameraCut()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_METHOD_ONCAMERACUT_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJAPFAECMBN;

#define NOKCGCNICDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEB920)
#define NOKCGCNICDJ_GET_CAMERACONTROLLER_OFFSET UNITYSDK_OFFSET(0xBCEB910)

inline static constexpr unsigned int NOKCGCNICDJ_TypeDefinitionIndex = 78477;

	class NOKCGCNICDJ : public ::System::Object
	{
	public:
		::MJAPFAECMBN* _CameraController_k__BackingField; // 0x10
		::System::Boolean MMAEKKAKCLH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKCGCNICDJ_CTOR_OFFSET))(this);
		}

		::MJAPFAECMBN* get_CameraController()
		{
			return ((::MJAPFAECMBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKCGCNICDJ_GET_CAMERACONTROLLER_OFFSET))(this);
		}

	};

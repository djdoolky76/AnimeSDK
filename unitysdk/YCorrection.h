#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define YCORRECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x15434AE0)
#define YCORRECTION_GET_ENABLEYCORRECTION_OFFSET UNITYSDK_OFFSET(0x15434760)
#define YCORRECTION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15434780)
#define YCORRECTION_SET_ENABLEYCORRECTION_OFFSET UNITYSDK_OFFSET(0x15434770)

	class YCorrection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _EnableYCorrection_k__BackingField; // 0x18
		// static const ::System::Object PIBGMMHDIFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YCORRECTION_CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableYCorrection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + YCORRECTION_GET_ENABLEYCORRECTION_OFFSET))(this);
		}

		::System::Void set_EnableYCorrection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + YCORRECTION_SET_ENABLEYCORRECTION_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YCORRECTION_LATEUPDATE_OFFSET))(this);
		}

	};

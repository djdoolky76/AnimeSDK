#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/NOIGMIJMJHP.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MNAGAGOHIGH.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole { class ZipLineSubSystem_MainState; }
namespace System { class String; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;
template <typename T> class NMANHEHIJAL_1;

#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_CURRENTINSLIDEROPECAMERA_OFFSET UNITYSDK_OFFSET(0x14E5DBB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_ENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x14E5E3A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_FINALCAMERAKEY_NOLASTKEY_OFFSET UNITYSDK_OFFSET(0x14E5E360)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_FINALCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x14E5E380)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_INREVERSEDIRECTION_OFFSET UNITYSDK_OFFSET(0x14E5DBD0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_OVERRIDECAMERAKEY_OFFSET UNITYSDK_OFFSET(0x14E5E340)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14E5E3C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SETBASECAMERAKEY_1_OFFSET UNITYSDK_OFFSET(0x14E5E000)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SETBASECAMERAKEY_OFFSET UNITYSDK_OFFSET(0x14E5DBF0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_CURRENTINSLIDEROPECAMERA_OFFSET UNITYSDK_OFFSET(0x14E5DBC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_ENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x14E5E3B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_FINALCAMERAKEY_NOLASTKEY_OFFSET UNITYSDK_OFFSET(0x14E5E370)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_FINALCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x14E5E390)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_INREVERSEDIRECTION_OFFSET UNITYSDK_OFFSET(0x14E5DBE0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_OVERRIDECAMERAKEY_OFFSET UNITYSDK_OFFSET(0x14E5E350)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5DA00)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_0_OFFSET UNITYSDK_OFFSET(0x14E5E640)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_1_OFFSET UNITYSDK_OFFSET(0x14E5E8C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_2_OFFSET UNITYSDK_OFFSET(0x14E5EA50)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_CameraModel_TypeDefinitionIndex = 92010;

	class ZipLineSubSystem_CameraModel : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::String*>* BaseCameraKey; // 0x88
		::LJHFMILANJA_1<::System::Boolean>* _InReverseDirection_k__BackingField; // 0x90
		::LJHFMILANJA_1<::UnityEngine::Vector3>* _EnterPosition_k__BackingField; // 0x98
		::JIOLFCAGOFH_1<::System::String*>* _FinalCameraKey_k__BackingField; // 0xA0
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0xA8
		::NMANHEHIJAL_1<::NOIGMIJMJHP>* _OverrideCameraKey_k__BackingField; // 0xB0
		::JIOLFCAGOFH_1<::System::String*>* _FinalCameraKey_NoLastKey_k__BackingField; // 0xB8
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0xC0
		::System::String* LastCameraKey; // 0xC8
		::LJHFMILANJA_1<::System::Boolean>* _CurrentInSlideRopeCamera_k__BackingField; // 0xD0
		::System::Boolean _forceUpdateWhenChangeBaseKey; // 0xD8

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem, ::MoleMole::ZipLineSubSystem_MainState* mainState)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*, ::MoleMole::ZipLineSubSystem_MainState*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__CTOR_OFFSET))(this, ownerSubSystem, mainState);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_CurrentInSlideRopeCamera()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_CURRENTINSLIDEROPECAMERA_OFFSET))(this);
		}

		::System::Void set_CurrentInSlideRopeCamera(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_CURRENTINSLIDEROPECAMERA_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_InReverseDirection()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_INREVERSEDIRECTION_OFFSET))(this);
		}

		::System::Void set_InReverseDirection(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_INREVERSEDIRECTION_OFFSET))(this, value);
		}

		::System::Void SetBaseCameraKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SETBASECAMERAKEY_OFFSET))(this, key);
		}

		::System::Void SetBaseCameraKey_1(::System::String* key, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SETBASECAMERAKEY_1_OFFSET))(this, key, position);
		}

		::NMANHEHIJAL_1<::NOIGMIJMJHP>* get_OverrideCameraKey()
		{
			return ((::NMANHEHIJAL_1<::NOIGMIJMJHP>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_OVERRIDECAMERAKEY_OFFSET))(this);
		}

		::System::Void set_OverrideCameraKey(::NMANHEHIJAL_1<::NOIGMIJMJHP>* value)
		{
			return ((::System::Void(*)(::PVOID, ::NMANHEHIJAL_1<::NOIGMIJMJHP>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_OVERRIDECAMERAKEY_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::String*>* get_FinalCameraKey_NoLastKey()
		{
			return ((::JIOLFCAGOFH_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_FINALCAMERAKEY_NOLASTKEY_OFFSET))(this);
		}

		::System::Void set_FinalCameraKey_NoLastKey(::JIOLFCAGOFH_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_FINALCAMERAKEY_NOLASTKEY_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::String*>* get_FinalCameraKey()
		{
			return ((::JIOLFCAGOFH_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_FINALCAMERAKEY_OFFSET))(this);
		}

		::System::Void set_FinalCameraKey(::JIOLFCAGOFH_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_FINALCAMERAKEY_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::UnityEngine::Vector3>* get_EnterPosition()
		{
			return ((::LJHFMILANJA_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_GET_ENTERPOSITION_OFFSET))(this);
		}

		::System::Void set_EnterPosition(::LJHFMILANJA_1<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_SET_ENTERPOSITION_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__32_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_0_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__32_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_1_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__32_2(::MNAGAGOHIGH& _)
		{
			return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CAMERAMODEL__ONCREATEPROPERTY_B__32_2_OFFSET))(this, _);
		}
	};
}

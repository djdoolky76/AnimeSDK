#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_CCMFJEKBGKI_OFFSET UNITYSDK_OFFSET(0xDC6FD60)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_CFECFFHGJGF_1_OFFSET UNITYSDK_OFFSET(0xDC706C0)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_CFECFFHGJGF_OFFSET UNITYSDK_OFFSET(0xDC70490)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_CTOR_OFFSET UNITYSDK_OFFSET(0xDC70770)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_IAMIKNPODNM_1_OFFSET UNITYSDK_OFFSET(0xDC70500)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_IAMIKNPODNM_OFFSET UNITYSDK_OFFSET(0xDC703A0)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_JEGBKNENIBI_1_OFFSET UNITYSDK_OFFSET(0xDC70310)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_JEGBKNENIBI_OFFSET UNITYSDK_OFFSET(0xDC70280)

namespace RPG::Client::Prop
{
	class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* MainCamera; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _CandidateConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_CTOR_OFFSET))(this);
		}

		::System::Void CCMFJEKBGKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_CCMFJEKBGKI_OFFSET))(this, a1);
		}

		::System::Void JEGBKNENIBI(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_JEGBKNENIBI_OFFSET))(this, a1);
		}

		::System::Void JEGBKNENIBI_1(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_JEGBKNENIBI_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAMIKNPODNM(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_IAMIKNPODNM_OFFSET))(this, a1);
		}

		::System::Void IAMIKNPODNM_1(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_IAMIKNPODNM_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFECFFHGJGF(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_CFECFFHGJGF_OFFSET))(this, a1);
		}

		::System::Void CFECFFHGJGF_1(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_CFECFFHGJGF_1_OFFSET))(this, a1, a2, a3);
		}

	};
}

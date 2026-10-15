#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define FDFONCLFPHO_ACELFELBCBH_OFFSET UNITYSDK_OFFSET(0x156D6D70)
#define FDFONCLFPHO_BBKLBENFGKE_OFFSET UNITYSDK_OFFSET(0x156D6F40)
#define FDFONCLFPHO_BIEIJKONODM_OFFSET UNITYSDK_OFFSET(0x156D6FE0)
#define FDFONCLFPHO_CTOR_OFFSET UNITYSDK_OFFSET(0x156D7550)
#define FDFONCLFPHO_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x156D6C40)
#define FDFONCLFPHO_HCADCBKIEPH_OFFSET UNITYSDK_OFFSET(0x156D6D10)
#define FDFONCLFPHO_IMCHBAFIHPM_OFFSET UNITYSDK_OFFSET(0x156D6EA0)
#define FDFONCLFPHO_JACKKFFNFEC_OFFSET UNITYSDK_OFFSET(0x156D6C60)
#define FDFONCLFPHO_MCKBFJLODEO_OFFSET UNITYSDK_OFFSET(0x156D7500)
#define FDFONCLFPHO_OFDGHPFCBHK_OFFSET UNITYSDK_OFFSET(0x156D73F0)
#define FDFONCLFPHO_PKGHCKJAEOI_OFFSET UNITYSDK_OFFSET(0x156D74A0)
#define FDFONCLFPHO_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x156D6C50)

inline static constexpr unsigned int FDFONCLFPHO_TypeDefinitionIndex = 62322;

	class FDFONCLFPHO : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* CDGMGPEPAMO; // 0x10
		::UnityEngine::Camera* _Camera_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* DAAEFLHHLHD; // 0x20
		::System::Boolean LHKNOELCECI; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 PFIFKKCLIIN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFONCLFPHO_CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFONCLFPHO_GET_CAMERA_OFFSET))(this);
		}

		::System::Void set_Camera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + FDFONCLFPHO_SET_CAMERA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JACKKFFNFEC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFONCLFPHO_JACKKFFNFEC_OFFSET))(this);
		}

		::System::Int32 HCADCBKIEPH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFONCLFPHO_HCADCBKIEPH_OFFSET))(this);
		}

		::UnityEngine::Vector3 ACELFELBCBH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFONCLFPHO_ACELFELBCBH_OFFSET))(this);
		}

		::System::Boolean IMCHBAFIHPM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDFONCLFPHO_IMCHBAFIHPM_OFFSET))(this, a1);
		}

		::System::Boolean BBKLBENFGKE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDFONCLFPHO_BBKLBENFGKE_OFFSET))(this, a1);
		}

		::System::Boolean BIEIJKONODM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FDFONCLFPHO_BIEIJKONODM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* OFDGHPFCBHK()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFONCLFPHO_OFDGHPFCBHK_OFFSET))(this);
		}

		::System::Void PKGHCKJAEOI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FDFONCLFPHO_PKGHCKJAEOI_OFFSET))(this, a1);
		}

		::System::Void MCKBFJLODEO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDFONCLFPHO_MCKBFJLODEO_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ANCFDNLGHEF;
namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }

#define ANCFDNLGHEF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155635A0)
#define ANCFDNLGHEF_CHBDNKMADFL_OFFSET UNITYSDK_OFFSET(0x15592030)
#define ANCFDNLGHEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15591FE0)
#define ANCFDNLGHEF_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x15591FF0)
#define ANCFDNLGHEF_GET__POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0x15592010)
#define ANCFDNLGHEF_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x15592000)
#define ANCFDNLGHEF_SET__POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0x15592020)

	class ANCFDNLGHEF : public ::System::Object
	{
	public:
		::System::UInt32 _SurfaceID_k__BackingField; // 0x10
		::RPG::MVector2 __PositionInFace_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCFDNLGHEF_CTOR_OFFSET))(this);
		}

		static ::ANCFDNLGHEF* BPLPBPMEODA(::RPG::GameCore::FiveDimMapSurfaceConfig* a1)
		{
			return ((::ANCFDNLGHEF*(*)(::RPG::GameCore::FiveDimMapSurfaceConfig*))((::PBYTE)hIl2Cpp + ANCFDNLGHEF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_SurfaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCFDNLGHEF_GET_SURFACEID_OFFSET))(this);
		}

		::System::Void set_SurfaceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANCFDNLGHEF_SET_SURFACEID_OFFSET))(this, a1);
		}

		::RPG::MVector2 get__PositionInFace()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCFDNLGHEF_GET__POSITIONINFACE_OFFSET))(this);
		}

		::System::Void set__PositionInFace(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ANCFDNLGHEF_SET__POSITIONINFACE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CHBDNKMADFL(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int16 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int16, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ANCFDNLGHEF_CHBDNKMADFL_OFFSET))(this, a1, a2, a3, a4);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_MARKER_ABBB4FAAAF9E5551_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_TIMELINE_MARKER_B4C4D2DBFFF30740_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_TIMELINE_MARKER_B592E8E093877E06_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define UNITYENGINE_TIMELINE_MARKER_BCED9BC2F623EFCE_OFFSET UNITYSDK_OFFSET(0x40D7EC0)
#define UNITYENGINE_TIMELINE_MARKER_F266852AE49781FF_OFFSET UNITYSDK_OFFSET(0x40D7DD0)
#define UNITYENGINE_TIMELINE_MARKER_F3B796889BA41E68_OFFSET UNITYSDK_OFFSET(0x3FFEF40)
#define UNITYENGINE_TIMELINE_MARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Marker_TypeDefinitionIndex = 20250;

	class Marker : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Double m_Time; // 0x18
		::UnityEngine::Timeline::TrackAsset* ECB7DAF1E521367E; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER__CTOR_OFFSET))(this);
		}

		::System::Void F266852AE49781FF(::UnityEngine::Timeline::TrackAsset* F6160FFD096E41E5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_F266852AE49781FF_OFFSET))(this, F6160FFD096E41E5);
		}

		::System::Void ABBB4FAAAF9E5551(::UnityEngine::Timeline::TrackAsset* E52318B625D2B55C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_ABBB4FAAAF9E5551_OFFSET))(this, E52318B625D2B55C);
		}

		::System::Void B592E8E093877E06(::UnityEngine::Timeline::TrackAsset* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_B592E8E093877E06_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void BCED9BC2F623EFCE(::System::Double E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_BCED9BC2F623EFCE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Timeline::TrackAsset* B4C4D2DBFFF30740()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_B4C4D2DBFFF30740_OFFSET))(this);
		}

		::System::Double F3B796889BA41E68()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_F3B796889BA41E68_OFFSET))(this);
		}
	};
}

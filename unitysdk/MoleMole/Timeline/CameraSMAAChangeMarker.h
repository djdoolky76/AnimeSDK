#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_AAMJJMFMBNA_OFFSET UNITYSDK_OFFSET(0x10D5F3F0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x10D5F2E0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x10D5FA90)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x10D5FAD0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x10D5F770)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x10D5FAE0)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x10D5FA40)
#define MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5FB30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraSMAAChangeMarker_TypeDefinitionIndex = 61312;

	class CameraSMAAChangeMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean IsOpen; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode prevAAMode; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void AAMJJMFMBNA(::System::Boolean CGEMLHFPINP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERASMAACHANGEMARKER_AAMJJMFMBNA_OFFSET))(this, CGEMLHFPINP);
		}
	};
}

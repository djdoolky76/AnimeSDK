#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_EPOOCCDKOIL_OFFSET UNITYSDK_OFFSET(0x1C0E1010)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x1C0E0E90)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C0E1140)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C0E1180)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x1C0E1060)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x1C0E1190)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1C0E10F0)
#define MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E11E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SetEntityRenderVisibleMarker_TypeDefinitionIndex = 40193;

	class SetEntityRenderVisibleMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean IsVisible; // 0x28
		::System::Boolean IncludeAllEntities; // 0x29
		::System::Boolean IncludeAllLocalAvatar; // 0x2A
		::System::Boolean IncludeAllServerEntities; // 0x2B
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* ServerEntityTags; // 0x30
		::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* _candidateEntityList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void EPOOCCDKOIL(::System::Boolean NNJLDLIHINN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SETENTITYRENDERVISIBLEMARKER_EPOOCCDKOIL_OFFSET))(this, NNJLDLIHINN);
		}
	};
}

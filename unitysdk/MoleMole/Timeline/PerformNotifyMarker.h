#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"
#include "unitysdk/PIMCAAHJMHI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_FJEMCJJOEND_OFFSET UNITYSDK_OFFSET(0x1C0D4100)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x1C0D4000)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C0D42C0)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C0D4300)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x1C0D4200)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_NJLAEPODDGC_OFFSET UNITYSDK_OFFSET(0x1C0D4310)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1C0D4270)
#define MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D43A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PerformNotifyMarker_TypeDefinitionIndex = 51967;

	class PerformNotifyMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* Params; // 0x28
		::System::Boolean forceTriggerOnExit; // 0x30
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER__CTOR_OFFSET))(this);
		}

		::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean AKPBNILAGPD)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AKPBNILAGPD);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NJLAEPODDGC(::System::String* JJMJOGJFGBG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_NJLAEPODDGC_OFFSET))(this, JJMJOGJFGBG);
		}

		::System::Void FJEMCJJOEND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PERFORMNOTIFYMARKER_FJEMCJJOEND_OFFSET))(this);
		}
	};
}

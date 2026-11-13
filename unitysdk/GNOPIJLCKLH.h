#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGPFBKDIOEL;
class ILCGHLHKHDE;
namespace UnityEngine::EventSystems { class PointerEventData; }

#define GNOPIJLCKLH_BPAGENONDNL_OFFSET UNITYSDK_OFFSET(0x187A3B10)
#define GNOPIJLCKLH_CTOR_OFFSET UNITYSDK_OFFSET(0x187A3C90)
#define GNOPIJLCKLH_ELBHEDGCLGE_OFFSET UNITYSDK_OFFSET(0x187A3BD0)
#define GNOPIJLCKLH_FIDFGDIKNJO_OFFSET UNITYSDK_OFFSET(0x187A3A50)
#define GNOPIJLCKLH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x187A3A00)
#define GNOPIJLCKLH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x187A39C0)
#define GNOPIJLCKLH_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x187A3720)

inline static constexpr unsigned int GNOPIJLCKLH_TypeDefinitionIndex = 83485;

	class GNOPIJLCKLH : public ::System::Object
	{
	public:
		::ILCGHLHKHDE* NHJIMBADBEN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOPIJLCKLH_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::FGPFBKDIOEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGPFBKDIOEL*))((::PBYTE)hIl2Cpp + GNOPIJLCKLH_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOPIJLCKLH_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOPIJLCKLH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FIDFGDIKNJO(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + GNOPIJLCKLH_FIDFGDIKNJO_OFFSET))(this, a1);
		}

		::System::Void BPAGENONDNL(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + GNOPIJLCKLH_BPAGENONDNL_OFFSET))(this, a1);
		}

		::System::Void ELBHEDGCLGE(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + GNOPIJLCKLH_ELBHEDGCLGE_OFFSET))(this, a1);
		}

	};

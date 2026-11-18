#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMGNPJDOONC;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_CURTAGLIST_OFFSET UNITYSDK_OFFSET(0x164D2230)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_CURTAGWITHOUTHIDING_OFFSET UNITYSDK_OFFSET(0x164D2300)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_CURVHSSLOTLIST_OFFSET UNITYSDK_OFFSET(0x164D24E0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_ENERGY_OFFSET UNITYSDK_OFFSET(0x164D1E20)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_OPTIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x164D1EF0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_RECOMMENDROUND_OFFSET UNITYSDK_OFFSET(0x164D2090)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x164D1FC0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_VHSRECOMMENDROUNDMAP_OFFSET UNITYSDK_OFFSET(0x164D2160)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_WAITREFRESHTAGIDX_OFFSET UNITYSDK_OFFSET(0x164D25B0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_WAITREFRESHTAGNEW_OFFSET UNITYSDK_OFFSET(0x164D2680)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x164D2750)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreLimitWidgetController_Context_Data_TypeDefinitionIndex = 49846;

	class UIVHSStoreLimitWidgetController_Context_Data : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Energy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_ENERGY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BMGNPJDOONC*>* get_OptionRecordList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BMGNPJDOONC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_OPTIONRECORDLIST_OFFSET))(this);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_SCORE_OFFSET))(this);
		}

		::System::UInt32 get_RecommendRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_RECOMMENDROUND_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* get_VhsRecommendRoundMap()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_VHSRECOMMENDROUNDMAP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_CurTagList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_CURTAGLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_CurTagWithoutHiding()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_CURTAGWITHOUTHIDING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_CurVhsSlotList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_CURVHSSLOTLIST_OFFSET))(this);
		}

		::System::UInt32 get_WaitRefreshTagIdx()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_WAITREFRESHTAGIDX_OFFSET))(this);
		}

		::System::UInt32 get_WaitRefreshTagNew()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA_GET_WAITREFRESHTAGNEW_OFFSET))(this);
		}
	};
}

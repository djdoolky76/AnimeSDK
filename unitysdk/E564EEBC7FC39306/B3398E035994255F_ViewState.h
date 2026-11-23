#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace E564EEBC7FC39306 { class B3398E035994255F; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class SortColumnDescription; }

#define E564EEBC7FC39306_B3398E035994255F_VIEWSTATE_APPLY_OFFSET UNITYSDK_OFFSET(0x4243AB0)
#define E564EEBC7FC39306_B3398E035994255F_VIEWSTATE_SAVE_OFFSET UNITYSDK_OFFSET(0x4243E20)
#define E564EEBC7FC39306_B3398E035994255F_VIEWSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x4244450)

namespace E564EEBC7FC39306
{
	inline static constexpr unsigned int B3398E035994255F_ViewState_TypeDefinitionIndex = 13093;

	class B3398E035994255F_ViewState : public ::System::Object
	{
	public:
		::System::Boolean m_HasPersistedData; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortDescriptions; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* m_OrderedColumnStates; // 0x20

		::System::Void Save(::E564EEBC7FC39306::B3398E035994255F* A6E476DEDB99637C)
		{
			return ((::System::Void(*)(::PVOID, ::E564EEBC7FC39306::B3398E035994255F*))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_B3398E035994255F_VIEWSTATE_SAVE_OFFSET))(this, A6E476DEDB99637C);
		}

		::System::Void Apply(::E564EEBC7FC39306::B3398E035994255F* A6E476DEDB99637C)
		{
			return ((::System::Void(*)(::PVOID, ::E564EEBC7FC39306::B3398E035994255F*))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_B3398E035994255F_VIEWSTATE_APPLY_OFFSET))(this, A6E476DEDB99637C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_B3398E035994255F_VIEWSTATE__CTOR_OFFSET))(this);
		}
	};
}

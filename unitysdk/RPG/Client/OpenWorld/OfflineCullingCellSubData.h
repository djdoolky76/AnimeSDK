#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::OpenWorld { class OfflineCullingCellSubData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_CPGHFAHGDNN_OFFSET UNITYSDK_OFFSET(0xD9F5060)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD9F4D60)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_GBIKDJNNLAG_OFFSET UNITYSDK_OFFSET(0xD9F5CA0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_IPIHILFEHHJ_OFFSET UNITYSDK_OFFSET(0xD9F5200)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_OPODNELLKHO_1_OFFSET UNITYSDK_OFFSET(0xD9F5C30)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_OPODNELLKHO_OFFSET UNITYSDK_OFFSET(0xD9F4E10)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OfflineCullingCellSubData_TypeDefinitionIndex = 73755;

	class OfflineCullingCellSubData : public ::System::Object
	{
	public:
		::System::Boolean UseCompression; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* CullingCompletelyObjs; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* CullingPartialObjs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean CPGHFAHGDNN(::RPG::Client::OpenWorld::OfflineCullingCellSubData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::OfflineCullingCellSubData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_CPGHFAHGDNN_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* IPIHILFEHHJ(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_IPIHILFEHHJ_OFFSET))(a1, a2);
		}

		::System::Void OPODNELLKHO(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_OPODNELLKHO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPODNELLKHO_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_OPODNELLKHO_1_OFFSET))(this, a1);
		}

		::System::Void GBIKDJNNLAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLSUBDATA_GBIKDJNNLAG_OFFSET))(this);
		}

	};
}

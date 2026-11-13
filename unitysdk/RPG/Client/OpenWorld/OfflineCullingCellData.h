#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client::OpenWorld { class OfflineCullingCellSerializeData; }
namespace RPG::Client::OpenWorld { class OfflineCullingCellSubData; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x1BEF1F00)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF3040)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF2FF0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_DPPDABEPIJF_OFFSET UNITYSDK_OFFSET(0x1BEF2E80)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLBOUND_OFFSET UNITYSDK_OFFSET(0x1BEF1C40)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x1BEF1C00)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSUBDATA_OFFSET UNITYSDK_OFFSET(0x1BEF1BC0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1BEF1CE0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_LIGHTVISIBILITYDATA_OFFSET UNITYSDK_OFFSET(0x1BEF1D20)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_USECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x1BEF1CA0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_HFGAKMOEBCB_OFFSET UNITYSDK_OFFSET(0x1BEF2050)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_JJHDOBJAAIH_OFFSET UNITYSDK_OFFSET(0x1BEF1D60)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_PMJJDOCILAC_OFFSET UNITYSDK_OFFSET(0x1BEF1E50)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLBOUND_OFFSET UNITYSDK_OFFSET(0x1BEF1C70)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0x1BEF1C20)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSUBDATA_OFFSET UNITYSDK_OFFSET(0x1BEF1BE0)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1BEF1D00)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_LIGHTVISIBILITYDATA_OFFSET UNITYSDK_OFFSET(0x1BEF1D40)
#define RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_USECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x1BEF1CC0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OfflineCullingCellData_TypeDefinitionIndex = 75881;

	class OfflineCullingCellData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* SelfData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*>* ChildData; // 0x20
		::RPG::GameCore::OfflineCullingIndex* SelfIndex; // 0x28
		static ::System::Int32* StaticGet_PartitionMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OfflineCullingCellData")->GetStaticField(0x6590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>* get_CellSubData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSUBDATA_OFFSET))(this);
		}

		::System::Void set_CellSubData(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::OfflineCullingCellSubData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSUBDATA_OFFSET))(this, a1);
		}

		::System::Single get_CellSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLSIZE_OFFSET))(this);
		}

		::System::Void set_CellSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_CellBound()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_CELLBOUND_OFFSET))(this);
		}

		::System::Void set_CellBound(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_CELLBOUND_OFFSET))(this, a1);
		}

		::System::Boolean get_UseCompression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_USECOMPRESSION_OFFSET))(this);
		}

		::System::Void set_UseCompression(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_USECOMPRESSION_OFFSET))(this, a1);
		}

		::System::Int64 get_Index()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_LightVisibilityData()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_GET_LIGHTVISIBILITYDATA_OFFSET))(this);
		}

		::System::Void set_LightVisibilityData(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_SET_LIGHTVISIBILITYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* JJHDOBJAAIH()
		{
			return ((::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_JJHDOBJAAIH_OFFSET))(this);
		}

		::System::Void PMJJDOCILAC(::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_PMJJDOCILAC_OFFSET))(this, a1);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Void HFGAKMOEBCB(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_HFGAKMOEBCB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DPPDABEPIJF(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OFFLINECULLINGCELLDATA_DPPDABEPIJF_OFFSET))(this, a1, a2);
		}

	};
}

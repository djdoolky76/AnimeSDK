#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class FloorConnectivityData_EdgeInfo; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_FLOORCONNECTIVITYDATA_CLEARCACHESOLUTIONS_OFFSET UNITYSDK_OFFSET(0x19AE8F70)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19AEA030)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x19AE8ED0)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x19AE8F30)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x19AE9060)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__GETAVAILABLEEDGE_OFFSET UNITYSDK_OFFSET(0x19AE9100)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__GETPATH_OFFSET UNITYSDK_OFFSET(0x19AE9A60)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__RESETALLVERTICESVISITEDFLAG_OFFSET UNITYSDK_OFFSET(0x19AE9950)
#define RPG_CLIENT_FLOORCONNECTIVITYDATA__TRYADDNEWVERTEX_OFFSET UNITYSDK_OFFSET(0x19AE9F00)

namespace RPG::Client
{
	inline static constexpr unsigned int FloorConnectivityData_TypeDefinitionIndex = 65673;

	class FloorConnectivityData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::LinkedList_1<::System::Object*>*>* _PathsNeedCheck; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _Edges; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _Vertices; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _TempIDs; // 0x28
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Object*>* _Solutions; // 0x30
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Object*>*>* _SolutionPathes; // 0x38
		// static const ::System::Object WildcardID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void SetupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_SETUPDATA_OFFSET))(this);
		}

		::System::Void ClearCacheSolutions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_CLEARCACHESOLUTIONS_OFFSET))(this);
		}

		::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
		{
			return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _GetAvailableEdge(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeInfo* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__GETAVAILABLEEDGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryAddNewVertex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__TRYADDNEWVERTEX_OFFSET))(this, a1);
		}

		::System::Void _ResetAllVerticesVisitedFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__RESETALLVERTICESVISITEDFLAG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* _GetPath(::System::Collections::Generic::LinkedList_1<::System::Object*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::LinkedList_1<::System::Object*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOORCONNECTIVITYDATA__GETPATH_OFFSET))(this, a1, a2);
		}

	};
}

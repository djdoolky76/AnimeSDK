#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/System/Object.h"
class ABCPIKLPIGI;
class FFCGHKGDAJF;
class GLDDJECCBAO;
class INBJBBGLCKJ;
class IOEPMPAKMOK;
class OHJPOHMEINI;
class PFICJAHEGIH;
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFCGHKGDAJF_BAGKJEPPLCE_OFFSET UNITYSDK_OFFSET(0x15731DA0)
#define FFCGHKGDAJF_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15731B50)
#define FFCGHKGDAJF_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x157317D0)
#define FFCGHKGDAJF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x157316F0)
#define FFCGHKGDAJF_CPFJHKGPGMN_OFFSET UNITYSDK_OFFSET(0x15731E60)
#define FFCGHKGDAJF_CTOR_OFFSET UNITYSDK_OFFSET(0x157319A0)
#define FFCGHKGDAJF_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15731A20)
#define FFCGHKGDAJF_EEFEFFLHNAL_OFFSET UNITYSDK_OFFSET(0x15731A80)
#define FFCGHKGDAJF_EKLLMJBELKM_OFFSET UNITYSDK_OFFSET(0x15731900)
#define FFCGHKGDAJF_GET_EDGEMANAGER_OFFSET UNITYSDK_OFFSET(0x15731150)
#define FFCGHKGDAJF_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x15731110)
#define FFCGHKGDAJF_GET_PLANETYPE_OFFSET UNITYSDK_OFFSET(0x15731120)
#define FFCGHKGDAJF_GET_VERTEXMANAGER_OFFSET UNITYSDK_OFFSET(0x15731130)
#define FFCGHKGDAJF_PBALPMCNIKA_OFFSET UNITYSDK_OFFSET(0x15731F50)
#define FFCGHKGDAJF_PDOCCAACEEA_OFFSET UNITYSDK_OFFSET(0x15731DF0)
#define FFCGHKGDAJF_SET_EDGEMANAGER_OFFSET UNITYSDK_OFFSET(0x15731160)
#define FFCGHKGDAJF_SET_VERTEXMANAGER_OFFSET UNITYSDK_OFFSET(0x15731140)
#define FFCGHKGDAJF_TRYGETNEIGHBOUREDGES_OFFSET UNITYSDK_OFFSET(0x15731170)

	class FFCGHKGDAJF : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::IMapDataSource* _MapData_k__BackingField; // 0x10
		::ABCPIKLPIGI* _EdgeManager_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::OHJPOHMEINI*>* JOHGMGKAIDL; // 0x20
		::PFICJAHEGIH* _VertexManager_k__BackingField; // 0x28
		::RPG::GameCore::PlaneType _PlaneType_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::GameCore::PlaneType get_PlaneType()
		{
			return ((::RPG::GameCore::PlaneType(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_GET_PLANETYPE_OFFSET))(this);
		}

		::PFICJAHEGIH* get_VertexManager()
		{
			return ((::PFICJAHEGIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_GET_VERTEXMANAGER_OFFSET))(this);
		}

		::System::Void set_VertexManager(::PFICJAHEGIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFICJAHEGIH*))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_SET_VERTEXMANAGER_OFFSET))(this, a1);
		}

		::ABCPIKLPIGI* get_EdgeManager()
		{
			return ((::ABCPIKLPIGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_GET_EDGEMANAGER_OFFSET))(this);
		}

		::System::Void set_EdgeManager(::ABCPIKLPIGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABCPIKLPIGI*))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_SET_EDGEMANAGER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::GLDDJECCBAO*>* TryGetNeighbourEdges(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::GLDDJECCBAO*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_TRYGETNEIGHBOUREDGES_OFFSET))(this, a1);
		}

		static ::FFCGHKGDAJF* BPLPBPMEODA(::RPG::Client::MapDataKey* a1)
		{
			return ((::FFCGHKGDAJF*(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::FFCGHKGDAJF* BPLPBPMEODA_1(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::FFCGHKGDAJF*(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_BPLPBPMEODA_1_OFFSET))(a1);
		}

		static ::System::Boolean EKLLMJBELKM(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_EKLLMJBELKM_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void EEFEFFLHNAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_EEFEFFLHNAL_OFFSET))(this);
		}

		::System::Void BAGKJEPPLCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_BAGKJEPPLCE_OFFSET))(this);
		}

		::System::Void PDOCCAACEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_PDOCCAACEEA_OFFSET))(this);
		}

		::System::Void CPFJHKGPGMN(::OHJPOHMEINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHJPOHMEINI*))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_CPFJHKGPGMN_OFFSET))(this, a1);
		}

		::System::Boolean PBALPMCNIKA(::INBJBBGLCKJ* a1, ::IOEPMPAKMOK* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INBJBBGLCKJ*, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + FFCGHKGDAJF_PBALPMCNIKA_OFFSET))(this, a1, a2);
		}

	};

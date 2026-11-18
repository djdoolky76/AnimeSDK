#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACMFDKHCPAB.h"
#include "unitysdk/DAAMNCGPMNI.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/LJJGNCGBFNE.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ZipLineSubSystem; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_EXITSPLINE_OFFSET UNITYSDK_OFFSET(0xE544E60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_NAVMESH_OFFSET UNITYSDK_OFFSET(0xE544E80)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_NAVMESH_PRESELECT_OFFSET UNITYSDK_OFFSET(0xE544EA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0xE544EC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xE544EE0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_EXITSPLINE_OFFSET UNITYSDK_OFFSET(0xE544E70)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_NAVMESH_OFFSET UNITYSDK_OFFSET(0xE544E90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_NAVMESH_PRESELECT_OFFSET UNITYSDK_OFFSET(0xE544EB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0xE544ED0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE544CA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL__ONCREATEPROPERTY_B__19_0_OFFSET UNITYSDK_OFFSET(0xE545080)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_ExitPointModel_TypeDefinitionIndex = 92016;

	class ZipLineSubSystem_ExitPointModel : public ::JJEJBPGJPJN
	{
	public:
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0x88
		::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>* _EndPoint_Navmesh_PreSelect_k__BackingField; // 0x90
		::LJHFMILANJA_1<::System::Nullable_1<::LJJGNCGBFNE>>* _EndPoint_ExitSpline_k__BackingField; // 0x98
		::JIOLFCAGOFH_1<::System::Nullable_1<::DAAMNCGPMNI>>* _EndPoint_k__BackingField; // 0xA0
		::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>* _EndPoint_Navmesh_k__BackingField; // 0xA8
		::System::Single Navmesh_Iterate_T; // 0xB0

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL__CTOR_OFFSET))(this, ownerSubSystem);
		}

		::LJHFMILANJA_1<::System::Nullable_1<::LJJGNCGBFNE>>* get_EndPoint_ExitSpline()
		{
			return ((::LJHFMILANJA_1<::System::Nullable_1<::LJJGNCGBFNE>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_EXITSPLINE_OFFSET))(this);
		}

		::System::Void set_EndPoint_ExitSpline(::LJHFMILANJA_1<::System::Nullable_1<::LJJGNCGBFNE>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Nullable_1<::LJJGNCGBFNE>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_EXITSPLINE_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>* get_EndPoint_Navmesh()
		{
			return ((::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_NAVMESH_OFFSET))(this);
		}

		::System::Void set_EndPoint_Navmesh(::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_NAVMESH_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>* get_EndPoint_Navmesh_PreSelect()
		{
			return ((::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_NAVMESH_PRESELECT_OFFSET))(this);
		}

		::System::Void set_EndPoint_Navmesh_PreSelect(::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Nullable_1<::ACMFDKHCPAB>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_NAVMESH_PRESELECT_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::Nullable_1<::DAAMNCGPMNI>>* get_EndPoint()
		{
			return ((::JIOLFCAGOFH_1<::System::Nullable_1<::DAAMNCGPMNI>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_OFFSET))(this);
		}

		::System::Void set_EndPoint(::JIOLFCAGOFH_1<::System::Nullable_1<::DAAMNCGPMNI>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Nullable_1<::DAAMNCGPMNI>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Nullable_1<::DAAMNCGPMNI> _OnCreateProperty_b__19_0()
		{
			return ((::System::Nullable_1<::DAAMNCGPMNI>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL__ONCREATEPROPERTY_B__19_0_OFFSET))(this);
		}
	};
}

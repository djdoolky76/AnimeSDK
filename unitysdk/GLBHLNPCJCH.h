#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKHJBACHOO.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/RPG/Client/NavMap/NavVertexType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FFCGHKGDAJF;
class GLBHLNPCJCH;

#define GLBHLNPCJCH_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x16A2CC90)
#define GLBHLNPCJCH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16A2C8D0)
#define GLBHLNPCJCH_CTOR_OFFSET UNITYSDK_OFFSET(0x16A2CA00)
#define GLBHLNPCJCH_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x16A2CA80)
#define GLBHLNPCJCH_DOKNNJKIPLD_OFFSET UNITYSDK_OFFSET(0x16A2CCD0)
#define GLBHLNPCJCH_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16A2C7A0)
#define GLBHLNPCJCH_GET_ID_OFFSET UNITYSDK_OFFSET(0x16A2C6F0)
#define GLBHLNPCJCH_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16A2C7E0)
#define GLBHLNPCJCH_GET_ISHIDEWAYPOINT_OFFSET UNITYSDK_OFFSET(0x16A2C8B0)
#define GLBHLNPCJCH_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x16A2C820)
#define GLBHLNPCJCH_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x16A2C770)
#define GLBHLNPCJCH_GET_VERTEXINDEX_OFFSET UNITYSDK_OFFSET(0x16A2C750)
#define GLBHLNPCJCH_HJBDDDLEGKE_OFFSET UNITYSDK_OFFSET(0x16A2C860)
#define GLBHLNPCJCH_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x16A2C700)
#define GLBHLNPCJCH_LDAIPNHKBOB_OFFSET UNITYSDK_OFFSET(0x16A2CAD0)
#define GLBHLNPCJCH_SET_ISHIDEWAYPOINT_OFFSET UNITYSDK_OFFSET(0x16A2C8C0)
#define GLBHLNPCJCH_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x16A2C790)

inline static constexpr unsigned int GLBHLNPCJCH_TypeDefinitionIndex = 76697;

	class GLBHLNPCJCH : public ::System::Object
	{
	public:
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x10
		::ABKHJBACHOO _VertexIndex_k__BackingField; // 0x18
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Boolean _IsHideWaypoint_k__BackingField; // 0x34
		::System::Void _ctor(::FFCGHKGDAJF* a1, ::ABKHJBACHOO a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*, ::ABKHJBACHOO))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_GET_ID_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavVertexType JBIOGKPHKKC()
		{
			return ((::RPG::Client::NavMap::NavVertexType(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_JBIOGKPHKKC_OFFSET))(this);
		}

		::ABKHJBACHOO get_VertexIndex()
		{
			return ((::ABKHJBACHOO(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_GET_VERTEXINDEX_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_SET_POSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_LittleGameEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_GET_LITTLEGAMEENTITYID_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavSpaceType HJBDDDLEGKE()
		{
			return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_HJBDDDLEGKE_OFFSET))(this);
		}

		::System::Boolean get_IsHideWaypoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_GET_ISHIDEWAYPOINT_OFFSET))(this);
		}

		::System::Void set_IsHideWaypoint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_SET_ISHIDEWAYPOINT_OFFSET))(this, a1);
		}

		static ::GLBHLNPCJCH* BPLPBPMEODA(::FFCGHKGDAJF* a1, ::ABKHJBACHOO a2)
		{
			return ((::GLBHLNPCJCH*(*)(::FFCGHKGDAJF*, ::ABKHJBACHOO))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void LDAIPNHKBOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_LDAIPNHKBOB_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void DOKNNJKIPLD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLBHLNPCJCH_DOKNNJKIPLD_OFFSET))(this, a1);
		}

	};

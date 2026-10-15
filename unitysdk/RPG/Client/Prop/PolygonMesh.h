#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PolygonType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PROP_POLYGONMESH_CTOR_OFFSET UNITYSDK_OFFSET(0xDD7DF50)
#define RPG_CLIENT_PROP_POLYGONMESH_DHHOJJBOHMD_OFFSET UNITYSDK_OFFSET(0xDD7DD40)
#define RPG_CLIENT_PROP_POLYGONMESH_HNPDGHFLFFA_OFFSET UNITYSDK_OFFSET(0xDD5A320)

namespace RPG::Client::Prop
{
	class PolygonMesh : public ::System::Object
	{
	public:
		::RPG::Client::Prop::PolygonType PolygonType; // 0x10
		::System::Int32 PolygonID; // 0x14
		::Il2CppArray<::UnityEngine::Vector3>* Vertices; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_POLYGONMESH_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* HNPDGHFLFFA()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_POLYGONMESH_HNPDGHFLFFA_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* DHHOJJBOHMD()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_POLYGONMESH_DHHOJJBOHMD_OFFSET))(this);
		}

	};
}

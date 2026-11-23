#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFDemolitionMesh; }
namespace RayFire { class RFDictionary; }
namespace RayFire { class RayfireRigid; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_BB5F6FA7EB4E8D6F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x29E5AF0)
#define RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x29E60A0)
#define RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

namespace RayFire
{
	inline static constexpr unsigned int RFDemolitionMesh_A3AD66A106627E1C_TypeDefinitionIndex = 15727;

	class RFDemolitionMesh_A3AD66A106627E1C : public ::System::Object
	{
	public:
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* FFDE99DB2A55498E; // 0x18
		::RayFire::RayfireRigid* F2C7FF5A19F78852; // 0x20
		::RayFire::RFDemolitionMesh* A544919C800E2923; // 0x28
		::System::Boolean AC88E1D9B2A34DBA; // 0x30
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* B3B0A2B943245028; // 0x38
		::UnityEngine::GameObject* EA8811888A2A5643; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* E50DA96CDE38A96F; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* A042AE7553DF7EFD; // 0x50
		::System::Collections::Generic::List_1<::RayFire::RFDictionary*>* E8088783F680C7E4; // 0x58
		::System::Int32 EE3B68C57A944C58; // 0x60

		::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
		}

		::System::Void F21DBBC44C999728()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_F21DBBC44C999728_OFFSET))(this);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Object* BB5F6FA7EB4E8D6F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_BB5F6FA7EB4E8D6F_OFFSET))(this);
		}

		::System::Void F38E5001C7AA1BB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_F38E5001C7AA1BB5_OFFSET))(this);
		}

		::System::Object* E34B6CA02139E820()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDEMOLITIONMESH_A3AD66A106627E1C_E34B6CA02139E820_OFFSET))(this);
		}
	};
}

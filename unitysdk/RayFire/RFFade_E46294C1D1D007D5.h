#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFShard; }
namespace RayFire { class RayfireRigidRoot; }

#define RAYFIRE_RFFADE_E46294C1D1D007D5_BB5F6FA7EB4E8D6F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define RAYFIRE_RFFADE_E46294C1D1D007D5_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define RAYFIRE_RFFADE_E46294C1D1D007D5_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x29FE660)
#define RAYFIRE_RFFADE_E46294C1D1D007D5_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define RAYFIRE_RFFADE_E46294C1D1D007D5_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x29FE8E0)
#define RAYFIRE_RFFADE_E46294C1D1D007D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

namespace RayFire
{
	inline static constexpr unsigned int RFFade_E46294C1D1D007D5_TypeDefinitionIndex = 15787;

	class RFFade_E46294C1D1D007D5 : public ::System::Object
	{
	public:
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* FFDE99DB2A55498E; // 0x18
		::RayFire::RayfireRigidRoot* A525E46A9CD93677; // 0x20
		::RayFire::RFShard* A9B58EA01420571C; // 0x28
		::System::Single BF464C44766E56F9; // 0x30
		::System::Int32 A5F99847C8048211; // 0x34
		::UnityEngine::Vector3 A21279417E288088; // 0x38

		::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_E46294C1D1D007D5__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
		}

		::System::Void F21DBBC44C999728()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_E46294C1D1D007D5_F21DBBC44C999728_OFFSET))(this);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_E46294C1D1D007D5_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Object* BB5F6FA7EB4E8D6F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_E46294C1D1D007D5_BB5F6FA7EB4E8D6F_OFFSET))(this);
		}

		::System::Void F38E5001C7AA1BB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_E46294C1D1D007D5_F38E5001C7AA1BB5_OFFSET))(this);
		}

		::System::Object* E34B6CA02139E820()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_E46294C1D1D007D5_E34B6CA02139E820_OFFSET))(this);
		}
	};
}

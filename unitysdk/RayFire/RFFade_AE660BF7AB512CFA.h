#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RayfireRigid; }

#define RAYFIRE_RFFADE_AE660BF7AB512CFA_BB5F6FA7EB4E8D6F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define RAYFIRE_RFFADE_AE660BF7AB512CFA_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define RAYFIRE_RFFADE_AE660BF7AB512CFA_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x29FE3E0)
#define RAYFIRE_RFFADE_AE660BF7AB512CFA_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define RAYFIRE_RFFADE_AE660BF7AB512CFA_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x29FE620)
#define RAYFIRE_RFFADE_AE660BF7AB512CFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

namespace RayFire
{
	inline static constexpr unsigned int RFFade_AE660BF7AB512CFA_TypeDefinitionIndex = 15786;

	class RFFade_AE660BF7AB512CFA : public ::System::Object
	{
	public:
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* FFDE99DB2A55498E; // 0x18
		::RayFire::RayfireRigid* F2C7FF5A19F78852; // 0x20
		::System::Single BF464C44766E56F9; // 0x28
		::System::Int32 A5F99847C8048211; // 0x2C
		::UnityEngine::Vector3 A21279417E288088; // 0x30

		::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_AE660BF7AB512CFA__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
		}

		::System::Void F21DBBC44C999728()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_AE660BF7AB512CFA_F21DBBC44C999728_OFFSET))(this);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_AE660BF7AB512CFA_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Object* BB5F6FA7EB4E8D6F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_AE660BF7AB512CFA_BB5F6FA7EB4E8D6F_OFFSET))(this);
		}

		::System::Void F38E5001C7AA1BB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_AE660BF7AB512CFA_F38E5001C7AA1BB5_OFFSET))(this);
		}

		::System::Object* E34B6CA02139E820()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_AE660BF7AB512CFA_E34B6CA02139E820_OFFSET))(this);
		}
	};
}

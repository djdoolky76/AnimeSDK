#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RAYFIRE_RFFADE_F986168E7D100998_BB5F6FA7EB4E8D6F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define RAYFIRE_RFFADE_F986168E7D100998_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define RAYFIRE_RFFADE_F986168E7D100998_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x29FF460)
#define RAYFIRE_RFFADE_F986168E7D100998_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define RAYFIRE_RFFADE_F986168E7D100998_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x29FF680)
#define RAYFIRE_RFFADE_F986168E7D100998__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

namespace RayFire
{
	inline static constexpr unsigned int RFFade_F986168E7D100998_TypeDefinitionIndex = 15790;

	class RFFade_F986168E7D100998 : public ::System::Object
	{
	public:
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* FFDE99DB2A55498E; // 0x18
		::UnityEngine::Transform* F64C72FFEBBF3A94; // 0x20
		::System::Single A4ABBFA6DC553D57; // 0x28
		::UnityEngine::Vector3 B6D5A423328C2171; // 0x2C
		::System::Single A6C24366AFED819D; // 0x38

		::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_F986168E7D100998__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
		}

		::System::Void F21DBBC44C999728()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_F986168E7D100998_F21DBBC44C999728_OFFSET))(this);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_F986168E7D100998_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Object* BB5F6FA7EB4E8D6F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_F986168E7D100998_BB5F6FA7EB4E8D6F_OFFSET))(this);
		}

		::System::Void F38E5001C7AA1BB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_F986168E7D100998_F38E5001C7AA1BB5_OFFSET))(this);
		}

		::System::Object* E34B6CA02139E820()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFADE_F986168E7D100998_E34B6CA02139E820_OFFSET))(this);
		}
	};
}

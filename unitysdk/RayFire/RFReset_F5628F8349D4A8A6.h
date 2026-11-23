#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RayfireRigid; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RAYFIRE_RFRESET_F5628F8349D4A8A6_B4F35848BF65CE4C_OFFSET UNITYSDK_OFFSET(0x29CE4A0)
#define RAYFIRE_RFRESET_F5628F8349D4A8A6_EB7ED49D15AA9693_OFFSET UNITYSDK_OFFSET(0x29CE3B0)
#define RAYFIRE_RFRESET_F5628F8349D4A8A6_F0E5698BB5C5575E_OFFSET UNITYSDK_OFFSET(0x29CE450)
#define RAYFIRE_RFRESET_F5628F8349D4A8A6_F3B40F513873DF47_OFFSET UNITYSDK_OFFSET(0x29CE400)
#define RAYFIRE_RFRESET_F5628F8349D4A8A6_F6C0F84DF6F60B49_OFFSET UNITYSDK_OFFSET(0x29CE4D0)
#define RAYFIRE_RFRESET_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x29CF840)
#define RAYFIRE_RFRESET_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RFReset_F5628F8349D4A8A6_TypeDefinitionIndex = 15706;

	class RFReset_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::RayFire::RFReset_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::RayFire::RFReset_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(RFReset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>** StaticGet_B3A8AFF65974F2A8()
		{
			return (::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RFReset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>** StaticGet_AA899B2A0818721B()
		{
			return (::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RFReset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>** StaticGet_E9ECEFD236E8FFBC()
		{
			return (::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RFReset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>** StaticGet_E59D3D96EDFC10CF()
		{
			return (::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RFReset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>** StaticGet_A7D4682747EF6274()
		{
			return (::System::Func_2<::RayFire::RayfireRigid*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RFReset_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean EB7ED49D15AA9693(::RayFire::RayfireRigid* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_F5628F8349D4A8A6_EB7ED49D15AA9693_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Boolean F3B40F513873DF47(::RayFire::RayfireRigid* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_F5628F8349D4A8A6_F3B40F513873DF47_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Boolean F0E5698BB5C5575E(::RayFire::RayfireRigid* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_F5628F8349D4A8A6_F0E5698BB5C5575E_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Boolean B4F35848BF65CE4C(::RayFire::RayfireRigid* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_F5628F8349D4A8A6_B4F35848BF65CE4C_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Boolean F6C0F84DF6F60B49(::RayFire::RayfireRigid* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_F5628F8349D4A8A6_F6C0F84DF6F60B49_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}

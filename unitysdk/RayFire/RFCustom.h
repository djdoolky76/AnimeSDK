#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFCustom_B75933C37C291B28.h"
#include "unitysdk/RayFire/RFCustom_F298992F3533FD7B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFCUSTOM_GETCUSTOMBOUNDPOINTS_OFFSET UNITYSDK_OFFSET(0x2955420)
#define RAYFIRE_RFCUSTOM_GETCUSTOMINPUTCLOUD_OFFSET UNITYSDK_OFFSET(0x29554F0)
#define RAYFIRE_RFCUSTOM_GETCUSTOMOUTPUTCLOUD_OFFSET UNITYSDK_OFFSET(0x2955890)
#define RAYFIRE_RFCUSTOM_GETCUSTOMPOINTCLOUD_OFFSET UNITYSDK_OFFSET(0x2955B50)
#define RAYFIRE_RFCUSTOM_RANDOMPOINTINRADIUS_OFFSET UNITYSDK_OFFSET(0x2955CC0)
#define RAYFIRE_RFCUSTOM_RANDOMVECTOR_OFFSET UNITYSDK_OFFSET(0x2955DB0)
#define RAYFIRE_RFCUSTOM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2955E80)
#define RAYFIRE_RFCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x2955E40)

namespace RayFire
{
	inline static constexpr unsigned int RFCustom_TypeDefinitionIndex = 15456;

	class RFCustom : public ::System::Object
	{
	public:
		::RayFire::RFCustom_B75933C37C291B28 source; // 0x10
		::RayFire::RFCustom_F298992F3533FD7B useAs; // 0x14
		::System::Int32 amount; // 0x18
		::System::Single radius; // 0x1C
		::System::Boolean enable; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single size; // 0x24
		::Il2CppArray<::UnityEngine::Transform*>* transforms; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* vector3; // 0x30
		::System::Boolean noPoints; // 0x38

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetCustomInputCloud(::RayFire::RFCustom* A898BF354CA4EE50, ::UnityEngine::Transform* F64C72FFEBBF3A94)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::RayFire::RFCustom*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCUSTOM_GETCUSTOMINPUTCLOUD_OFFSET))(A898BF354CA4EE50, F64C72FFEBBF3A94);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFCUSTOM__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetCustomPointCLoud(::RayFire::RFCustom* A898BF354CA4EE50, ::UnityEngine::Transform* F64C72FFEBBF3A94, ::System::Int32 AF9A63638B456161, ::UnityEngine::B3A7F113FE1DE383 E6C1D9569865F7A5)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::RayFire::RFCustom*, ::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::B3A7F113FE1DE383))((::PBYTE)hIl2Cpp + RAYFIRE_RFCUSTOM_GETCUSTOMPOINTCLOUD_OFFSET))(A898BF354CA4EE50, F64C72FFEBBF3A94, AF9A63638B456161, E6C1D9569865F7A5);
		}

		::System::Void _ctor_1(::RayFire::RFCustom* BADCD2C933ABE188)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFCustom*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCUSTOM__CTOR_1_OFFSET))(this, BADCD2C933ABE188);
		}

		static ::UnityEngine::Vector3 RandomPointInRadius(::UnityEngine::Vector3 FF9A37DE513AC35B, ::System::Single F0CEBBB186782829)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFCUSTOM_RANDOMPOINTINRADIUS_OFFSET))(FF9A37DE513AC35B, F0CEBBB186782829);
		}

		static ::UnityEngine::Vector3 RandomVector()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFCUSTOM_RANDOMVECTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetCustomOutputCloud(::RayFire::RFCustom* A898BF354CA4EE50, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BC429098A82DB5B8, ::System::Int32 AF9A63638B456161, ::UnityEngine::B3A7F113FE1DE383 E6C1D9569865F7A5)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::RayFire::RFCustom*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::UnityEngine::B3A7F113FE1DE383))((::PBYTE)hIl2Cpp + RAYFIRE_RFCUSTOM_GETCUSTOMOUTPUTCLOUD_OFFSET))(A898BF354CA4EE50, BC429098A82DB5B8, AF9A63638B456161, E6C1D9569865F7A5);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetCustomBoundPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BC429098A82DB5B8, ::UnityEngine::B3A7F113FE1DE383 E6C1D9569865F7A5)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::B3A7F113FE1DE383))((::PBYTE)hIl2Cpp + RAYFIRE_RFCUSTOM_GETCUSTOMBOUNDPOINTS_OFFSET))(BC429098A82DB5B8, E6C1D9569865F7A5);
		}
	};
}

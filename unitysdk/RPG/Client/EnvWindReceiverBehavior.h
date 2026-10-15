#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class EnvWindReceiverMonoPlugin; }
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_ABLEJGIEPPA_OFFSET UNITYSDK_OFFSET(0xCDF7FA0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCDF8F30)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCDF8DC0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCDF8F10)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_ECGKINHHCFI_OFFSET UNITYSDK_OFFSET(0xCDF48F0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GEDCMEMFCJO_OFFSET UNITYSDK_OFFSET(0xCDF46A0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_AABB_OFFSET UNITYSDK_OFFSET(0xCDF45E0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_CONTAINWINDTRIGGERSCOUNT_OFFSET UNITYSDK_OFFSET(0xCDF4630)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0xCDF45C0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_WINDVELOCITY_OFFSET UNITYSDK_OFFSET(0xCDF4610)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDF65C0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GOKBOCINEPH_OFFSET UNITYSDK_OFFSET(0xCDF7910)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCDF8E30)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_KAGEIMIHJHP_OFFSET UNITYSDK_OFFSET(0xCDF8500)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCDF8920)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_LGFJHKBMEDJ_OFFSET UNITYSDK_OFFSET(0xCDF7DC0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCDF8D00)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_NENENGINGNL_OFFSET UNITYSDK_OFFSET(0xCDF7CF0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_NHICBJDFPED_OFFSET UNITYSDK_OFFSET(0xCDF8730)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_OGMPOCEMKIH_OFFSET UNITYSDK_OFFSET(0xCDF7E40)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCDF8EA0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCDF89A0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_PJGBJEGLCID_OFFSET UNITYSDK_OFFSET(0xCDF76A0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_POFEFCDPFEM_OFFSET UNITYSDK_OFFSET(0xCDF4650)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_AABB_OFFSET UNITYSDK_OFFSET(0xCDF4600)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_CONTAINWINDTRIGGERSCOUNT_OFFSET UNITYSDK_OFFSET(0xCDF4640)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0xCDF45D0)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_WINDVELOCITY_OFFSET UNITYSDK_OFFSET(0xCDF4620)
#define RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCDF7F40)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvWindReceiverBehavior_TypeDefinitionIndex = 71062;

	class EnvWindReceiverBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Vector4 _WindVelocity; // 0x38
		::UnityEngine::Vector3 _AABB; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::EnvironmentSystem* _EnvSys; // 0x58
		::UnityEngine::Vector3 _GlobalWind; // 0x60
		::System::Int32 _ContainWindTriggersCount; // 0x6C
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* _InstancedMaterialsList; // 0x70
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* _SharedMaterialsList; // 0x78
		::System::Boolean _Selected; // 0x80
		static ::System::Int32* StaticGet__FlagWaveAmplitudeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "EnvWindReceiverBehavior")->GetStaticField(0x11B70);
		}

		static ::System::Int32* StaticGet__FlagWaveFrequencyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "EnvWindReceiverBehavior")->GetStaticField(0x11B74);
		}

		static ::System::Int32* StaticGet__AABBSizeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "EnvWindReceiverBehavior")->GetStaticField(0x11B78);
		}

		static ::System::Int32* StaticGet__WindVelocityID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "EnvWindReceiverBehavior")->GetStaticField(0x11B7C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Boolean get_Selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_SELECTED_OFFSET))(this);
		}

		::System::Void set_Selected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_SELECTED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_AABB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_AABB_OFFSET))(this);
		}

		::System::Void set_AABB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_AABB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_WindVelocity()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_WINDVELOCITY_OFFSET))(this);
		}

		::System::Void set_WindVelocity(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_WINDVELOCITY_OFFSET))(this, a1);
		}

		::System::Int32 get_ContainWindTriggersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET_CONTAINWINDTRIGGERSCOUNT_OFFSET))(this);
		}

		::System::Void set_ContainWindTriggersCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_SET_CONTAINWINDTRIGGERSCOUNT_OFFSET))(this, a1);
		}

		::System::Void POFEFCDPFEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_POFEFCDPFEM_OFFSET))(this);
		}

		::System::Void ECGKINHHCFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_ECGKINHHCFI_OFFSET))(this);
		}

		::System::Void PJGBJEGLCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_PJGBJEGLCID_OFFSET))(this);
		}

		::System::Void GOKBOCINEPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GOKBOCINEPH_OFFSET))(this);
		}

		::System::Boolean NENENGINGNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_NENENGINGNL_OFFSET))(this);
		}

		::UnityEngine::GameObject* LGFJHKBMEDJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_LGFJHKBMEDJ_OFFSET))(this);
		}

		::UnityEngine::Renderer* OGMPOCEMKIH()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_OGMPOCEMKIH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void ABLEJGIEPPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_ABLEJGIEPPA_OFFSET))(this);
		}

		::System::Void GEDCMEMFCJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GEDCMEMFCJO_OFFSET))(this);
		}

		::System::Void KAGEIMIHJHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_KAGEIMIHJHP_OFFSET))(this);
		}

		::System::Void NHICBJDFPED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_NHICBJDFPED_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::RPG::Client::EnvWindReceiverMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::EnvWindReceiverMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVWINDRECEIVERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}

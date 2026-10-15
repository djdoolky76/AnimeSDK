#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraInfo.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DOOMDABHOJM;
namespace RPG::Client { class VirtualCameraFollowMonoPlugin; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn_PostUpdateVCCamera; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_AFJEGHKDKDP_OFFSET UNITYSDK_OFFSET(0xE4533B0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_AODAHAFDMKM_OFFSET UNITYSDK_OFFSET(0xE44FBE0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE453EA0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE44FF20)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE453E90)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_DCPCMOMJKHB_OFFSET UNITYSDK_OFFSET(0xE4500E0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xE4502F0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_EOPFGOHGMHI_OFFSET UNITYSDK_OFFSET(0xE451C40)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE44FE90)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE44FF80)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE44FAE0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_LAEPPLBKAND_OFFSET UNITYSDK_OFFSET(0xE453D30)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_MBHKNCDNCBM_OFFSET UNITYSDK_OFFSET(0xE452DF0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE44FCA0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE450080)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_ODNCEPEJGKH_OFFSET UNITYSDK_OFFSET(0xE452EA0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE44FFE0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PBJPBJCGEGL_OFFSET UNITYSDK_OFFSET(0xE451B80)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE44FB40)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PLBBGOIOIAC_1_OFFSET UNITYSDK_OFFSET(0xE452330)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PLBBGOIOIAC_OFFSET UNITYSDK_OFFSET(0xE4529D0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE450040)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PPKNKHBHFCG_OFFSET UNITYSDK_OFFSET(0xE44FED0)

namespace RPG::Client
{
	class VirtualCameraFollowBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Single originalDistance; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::CustomRP::CRPVirtualCameraVolumn_PostUpdateVCCamera* cbfun; // 0x40
		static ::DOOMDABHOJM** StaticGet_VCRect3()
		{
			return (::DOOMDABHOJM**)UnitySDK::FromName("RPG.Client", "VirtualCameraFollowBehavior")->GetStaticField(0x4AEB0);
		}

		static ::DOOMDABHOJM** StaticGet_VCRect1()
		{
			return (::DOOMDABHOJM**)UnitySDK::FromName("RPG.Client", "VirtualCameraFollowBehavior")->GetStaticField(0x4AEB8);
		}

		static ::DOOMDABHOJM** StaticGet_VCRect0()
		{
			return (::DOOMDABHOJM**)UnitySDK::FromName("RPG.Client", "VirtualCameraFollowBehavior")->GetStaticField(0x4AEC0);
		}

		static ::DOOMDABHOJM** StaticGet_VCRect2()
		{
			return (::DOOMDABHOJM**)UnitySDK::FromName("RPG.Client", "VirtualCameraFollowBehavior")->GetStaticField(0x4AEC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void AODAHAFDMKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_AODAHAFDMKM_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void PPKNKHBHFCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PPKNKHBHFCG_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void DCPCMOMJKHB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_DCPCMOMJKHB_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Single PBJPBJCGEGL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PBJPBJCGEGL_OFFSET))(this, a1, a2);
		}

		static ::System::Void EOPFGOHGMHI(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Int32 a2, ::UnityEngine::Rendering::CRPCameraInfo a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Rendering::CRPCameraInfo, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_EOPFGOHGMHI_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Matrix4x4 PLBBGOIOIAC(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PLBBGOIOIAC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Matrix4x4 PLBBGOIOIAC_1(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector2 a7, ::UnityEngine::Vector2 a8, ::UnityEngine::Vector2 a9, ::UnityEngine::Vector2 a10)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_PLBBGOIOIAC_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::UnityEngine::Vector2 MBHKNCDNCBM(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_MBHKNCDNCBM_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Single>* ODNCEPEJGKH(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector2 a7, ::UnityEngine::Vector2 a8)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_ODNCEPEJGKH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::Il2CppArray<::System::Single>* AFJEGHKDKDP(::System::Object* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Object*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_AFJEGHKDKDP_OFFSET))(a1, a2);
		}

		static ::System::Void LAEPPLBKAND()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_LAEPPLBKAND_OFFSET))();
		}

		::RPG::Client::VirtualCameraFollowMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::VirtualCameraFollowMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}

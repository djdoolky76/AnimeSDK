#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class ReflectionHSVVolumeMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE59EB0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xDE59630)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_CKIHFFKOMIH_OFFSET UNITYSDK_OFFSET(0xDE59510)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDE59E40)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDE590B0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xDE59690)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDE58D40)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_LAIALCNFLHE_OFFSET UNITYSDK_OFFSET(0xDE59D00)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xDE59130)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xDE59790)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_NFMLEHEIEFH_OFFSET UNITYSDK_OFFSET(0xDE598E0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xDE596F0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xDE58DE0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xDE59750)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xDE597F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ReflectionHSVVolumeBehavior_TypeDefinitionIndex = 70706;

	class ReflectionHSVVolumeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Matrix4x4 HSVVolumePosMatrix; // 0x38
		::UnityEngine::Matrix4x4 HSVVolumeSizeMatrix; // 0x78
		static ::System::Collections::Generic::List_1<::RPG::Client::ReflectionHSVVolumeMonoPlugin*>** StaticGet_HSVVolumeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::ReflectionHSVVolumeMonoPlugin*>**)UnitySDK::FromName("RPG.Client", "ReflectionHSVVolumeBehavior")->GetStaticField(0x5BC40);
		}

		static ::System::Int32* StaticGet__ReflectionHSVVolumeCountID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ReflectionHSVVolumeBehavior")->GetStaticField(0x13C70);
		}

		static ::System::Int32* StaticGet__ReflectionHSVVolumeSizeMatrixID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ReflectionHSVVolumeBehavior")->GetStaticField(0x13C74);
		}

		static ::System::Int32* StaticGet__ReflectionHSVVolumePosMatrixID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ReflectionHSVVolumeBehavior")->GetStaticField(0x13C78);
		}

		static ::System::Boolean* StaticGet_isDirty()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "ReflectionHSVVolumeBehavior")->GetStaticField(0x13C7C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void NFMLEHEIEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_NFMLEHEIEFH_OFFSET))(this);
		}

		::System::Void LAIALCNFLHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_LAIALCNFLHE_OFFSET))(this);
		}

		::System::Void CKIHFFKOMIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_CKIHFFKOMIH_OFFSET))(this);
		}

		::RPG::Client::ReflectionHSVVolumeMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ReflectionHSVVolumeMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}

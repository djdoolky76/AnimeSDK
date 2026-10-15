#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOLOGINTRAINCONTROL_CCFNGFBMHKO_OFFSET UNITYSDK_OFFSET(0xD8465F0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0xD847090)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD847060)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_FEGBLLOFDHA_OFFSET UNITYSDK_OFFSET(0xD8463C0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_HNJCLJMEAJJ_OFFSET UNITYSDK_OFFSET(0xD8467D0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD846DB0)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD847010)
#define RPG_CLIENT_MONOLOGINTRAINCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD845EE0)

namespace RPG::Client
{
	class MonoLoginTrainControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* train; // 0x18
		::UnityEngine::GameObject* train02; // 0x20
		::UnityEngine::Transform* dissolveQuad; // 0x28
		::System::Single dissolveProgress; // 0x30
		::UnityEngine::Vector3 quadStartLocalPos; // 0x34
		::UnityEngine::Vector3 quadEndLocalPos; // 0x40
		::System::Boolean CKHOFPKMKLC; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* JDDAANCPKHO; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* EEFPGBGALJI; // 0x58
		static ::System::Int32* StaticGet_GEANMPPJPDK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoLoginTrainControl")->GetStaticField(0x14ED0);
		}

		static ::System::Int32* StaticGet_MCFKPLLFPBH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoLoginTrainControl")->GetStaticField(0x14ED4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void FEGBLLOFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_FEGBLLOFDHA_OFFSET))(this);
		}

		::System::Void CCFNGFBMHKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_CCFNGFBMHKO_OFFSET))(this);
		}

		::System::Void HNJCLJMEAJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_HNJCLJMEAJJ_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOLOGINTRAINCONTROL_ONDISABLE_OFFSET))(this);
		}

	};
}

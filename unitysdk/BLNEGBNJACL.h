#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLNEGBNJACL_APLLCIPBJFH_OFFSET UNITYSDK_OFFSET(0xBA78520)
#define BLNEGBNJACL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA786C0)
#define BLNEGBNJACL_COFJDFOIIOL_OFFSET UNITYSDK_OFFSET(0xBA781E0)
#define BLNEGBNJACL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA785F0)
#define BLNEGBNJACL_EIDKAJFODBJ_OFFSET UNITYSDK_OFFSET(0xBA78150)
#define BLNEGBNJACL_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0xBA784C0)
#define BLNEGBNJACL_EPOLDGPEFPO_OFFSET UNITYSDK_OFFSET(0xBA782D0)
#define BLNEGBNJACL_HNKBEBMODFP_OFFSET UNITYSDK_OFFSET(0xBA78430)
#define BLNEGBNJACL_LBCLBMHBHPD_OFFSET UNITYSDK_OFFSET(0xBA77E50)
#define BLNEGBNJACL_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBA779E0)
#define BLNEGBNJACL_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBA77C60)

inline static constexpr unsigned int BLNEGBNJACL_TypeDefinitionIndex = 73250;

	class BLNEGBNJACL : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* AANLJOIGLLE; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KNLPBDKAGLP; // 0x20
		static ::System::Boolean* StaticGet_MHEAIOMEGCA()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BLNEGBNJACL")->GetStaticField(0x15850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNEGBNJACL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLNEGBNJACL_CCTOR_OFFSET))();
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + BLNEGBNJACL_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNEGBNJACL_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void LBCLBMHBHPD(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + BLNEGBNJACL_LBCLBMHBHPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EIDKAJFODBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNEGBNJACL_EIDKAJFODBJ_OFFSET))(this);
		}

		::System::Void COFJDFOIIOL(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLNEGBNJACL_COFJDFOIIOL_OFFSET))(this, a1, a2);
		}

		::System::Void EPOLDGPEFPO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLNEGBNJACL_EPOLDGPEFPO_OFFSET))(this, a1);
		}

		::System::Void HNKBEBMODFP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + BLNEGBNJACL_HNKBEBMODFP_OFFSET))(this, a1, a2);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNEGBNJACL_EJGKNIJIMLH_OFFSET))(this);
		}

		::System::Void APLLCIPBJFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLNEGBNJACL_APLLCIPBJFH_OFFSET))(this, a1);
		}

	};

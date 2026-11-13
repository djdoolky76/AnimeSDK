#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class BillboardController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAC320)
#define RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CDAC060)
#define RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_REGIST_OFFSET UNITYSDK_OFFSET(0x1CDAC110)
#define RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_UNREGIST_OFFSET UNITYSDK_OFFSET(0x1CDAC260)
#define RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CDAC020)

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardControllerManager_TypeDefinitionIndex = 72354;

	class BillboardControllerManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::BillboardController*>** StaticGet_PJKKBCDKCGL()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::BillboardController*>**)UnitySDK::FromName("RPG.Client", "BillboardControllerManager")->GetStaticField(0x68E30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Regist(::RPG::Client::BillboardController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::BillboardController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_REGIST_OFFSET))(a1);
		}

		static ::System::Void UnRegist(::RPG::Client::BillboardController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::BillboardController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDCONTROLLERMANAGER_UNREGIST_OFFSET))(a1);
		}

	};
}

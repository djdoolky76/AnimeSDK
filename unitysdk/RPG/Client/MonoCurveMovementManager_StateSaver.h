#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapDef; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x14018530)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_CFHFDPPMKCP_OFFSET UNITYSDK_OFFSET(0x14018540)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_CTOR_OFFSET UNITYSDK_OFFSET(0x14018260)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x14016570)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager_StateSaver_TypeDefinitionIndex = 70496;

	class MonoCurveMovementManager_StateSaver : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* movementHandlers; // 0x10
		static ::RPG::Client::MapDef** StaticGet_cachedMapDef()
		{
			return (::RPG::Client::MapDef**)UnitySDK::FromName("RPG.Client", "StateSaver")->GetStaticField(0x683F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_CTOR_OFFSET))(this);
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Void CFHFDPPMKCP(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_CFHFDPPMKCP_OFFSET))(a1);
		}

	};
}

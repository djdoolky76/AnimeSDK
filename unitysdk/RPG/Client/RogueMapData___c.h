#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueSiteData; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ROGUEMAPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB25E60)
#define RPG_CLIENT_ROGUEMAPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB25EA0)
#define RPG_CLIENT_ROGUEMAPDATA___C__GETBRANCHTOTALNUM_B__10_0_OFFSET UNITYSDK_OFFSET(0x1CB25F20)
#define RPG_CLIENT_ROGUEMAPDATA___C__GETSTARTROGUESITEDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x1CB25EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMapData___c_TypeDefinitionIndex = 69404;

	class RogueMapData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A40);
		}

		static ::System::Predicate_1<::RPG::Client::RogueSiteData*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::RPG::Client::RogueSiteData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A48);
		}

		static ::System::Predicate_1<::RPG::Client::RogueSiteData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::RogueSiteData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetStartRogueSiteData_b__5_0(::RPG::Client::RogueSiteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueSiteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C__GETSTARTROGUESITEDATA_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBranchTotalNum_b__10_0(::RPG::Client::RogueSiteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueSiteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA___C__GETBRANCHTOTALNUM_B__10_0_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTalentDataItem; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE008B50)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE008B90)
#define RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C__GETALLTALENTDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0xE008BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPermanentTalentInfo___c_TypeDefinitionIndex = 67856;

	class RogueTournPermanentTalentInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTalentDataItem*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTalentDataItem*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6ABB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6ABB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllTalentData_b__9_0(::RPG::Client::RogueTalentDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTalentDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERMANENTTALENTINFO___C__GETALLTALENTDATA_B__9_0_OFFSET))(this, a1);
		}

	};
}

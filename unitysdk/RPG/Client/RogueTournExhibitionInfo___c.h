#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournExhibitionData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFE94E0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE9520)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__GET_UNLOCKEDEXHIBITIONCOUNT_B__26_0_OFFSET UNITYSDK_OFFSET(0xDFE9530)

namespace RPG::Client
{
	class RogueTournExhibitionInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CE20);
		}

		static ::System::Func_2<::RPG::Client::RogueTournExhibitionData*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournExhibitionData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CE28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_UnlockedExhibitionCount_b__26_0(::RPG::Client::RogueTournExhibitionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__GET_UNLOCKEDEXHIBITIONCOUNT_B__26_0_OFFSET))(this, a1);
		}

	};
}

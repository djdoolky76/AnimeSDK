#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RogueTournExpScoreRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C863980)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8639B0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C8639C0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_1_OFFSET UNITYSDK_OFFSET(0x1C8639E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaDataItem___c_TypeDefinitionIndex = 69441;

	class RogueTournAreaDataItem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72370);
		}

		static ::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72378);
		}

		static ::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__1_0(::RPG::GameCore::RogueTournExpScoreRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_0_OFFSET))(this, a1);
		}

		::System::UInt32 _Create_b__1_1(::RPG::GameCore::RogueTournExpScoreRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_1_OFFSET))(this, a1);
		}

	};
}

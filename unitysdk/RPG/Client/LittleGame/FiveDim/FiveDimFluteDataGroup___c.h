#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDEA73E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDEA7420)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C__GETFLUTEDATALIST_B__9_0_OFFSET UNITYSDK_OFFSET(0xDEA7430)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFluteDataGroup___c_TypeDefinitionIndex = 79547;

	class FiveDimFluteDataGroup___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*>**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x3C370);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x3C378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetFluteDataList_b__9_0(::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*, ::RPG::Client::LittleGame::FiveDim::FiveDimFluteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFLUTEDATAGROUP___C__GETFLUTEDATALIST_B__9_0_OFFSET))(this, a1, a2);
		}

	};
}

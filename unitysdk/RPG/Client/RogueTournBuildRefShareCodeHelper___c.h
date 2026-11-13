#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8748E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C874920)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C874930)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_1_OFFSET UNITYSDK_OFFSET(0x1C874950)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_2_OFFSET UNITYSDK_OFFSET(0x1C874970)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_3_OFFSET UNITYSDK_OFFSET(0x1C874990)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_4_OFFSET UNITYSDK_OFFSET(0x1C8749B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex = 69497;

	class RogueTournBuildRefShareCodeHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72790);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72798);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x727A0);
		}

		static ::System::Func_2<::RPG::AvatarSystem::AvatarPath*, ::System::Int32>** StaticGet___9__8_4()
		{
			return (::System::Func_2<::RPG::AvatarSystem::AvatarPath*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x727A8);
		}

		static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x727B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x727B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ToPayload_b__8_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_0_OFFSET))(this, a1);
		}

		::System::UInt32 __ToPayload_b__8_1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_1_OFFSET))(this, a1);
		}

		::System::UInt32 __ToPayload_b__8_2(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_2_OFFSET))(this, a1);
		}

		::System::UInt32 __ToPayload_b__8_3(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_3_OFFSET))(this, a1);
		}

		::System::Int32 __ToPayload_b__8_4(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_4_OFFSET))(this, a1);
		}

	};
}

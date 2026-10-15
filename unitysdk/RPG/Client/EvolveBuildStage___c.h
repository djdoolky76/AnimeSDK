#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFGPEAIMBJK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class MonsterData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE34E60)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE34E90)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_0_OFFSET UNITYSDK_OFFSET(0xCE34F50)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_1_OFFSET UNITYSDK_OFFSET(0xCE34FA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_0_OFFSET UNITYSDK_OFFSET(0xCE34FC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_1_OFFSET UNITYSDK_OFFSET(0xCE34FE0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETTRIALAVATARS_B__48_0_OFFSET UNITYSDK_OFFSET(0xCE34F40)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GET_RECOMMENDGEARS_B__41_0_OFFSET UNITYSDK_OFFSET(0xCE34ED0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xCE34EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStage___c_TypeDefinitionIndex = 63809;

	class EvolveBuildStage___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x45C60);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x45C68);
		}

		static ::System::Comparison_1<::KFGPEAIMBJK*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::KFGPEAIMBJK*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x45C70);
		}

		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x45C78);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x45C80);
		}

		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x45C88);
		}

		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__50_1()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x45C90);
		}

		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x45C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::KFGPEAIMBJK* a1, ::KFGPEAIMBJK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KFGPEAIMBJK*, ::KFGPEAIMBJK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EvolveBuildCollectionGear* _get_RecommendGears_b__41_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GET_RECOMMENDGEARS_B__41_0_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* _GetTrialAvatars_b__48_0(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETTRIALAVATARS_B__48_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterIDs_b__49_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetMonsterIDs_b__49_1(::RPG::Client::MonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMonsters_b__50_0(::RPG::Client::MonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsters_b__50_1(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_1_OFFSET))(this, a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA9FD00)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA9FD40)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C__SYNCELATIONTEMPLATEID_B__3_0_OFFSET UNITYSDK_OFFSET(0xDA9FDB0)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0xDA9FD50)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C__SYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0xDA9FD70)
#define RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C__SYNC_B__2_0_OFFSET UNITYSDK_OFFSET(0xDA9FD90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightContextValue___c_TypeDefinitionIndex = 67434;

	class GridFightContextValue___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CDB0);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CDB8);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CDC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CDC8);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CDD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _Sync_b__0_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C__SYNC_B__0_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _Sync_b__1_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C__SYNC_B__1_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _Sync_b__2_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C__SYNC_B__2_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* _SyncElationTemplateID_b__3_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONTEXTVALUE___C__SYNCELATIONTEMPLATEID_B__3_0_OFFSET))(this, a1);
		}

	};
}

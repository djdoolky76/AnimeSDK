#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1F8CB0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1F8CF0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__76_0_OFFSET UNITYSDK_OFFSET(0xD1F8D00)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__76_1_OFFSET UNITYSDK_OFFSET(0xD1F8D60)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__79_0_OFFSET UNITYSDK_OFFSET(0xD1F8DD0)

namespace RPG::Client
{
	class GridFightRoleConfig___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E310);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>** StaticGet___9__79_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E318);
		}

		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>** StaticGet___9__76_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E320);
		}

		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>** StaticGet___9__76_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetAllRankBackEquipmentDesc_b__76_0(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__76_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetAllRankBackEquipmentDesc_b__76_1(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__76_1_OFFSET))(this, a1);
		}

		::System::Int32 __InitBackRankConfigs_b__79_0(::RPG::Client::GridFightBackRankConfig* a1, ::RPG::Client::GridFightBackRankConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__79_0_OFFSET))(this, a1, a2);
		}

	};
}

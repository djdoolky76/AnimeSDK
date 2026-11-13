#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4DFAC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DFB00)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__97_0_OFFSET UNITYSDK_OFFSET(0x1D4DFB10)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__97_1_OFFSET UNITYSDK_OFFSET(0x1D4DFB70)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__100_0_OFFSET UNITYSDK_OFFSET(0x1D4DFBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c_TypeDefinitionIndex = 66799;

	class GridFightRoleConfig___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>** StaticGet___9__100_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xA210);
		}

		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>** StaticGet___9__97_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xA218);
		}

		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>** StaticGet___9__97_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xA220);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xA228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetAllRankBackEquipmentDesc_b__97_0(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__97_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetAllRankBackEquipmentDesc_b__97_1(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__97_1_OFFSET))(this, a1);
		}

		::System::Int32 __InitBackRankConfigs_b__100_0(::RPG::Client::GridFightBackRankConfig* a1, ::RPG::Client::GridFightBackRankConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__100_0_OFFSET))(this, a1, a2);
		}

	};
}

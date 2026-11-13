#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC573B0)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC573F0)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_0_OFFSET UNITYSDK_OFFSET(0x1CC57400)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_1_OFFSET UNITYSDK_OFFSET(0x1CC57410)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_2_OFFSET UNITYSDK_OFFSET(0x1CC57480)
#define RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITTRAITCONFIGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1CC574D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModuleUnlockData___c_TypeDefinitionIndex = 66904;

	class GridFightModuleUnlockData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x726E0);
		}

		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x726E8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__10_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x726F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x726F8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* __InitRoles_b__10_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_0_OFFSET))(this, a1);
		}

		::System::UInt32 __InitRoles_b__10_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_1_OFFSET))(this, a1);
		}

		::System::UInt32 __InitRoles_b__10_2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITROLES_B__10_2_OFFSET))(this, a1);
		}

		::System::UInt32 __InitTraitConfigs_b__11_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULEUNLOCKDATA___C___INITTRAITCONFIGS_B__11_0_OFFSET))(this, a1);
		}

	};
}

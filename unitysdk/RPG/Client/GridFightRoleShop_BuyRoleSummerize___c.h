#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4EBEB0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EBEF0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDAHATARGETROLE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1D4EC0C0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDAHATARGETROLE_B__4_1_OFFSET UNITYSDK_OFFSET(0x1D4EC160)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDAHATARGETROLE_B__4_2_OFFSET UNITYSDK_OFFSET(0x1D4EC1C0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDBONUSSOURCEROLE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D4EBF00)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDBONUSSOURCEROLE_B__3_1_OFFSET UNITYSDK_OFFSET(0x1D4EBFA0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDBONUSSOURCEROLE_B__3_2_OFFSET UNITYSDK_OFFSET(0x1D4EC000)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDBONUSSOURCEROLE_B__3_3_OFFSET UNITYSDK_OFFSET(0x1D4EC060)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_BuyRoleSummerize___c_TypeDefinitionIndex = 66930;

	class GridFightRoleShop_BuyRoleSummerize___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xD6A0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xD6A8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xD6B0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xD6B8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xD6C0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xD6C8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xD6D0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xD6D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindBonusSourceRole_b__3_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDBONUSSOURCEROLE_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean __FindBonusSourceRole_b__3_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDBONUSSOURCEROLE_B__3_1_OFFSET))(this, a1);
		}

		::System::Boolean __FindBonusSourceRole_b__3_2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDBONUSSOURCEROLE_B__3_2_OFFSET))(this, a1);
		}

		::System::Boolean __FindBonusSourceRole_b__3_3(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDBONUSSOURCEROLE_B__3_3_OFFSET))(this, a1);
		}

		::System::Boolean __FindAhaTargetRole_b__4_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDAHATARGETROLE_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean __FindAhaTargetRole_b__4_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDAHATARGETROLE_B__4_1_OFFSET))(this, a1);
		}

		::System::Boolean __FindAhaTargetRole_b__4_2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_BUYROLESUMMERIZE___C___FINDAHATARGETROLE_B__4_2_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5A48B0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A48F0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C__GET_ISTRAITTRACKED_B__13_0_OFFSET UNITYSDK_OFFSET(0x1D5A4900)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftItemData___c_TypeDefinitionIndex = 66076;

	class GridFightDraftItemData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70660);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsTraitTracked_b__13_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C__GET_ISTRAITTRACKED_B__13_0_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGachaPoolData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BASEGACHAGROUPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7E02D0)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC7E0310)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__ISFEATURECLOSED_B__6_0_OFFSET UNITYSDK_OFFSET(0xC7E03B0)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__ISVALID_B__5_0_OFFSET UNITYSDK_OFFSET(0xC7E0320)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaGroupData___c_TypeDefinitionIndex = 64308;

	class BaseGachaGroupData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A780);
		}

		static ::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A788);
		}

		static ::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5A790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsValid_b__5_0(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__ISVALID_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsFeatureClosed_b__6_0(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__ISFEATURECLOSED_B__6_0_OFFSET))(this, a1);
		}

	};
}

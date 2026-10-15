#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNodeDescription.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6A4E60)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A4EA0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE___C__GET_ISVALID_B__14_0_OFFSET UNITYSDK_OFFSET(0xC6A4EB0)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataNode___c_TypeDefinitionIndex = 73686;

	class AstraFXDataNode___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.AstraFX", "<>c")->GetStaticField(0x58010);
		}

		static ::System::Func_2<::RPG::Client::AstraFX::AstraFXDataNodeDescription, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::AstraFX::AstraFXDataNodeDescription, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.AstraFX", "<>c")->GetStaticField(0x58018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsValid_b__14_0(::RPG::Client::AstraFX::AstraFXDataNodeDescription a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AstraFX::AstraFXDataNodeDescription))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE___C__GET_ISVALID_B__14_0_OFFSET))(this, a1);
		}

	};
}

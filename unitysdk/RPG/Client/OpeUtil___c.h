#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_OPEUTIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD9F2300)
#define RPG_CLIENT_OPEUTIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD9F2340)
#define RPG_CLIENT_OPEUTIL___C__OPENGACHAHISTORYURL_B__55_0_OFFSET UNITYSDK_OFFSET(0xD9F2350)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil___c_TypeDefinitionIndex = 59309;

	class OpeUtil___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xC130);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xC138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C_CTOR_OFFSET))(this);
		}

		::System::String* _OpenGachaHistoryURL_b__55_0(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C__OPENGACHAHISTORYURL_B__55_0_OFFSET))(this, a1);
		}

	};
}

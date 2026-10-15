#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeGameProp; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define DDANMPNPJKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE257640)
#define DDANMPNPJKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE257680)
#define DDANMPNPJKG___C__ONEXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0xE257690)

inline static constexpr unsigned int DDANMPNPJKG___c_TypeDefinitionIndex = 65879;

	class DDANMPNPJKG___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::Client::MatchThreeGameProp*, ::System::UInt32, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_3<::RPG::Client::MatchThreeGameProp*, ::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FA20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FA28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDANMPNPJKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDANMPNPJKG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnExecute_b__2_0(::RPG::Client::MatchThreeGameProp* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*, ::System::UInt32))((::PBYTE)hIl2Cpp + DDANMPNPJKG___C__ONEXECUTE_B__2_0_OFFSET))(this, a1, a2);
		}

	};

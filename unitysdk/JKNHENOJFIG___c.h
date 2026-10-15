#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNPIPBLFJM;
class HBGNFKBHDJK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JKNHENOJFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2234C0)
#define JKNHENOJFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB223500)
#define JKNHENOJFIG___C___CALCULATETEAMSTANDINGS_B__52_0_OFFSET UNITYSDK_OFFSET(0xB223530)
#define JKNHENOJFIG___C___CALCULATETEAMSTANDINGS_B__52_1_OFFSET UNITYSDK_OFFSET(0xB223550)
#define JKNHENOJFIG___C___PREPAREAUTOEQUIPPEDNEWDRIVERTOAST_B__42_0_OFFSET UNITYSDK_OFFSET(0xB223510)

inline static constexpr unsigned int JKNHENOJFIG___c_TypeDefinitionIndex = 81709;

	class JKNHENOJFIG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::AFNPIPBLFJM*, ::System::UInt32>** StaticGet___9__52_1()
		{
			return (::System::Func_2<::AFNPIPBLFJM*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A620);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A628);
		}

		static ::System::Func_2<::HBGNFKBHDJK*, ::System::Boolean>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::HBGNFKBHDJK*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A630);
		}

		static ::System::Func_2<::AFNPIPBLFJM*, ::System::Int32>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::AFNPIPBLFJM*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKNHENOJFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __PrepareAutoEquippedNewDriverToast_b__42_0(::HBGNFKBHDJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBGNFKBHDJK*))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C___PREPAREAUTOEQUIPPEDNEWDRIVERTOAST_B__42_0_OFFSET))(this, a1);
		}

		::System::Int32 __CalculateTeamStandings_b__52_0(::AFNPIPBLFJM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::AFNPIPBLFJM*))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C___CALCULATETEAMSTANDINGS_B__52_0_OFFSET))(this, a1);
		}

		::System::UInt32 __CalculateTeamStandings_b__52_1(::AFNPIPBLFJM* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::AFNPIPBLFJM*))((::PBYTE)hIl2Cpp + JKNHENOJFIG___C___CALCULATETEAMSTANDINGS_B__52_1_OFFSET))(this, a1);
		}

	};

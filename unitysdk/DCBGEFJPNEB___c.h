#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEIPGFGBEMG;
class MMPNGLIMIHL;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DCBGEFJPNEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC3AB90)
#define DCBGEFJPNEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3ABD0)
#define DCBGEFJPNEB___C___ONPAUSEIMPLEMENT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1EC3AD00)
#define DCBGEFJPNEB___C___ONRESUMEIMPLEMENT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EC3AE20)
#define DCBGEFJPNEB___C___ONSTOPREQUESTED_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EC3ABE0)

inline static constexpr unsigned int DCBGEFJPNEB___c_TypeDefinitionIndex = 44198;

	class DCBGEFJPNEB___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::DEIPGFGBEMG*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::DEIPGFGBEMG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47510);
		}

		static ::System::Action_1<::MMPNGLIMIHL*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::MMPNGLIMIHL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47518);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47520);
		}

		static ::System::Action_1<::MMPNGLIMIHL*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::MMPNGLIMIHL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCBGEFJPNEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnStopRequested_b__4_0(::DEIPGFGBEMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEIPGFGBEMG*))((::PBYTE)hIl2Cpp + DCBGEFJPNEB___C___ONSTOPREQUESTED_B__4_0_OFFSET))(this, a1);
		}

		::System::Void __OnPauseImplement_b__6_0(::MMPNGLIMIHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMPNGLIMIHL*))((::PBYTE)hIl2Cpp + DCBGEFJPNEB___C___ONPAUSEIMPLEMENT_B__6_0_OFFSET))(this, a1);
		}

		::System::Void __OnResumeImplement_b__7_0(::MMPNGLIMIHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMPNGLIMIHL*))((::PBYTE)hIl2Cpp + DCBGEFJPNEB___C___ONRESUMEIMPLEMENT_B__7_0_OFFSET))(this, a1);
		}

	};

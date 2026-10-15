#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconItemViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PJDHMMEEBBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC27BB10)
#define PJDHMMEEBBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC27BB50)
#define PJDHMMEEBBC___C___SETICONLISTTARGETSTATEBYPARTCONFIG_B__40_0_OFFSET UNITYSDK_OFFSET(0xC27BB60)

inline static constexpr unsigned int PJDHMMEEBBC___c_TypeDefinitionIndex = 81986;

	class PJDHMMEEBBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD70);
		}

		static ::System::Func_2<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*, ::System::Boolean>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJDHMMEEBBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDHMMEEBBC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __SetIconListTargetStateByPartConfig_b__40_0(::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*))((::PBYTE)hIl2Cpp + PJDHMMEEBBC___C___SETICONLISTTARGETSTATEBYPARTCONFIG_B__40_0_OFFSET))(this, a1);
		}

	};

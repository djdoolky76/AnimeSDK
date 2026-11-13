#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KELFIEHALCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5E0B50)
#define KELFIEHALCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E0B90)
#define KELFIEHALCA___C___GETDEFAULTCHALLENGEGROUP_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B5E0BA0)

inline static constexpr unsigned int KELFIEHALCA___c_TypeDefinitionIndex = 54434;

	class KELFIEHALCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40260);
		}

		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KELFIEHALCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFIEHALCA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetDefaultChallengeGroup_b__7_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + KELFIEHALCA___C___GETDEFAULTCHALLENGEGROUP_B__7_0_OFFSET))(this, a1);
		}

	};

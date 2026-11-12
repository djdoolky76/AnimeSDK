#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEventScope.h"
#include "unitysdk/System/Object.h"

#define EJLHJFAKLHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16429D60)
#define EJLHJFAKLHH_JMFGJFOAJFG_OFFSET UNITYSDK_OFFSET(0x16429D90)

inline static constexpr unsigned int EJLHJFAKLHH_TypeDefinitionIndex = 57027;

	class EJLHJFAKLHH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::TurnBasedModifierEventScope>** StaticGet_NOAMHEEOGHP()
		{
			return (::Il2CppArray<::RPG::GameCore::TurnBasedModifierEventScope>**)UnitySDK::FromName("", "EJLHJFAKLHH")->GetStaticField(0x1D900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJLHJFAKLHH_CCTOR_OFFSET))();
		}

		static ::System::Void JMFGJFOAJFG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJLHJFAKLHH_JMFGJFOAJFG_OFFSET))();
		}

	};

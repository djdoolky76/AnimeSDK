#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
class AJCJGMDLCGK;

#define AJCJGMDLCGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CB2530)
#define AJCJGMDLCGK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB2520)
#define AJCJGMDLCGK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x12CB24E0)

inline static constexpr unsigned int AJCJGMDLCGK_TypeDefinitionIndex = 64350;

	class AJCJGMDLCGK : public ::RPG::Client::BaseGameFlow
	{
	public:
		static ::AJCJGMDLCGK** StaticGet_FMJPMFEDIJL()
		{
			return (::AJCJGMDLCGK**)UnitySDK::FromName("", "AJCJGMDLCGK")->GetStaticField(0x57150);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCJGMDLCGK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJCJGMDLCGK_CCTOR_OFFSET))();
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCJGMDLCGK_GET_TYPE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSystemResult.h"
#include "unitysdk/System/Object.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define HJKJHEJGBEK_ABPMPOIPPOD_OFFSET UNITYSDK_OFFSET(0x15D1F1E0)
#define HJKJHEJGBEK_CCEKCGNHDPN_OFFSET UNITYSDK_OFFSET(0x15D1F220)
#define HJKJHEJGBEK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D1F480)
#define HJKJHEJGBEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D1F1A0)
#define HJKJHEJGBEK_FJEJJPHFLAI_OFFSET UNITYSDK_OFFSET(0x15D1F2C0)
#define HJKJHEJGBEK_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x15D1F270)
#define HJKJHEJGBEK_MPPNFMBOKHL_OFFSET UNITYSDK_OFFSET(0x15D1F3D0)
#define HJKJHEJGBEK_OOCHJEEPBHL_OFFSET UNITYSDK_OFFSET(0x15D1F320)

inline static constexpr unsigned int HJKJHEJGBEK_TypeDefinitionIndex = 52261;

	class HJKJHEJGBEK : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x10
		::FOOIINCDBFA* PMLJACBLHCI; // 0x18
		::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x20
		::RPG::GameCore::TransformComponent* BFIGIFDJOIE; // 0x28
		::RPG::GameCore::AdvSystemResult GNOEGILFEMD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKJHEJGBEK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKJHEJGBEK_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AdvSystemResult ABPMPOIPPOD()
		{
			return ((::RPG::GameCore::AdvSystemResult(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKJHEJGBEK_ABPMPOIPPOD_OFFSET))(this);
		}

		::System::Void CCEKCGNHDPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKJHEJGBEK_CCEKCGNHDPN_OFFSET))(this);
		}

		::System::Void LPFBANCOMPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKJHEJGBEK_LPFBANCOMPE_OFFSET))(this);
		}

		::System::Void FJEJJPHFLAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJKJHEJGBEK_FJEJJPHFLAI_OFFSET))(this, a1);
		}

		::System::Void OOCHJEEPBHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKJHEJGBEK_OOCHJEEPBHL_OFFSET))(this);
		}

		::System::Void MPPNFMBOKHL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJKJHEJGBEK_MPPNFMBOKHL_OFFSET))(this, a1);
		}

	};

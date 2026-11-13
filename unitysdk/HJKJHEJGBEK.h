#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSystemResult.h"
#include "unitysdk/System/Object.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define HJKJHEJGBEK_ABPMPOIPPOD_OFFSET UNITYSDK_OFFSET(0x1821CBE0)
#define HJKJHEJGBEK_CCEKCGNHDPN_OFFSET UNITYSDK_OFFSET(0x1821CC20)
#define HJKJHEJGBEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1821CE80)
#define HJKJHEJGBEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1821CBA0)
#define HJKJHEJGBEK_FJEJJPHFLAI_OFFSET UNITYSDK_OFFSET(0x1821CCC0)
#define HJKJHEJGBEK_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x1821CC70)
#define HJKJHEJGBEK_MPPNFMBOKHL_OFFSET UNITYSDK_OFFSET(0x1821CDD0)
#define HJKJHEJGBEK_OOCHJEEPBHL_OFFSET UNITYSDK_OFFSET(0x1821CD20)

inline static constexpr unsigned int HJKJHEJGBEK_TypeDefinitionIndex = 53367;

	class HJKJHEJGBEK : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x10
		::RPG::GameCore::TransformComponent* BFIGIFDJOIE; // 0x18
		::FOOIINCDBFA* PMLJACBLHCI; // 0x20
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x28
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

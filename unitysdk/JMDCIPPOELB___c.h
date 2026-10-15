#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class EOPFDKJOBIO;
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JMDCIPPOELB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB262800)
#define JMDCIPPOELB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB262840)
#define JMDCIPPOELB___C__GETALLACTIVECOLLECTABLEUNSEENCARDS_B__7_0_OFFSET UNITYSDK_OFFSET(0xB262850)
#define JMDCIPPOELB___C___GETCASEBOARDMAINPAGEUPDATESIGNATURE_B__26_0_OFFSET UNITYSDK_OFFSET(0xB262870)

inline static constexpr unsigned int JMDCIPPOELB___c_TypeDefinitionIndex = 80736;

	class JMDCIPPOELB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::EOPFDKJOBIO*, ::RPG::GameCore::FateRinHouguOwnerType>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::EOPFDKJOBIO*, ::RPG::GameCore::FateRinHouguOwnerType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E220);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E228);
		}

		static ::System::Func_2<::RPG::Client::FateRin::CaseBoard::TeamViewModel*, ::System::UInt32>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::FateRin::CaseBoard::TeamViewModel*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMDCIPPOELB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMDCIPPOELB___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FateRinHouguOwnerType _GetAllActiveCollectableUnseenCards_b__7_0(::EOPFDKJOBIO* a1)
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID, ::EOPFDKJOBIO*))((::PBYTE)hIl2Cpp + JMDCIPPOELB___C__GETALLACTIVECOLLECTABLEUNSEENCARDS_B__7_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetCaseBoardMainPageUpdateSignature_b__26_0(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + JMDCIPPOELB___C___GETCASEBOARDMAINPAGEUPDATESIGNATURE_B__26_0_OFFSET))(this, a1);
		}

	};

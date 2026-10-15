#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/Object.h"
class PFBOPCJOKDO;
namespace RPG::GameCore { class CharacterSomatoCommonConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEGKIBHLMEF_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x15C50780)
#define HEGKIBHLMEF_HJAHNPCADNC_OFFSET UNITYSDK_OFFSET(0x15C50C50)
#define HEGKIBHLMEF_LMEAHGFFMIB_OFFSET UNITYSDK_OFFSET(0x15C50BA0)

	class HEGKIBHLMEF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterSomatoType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::PFBOPCJOKDO*>*>** StaticGet_OKOOADMMAFO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterSomatoType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::PFBOPCJOKDO*>*>**)UnitySDK::FromName("", "HEGKIBHLMEF")->GetStaticField(0xD780);
		}

		static ::RPG::GameCore::CharacterSomatoCommonConfig** StaticGet_KCDHNPFJLME()
		{
			return (::RPG::GameCore::CharacterSomatoCommonConfig**)UnitySDK::FromName("", "HEGKIBHLMEF")->GetStaticField(0xD788);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEGKIBHLMEF_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void LMEAHGFFMIB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEGKIBHLMEF_LMEAHGFFMIB_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* HJAHNPCADNC(::RPG::GameCore::CharacterSomatoType a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::RPG::GameCore::CharacterSomatoType, ::System::String*))((::PBYTE)hIl2Cpp + HEGKIBHLMEF_HJAHNPCADNC_OFFSET))(a1, a2);
		}

	};

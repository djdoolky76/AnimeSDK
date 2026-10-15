#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class OCIHGCKIEDF;
namespace RPG::Client { class IRogueTournDifficulty; }
namespace System { class String; }

#define OCIHGCKIEDF_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBD659E0)
#define OCIHGCKIEDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD65960)
#define OCIHGCKIEDF_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xBD65AC0)
#define OCIHGCKIEDF_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0xBD65BB0)
#define OCIHGCKIEDF_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xBD65B00)
#define OCIHGCKIEDF_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xBD65B40)
#define OCIHGCKIEDF_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0xBD65BF0)
#define OCIHGCKIEDF_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xBD65970)
#define OCIHGCKIEDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBD65A70)

inline static constexpr unsigned int OCIHGCKIEDF_TypeDefinitionIndex = 67590;

	class OCIHGCKIEDF : public ::System::Object
	{
	public:
		static ::OCIHGCKIEDF** StaticGet_FLMODBLFAGD()
		{
			return (::OCIHGCKIEDF**)UnitySDK::FromName("", "OCIHGCKIEDF")->GetStaticField(0x5C040);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIHGCKIEDF_CTOR_OFFSET))(this);
		}

		static ::OCIHGCKIEDF* GGBLHEHJBDO()
		{
			return ((::OCIHGCKIEDF*(*)())((::PBYTE)hIl2Cpp + OCIHGCKIEDF_GGBLHEHJBDO_OFFSET))();
		}

		::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + OCIHGCKIEDF_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIHGCKIEDF_TOSTRING_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDifficultyType get_Difficulty()
		{
			return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIHGCKIEDF_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIHGCKIEDF_GET_ISHARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_RomanNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIHGCKIEDF_GET_ROMANNUMBER_OFFSET))(this);
		}

		::System::Boolean get_HasSubLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIHGCKIEDF_GET_HASSUBLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SubLevelNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIHGCKIEDF_GET_SUBLEVELNUMBER_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class RogueTournDivisionDifficultyData; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEA1CB0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1CEA19D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA1960)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CEA18D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CEA1AF0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1CEA1B40)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0x1CEA1C30)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0x1CEA1B60)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0x1CEA1BA0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0x1CEA1C70)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1CEA1B50)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEA1A60)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0x1CEA1970)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionDifficultyData_TypeDefinitionIndex = 69533;

	class RogueTournDivisionDifficultyData : public ::System::Object
	{
	public:
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x10
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDivisionDifficultyData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDivisionDifficultyData*>**)UnitySDK::FromName("RPG.Client", "RogueTournDivisionDifficultyData")->GetStaticField(0x72920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournDivisionDifficultyData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournDivisionDifficultyData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournDivisionDifficultyData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournDivisionDifficultyData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_TOSTRING_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDifficultyType get_Difficulty()
		{
			return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_SET_DIVISIONLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_ISHARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_RomanNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET))(this);
		}

		::System::Boolean get_HasSubLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SubLevelNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xD29C480)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xD29D060)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xD29C890)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_RoleGrowupSummarizer_TypeDefinitionIndex = 65160;

	class GridFightTeam_RoleGrowupSummarizer : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _BeforeLevelByName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _Params; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _AfterLevelByName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
}

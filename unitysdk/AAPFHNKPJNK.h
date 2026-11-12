#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamAvatarMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamPathMemberData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define AAPFHNKPJNK_BFDNAIAJMDD_OFFSET UNITYSDK_OFFSET(0xB745FA0)
#define AAPFHNKPJNK_CLEAR_OFFSET UNITYSDK_OFFSET(0xB744670)
#define AAPFHNKPJNK_CTOR_OFFSET UNITYSDK_OFFSET(0xB746C00)
#define AAPFHNKPJNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7446B0)
#define AAPFHNKPJNK_DMAFCKFLLEJ_OFFSET UNITYSDK_OFFSET(0xB746570)
#define AAPFHNKPJNK_EJLOLMFGOGB_OFFSET UNITYSDK_OFFSET(0xB744720)
#define AAPFHNKPJNK_FEBECPHGDEE_OFFSET UNITYSDK_OFFSET(0xB745240)
#define AAPFHNKPJNK_IDCJFFCLMKE_OFFSET UNITYSDK_OFFSET(0xB745E00)
#define AAPFHNKPJNK_JKLLAFHLJEI_OFFSET UNITYSDK_OFFSET(0xB746930)
#define AAPFHNKPJNK_KLHOGCIONOF_OFFSET UNITYSDK_OFFSET(0xB744C50)
#define AAPFHNKPJNK_LJEKFKPJFEJ_OFFSET UNITYSDK_OFFSET(0xB746A10)
#define AAPFHNKPJNK_LMMEJOMMIMP_OFFSET UNITYSDK_OFFSET(0xB745830)

inline static constexpr unsigned int AAPFHNKPJNK_TypeDefinitionIndex = 69460;

	class AAPFHNKPJNK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_DISPOSE_OFFSET))(this);
		}

		::System::Int32 EJLOLMFGOGB(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_EJLOLMFGOGB_OFFSET))(this, a1);
		}

		::System::Int32 KLHOGCIONOF(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_KLHOGCIONOF_OFFSET))(this, a1);
		}

		::System::Int32 FEBECPHGDEE(::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_FEBECPHGDEE_OFFSET))(this, a1);
		}

		::System::Int32 LMMEJOMMIMP(::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_LMMEJOMMIMP_OFFSET))(this, a1);
		}

		::System::Int32 IDCJFFCLMKE(::RPG::Client::RogueTournBuildRefTeamData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_IDCJFFCLMKE_OFFSET))(this, a1);
		}

		::System::Int32 BFDNAIAJMDD(::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_BFDNAIAJMDD_OFFSET))(this, a1);
		}

		::System::Int32 DMAFCKFLLEJ(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_DMAFCKFLLEJ_OFFSET))(this, a1);
		}

		::System::Int32 JKLLAFHLJEI(::RPG::Client::RogueTournBuildRefTeamAvatarMemberData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamAvatarMemberData*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_JKLLAFHLJEI_OFFSET))(this, a1);
		}

		::System::Int32 LJEKFKPJFEJ(::RPG::Client::RogueTournBuildRefTeamPathMemberData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamPathMemberData*))((::PBYTE)hIl2Cpp + AAPFHNKPJNK_LJEKFKPJFEJ_OFFSET))(this, a1);
		}

	};

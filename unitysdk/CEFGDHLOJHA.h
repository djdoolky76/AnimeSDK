#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAFBNNALHDK;
class OOLJJHMLHBH;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CEFGDHLOJHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC785C80)
#define CEFGDHLOJHA_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0xC784170)
#define CEFGDHLOJHA_HLNMIFMNKPN_OFFSET UNITYSDK_OFFSET(0xC785A70)
#define CEFGDHLOJHA_JKCINKCFJOH_OFFSET UNITYSDK_OFFSET(0xC7849A0)
#define CEFGDHLOJHA_PFNDOIILPNL_OFFSET UNITYSDK_OFFSET(0xC7844E0)
#define CEFGDHLOJHA_PMKHFBJPEGN_OFFSET UNITYSDK_OFFSET(0xC784E60)

	class CEFGDHLOJHA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFGDHLOJHA_CTOR_OFFSET))(this);
		}

		::OOLJJHMLHBH* FNCNMCEOALF(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1)
		{
			return ((::OOLJJHMLHBH*(*)(::PVOID, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + CEFGDHLOJHA_FNCNMCEOALF_OFFSET))(this, a1);
		}

		::System::Void PFNDOIILPNL(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + CEFGDHLOJHA_PFNDOIILPNL_OFFSET))(this, a1, a2);
		}

		::System::Void JKCINKCFJOH(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + CEFGDHLOJHA_JKCINKCFJOH_OFFSET))(this, a1, a2);
		}

		::System::Void PMKHFBJPEGN(::Google::Protobuf::Collections::RepeatedField_1<::AAFBNNALHDK*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::AAFBNNALHDK*>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + CEFGDHLOJHA_PMKHFBJPEGN_OFFSET))(this, a1, a2);
		}

		::AAFBNNALHDK* HLNMIFMNKPN(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::AAFBNNALHDK*(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CEFGDHLOJHA_HLNMIFMNKPN_OFFSET))(this, a1);
		}

	};

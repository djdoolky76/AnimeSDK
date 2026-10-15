#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define PHODDAGHLFG_ALHMBNKFGFA_OFFSET UNITYSDK_OFFSET(0xC257B60)
#define PHODDAGHLFG_CLEAR_OFFSET UNITYSDK_OFFSET(0xC257700)
#define PHODDAGHLFG_CTOR_OFFSET UNITYSDK_OFFSET(0xC256A00)
#define PHODDAGHLFG_DAFOJFMJKCC_OFFSET UNITYSDK_OFFSET(0xC257D70)
#define PHODDAGHLFG_DCJMBDMJCPF_OFFSET UNITYSDK_OFFSET(0xC257AB0)
#define PHODDAGHLFG_DELMGOPPBGL_OFFSET UNITYSDK_OFFSET(0xC257DF0)
#define PHODDAGHLFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC257990)
#define PHODDAGHLFG_DJPBNIBONPC_OFFSET UNITYSDK_OFFSET(0xC257DB0)
#define PHODDAGHLFG_DOFIDIIEDLE_OFFSET UNITYSDK_OFFSET(0xC257E70)
#define PHODDAGHLFG_FKMKAIBPMLK_OFFSET UNITYSDK_OFFSET(0xC257E30)
#define PHODDAGHLFG_KACNFPJALPJ_OFFSET UNITYSDK_OFFSET(0xC257A00)
#define PHODDAGHLFG_MNGLAIGBENG_OFFSET UNITYSDK_OFFSET(0xC257C10)
#define PHODDAGHLFG_OKIFKFKAKNJ_OFFSET UNITYSDK_OFFSET(0xC257CC0)
#define PHODDAGHLFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC256DF0)

	class PHODDAGHLFG : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueFormulaData*>* MCCPANJOGJH; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamData*>* ABBHEIAHCKI; // 0x18
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueFormulaData*>* CILPDFCFFPB; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* FKGABOBPOGB; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* EHNDJEFPGDB; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* CBHKFBHONGN; // 0x38
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* HFDKPEFCDJP; // 0x40
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournHexData*>* AKFKIIJKNEI; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* HGPANPDJBGF; // 0x50
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournHexData*>* JNELDPOCPCJ; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_DISPOSE_OFFSET))(this);
		}

		::System::Void KACNFPJALPJ(::RPG::Client::RogueTournBuildRefTeamData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG_KACNFPJALPJ_OFFSET))(this, a1);
		}

		::System::Void DCJMBDMJCPF(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG_DCJMBDMJCPF_OFFSET))(this, a1);
		}

		::System::Void ALHMBNKFGFA(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG_ALHMBNKFGFA_OFFSET))(this, a1);
		}

		::System::Void MNGLAIGBENG(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG_MNGLAIGBENG_OFFSET))(this, a1);
		}

		::System::Void OKIFKFKAKNJ(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + PHODDAGHLFG_OKIFKFKAKNJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* DAFOJFMJKCC()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_DAFOJFMJKCC_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* DJPBNIBONPC()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_DJPBNIBONPC_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* DELMGOPPBGL()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_DELMGOPPBGL_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* FKMKAIBPMLK()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_FKMKAIBPMLK_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* DOFIDIIEDLE()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHODDAGHLFG_DOFIDIIEDLE_OFFSET))(this);
		}

	};

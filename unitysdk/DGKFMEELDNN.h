#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftChipMoldFilterTabType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class EEFEDNHNOJO;
class INFDNKHJDPP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGKFMEELDNN_ADD_HANDLEHINTUNAVAILABLE_OFFSET UNITYSDK_OFFSET(0xE84C7A0)
#define DGKFMEELDNN_ADD_ONCLOSEREQUESTED_OFFSET UNITYSDK_OFFSET(0xE84C6E0)
#define DGKFMEELDNN_ADD_ONITEMSCHANGED_OFFSET UNITYSDK_OFFSET(0xE84C560)
#define DGKFMEELDNN_ADD_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xE84C620)
#define DGKFMEELDNN_AIFAEGHCGKG_OFFSET UNITYSDK_OFFSET(0xE84C880)
#define DGKFMEELDNN_CTOR_OFFSET UNITYSDK_OFFSET(0xE84C860)
#define DGKFMEELDNN_DMHMAGCFCKO_OFFSET UNITYSDK_OFFSET(0xE84CE00)
#define DGKFMEELDNN_EHICOCENCBL_OFFSET UNITYSDK_OFFSET(0xE84C2F0)
#define DGKFMEELDNN_FHNIOLJHNEM_OFFSET UNITYSDK_OFFSET(0xE84C340)
#define DGKFMEELDNN_GNJFNMDHLDJ_OFFSET UNITYSDK_OFFSET(0xE84C4A0)
#define DGKFMEELDNN_IFNCGMDKJJL_OFFSET UNITYSDK_OFFSET(0xE84D5D0)
#define DGKFMEELDNN_JCEDCBKEANL_OFFSET UNITYSDK_OFFSET(0xE84D6B0)
#define DGKFMEELDNN_KKPONENCAMD_OFFSET UNITYSDK_OFFSET(0xE84D7A0)
#define DGKFMEELDNN_LELNEMIMMCD_OFFSET UNITYSDK_OFFSET(0xE84C390)
#define DGKFMEELDNN_LKANCLCMNMA_OFFSET UNITYSDK_OFFSET(0xE84CF30)
#define DGKFMEELDNN_NCHOOJNHDMC_OFFSET UNITYSDK_OFFSET(0xE84C3E0)
#define DGKFMEELDNN_PCDMFNKPNPN_OFFSET UNITYSDK_OFFSET(0xE84CEB0)
#define DGKFMEELDNN_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0xE84D650)
#define DGKFMEELDNN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE84CFE0)
#define DGKFMEELDNN_REMOVE_HANDLEHINTUNAVAILABLE_OFFSET UNITYSDK_OFFSET(0xE84C800)
#define DGKFMEELDNN_REMOVE_ONCLOSEREQUESTED_OFFSET UNITYSDK_OFFSET(0xE84C740)
#define DGKFMEELDNN_REMOVE_ONITEMSCHANGED_OFFSET UNITYSDK_OFFSET(0xE84C5C0)
#define DGKFMEELDNN_REMOVE_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xE84C680)

inline static constexpr unsigned int DGKFMEELDNN_TypeDefinitionIndex = 79523;

	class DGKFMEELDNN : public ::System::Object
	{
	public:
		::System::Action* HandleHintUnavailable; // 0x10
		::CEEGMMCFCBG* NLLHOBMNCDJ; // 0x18
		::INFDNKHJDPP* MDBCOONFKIL; // 0x20
		::System::Action* OnCloseRequested; // 0x28
		::System::Collections::Generic::List_1<::EEFEDNHNOJO*>* BNJOHILBFPI; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* NDEAFLKFPIG; // 0x38
		::System::Action* OnItemsChanged; // 0x40
		::System::Collections::Generic::List_1<::EEFEDNHNOJO*>* OJOOJMGKMKH; // 0x48
		::CEEGMMCFCBG* CODBDIOPHNJ; // 0x50
		::System::Action* OnTabChanged; // 0x58
		::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* KMPGGJLPBHL; // 0x60
		::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterTabType NJCKMKAGFLE; // 0x68
		::System::Void _ctor(::INFDNKHJDPP* a1, ::System::Collections::Generic::List_1<::EEFEDNHNOJO*>* a2, ::System::Collections::Generic::List_1<::EEFEDNHNOJO*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::INFDNKHJDPP*, ::System::Collections::Generic::List_1<::EEFEDNHNOJO*>*, ::System::Collections::Generic::List_1<::EEFEDNHNOJO*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EEFEDNHNOJO*>* EHICOCENCBL()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EEFEDNHNOJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_EHICOCENCBL_OFFSET))(this);
		}

		::System::Boolean FHNIOLJHNEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_FHNIOLJHNEM_OFFSET))(this);
		}

		::System::Boolean LELNEMIMMCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_LELNEMIMMCD_OFFSET))(this);
		}

		::CEEGMMCFCBG* NCHOOJNHDMC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_NCHOOJNHDMC_OFFSET))(this);
		}

		::CEEGMMCFCBG* GNJFNMDHLDJ()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_GNJFNMDHLDJ_OFFSET))(this);
		}

		::System::Void add_OnItemsChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_ADD_ONITEMSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnItemsChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_REMOVE_ONITEMSCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnTabChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_ADD_ONTABCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTabChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_REMOVE_ONTABCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnCloseRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_ADD_ONCLOSEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_OnCloseRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_REMOVE_ONCLOSEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_HandleHintUnavailable(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_ADD_HANDLEHINTUNAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintUnavailable(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_REMOVE_HANDLEHINTUNAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void AIFAEGHCGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_AIFAEGHCGKG_OFFSET))(this);
		}

		::System::Void DMHMAGCFCKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_DMHMAGCFCKO_OFFSET))(this);
		}

		::System::Void LKANCLCMNMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_LKANCLCMNMA_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void IFNCGMDKJJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_IFNCGMDKJJL_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Void JCEDCBKEANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKFMEELDNN_JCEDCBKEANL_OFFSET))(this);
		}

		::System::Void PCDMFNKPNPN(::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterTabType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftChipMoldFilterTabType))((::PBYTE)hIl2Cpp + DGKFMEELDNN_PCDMFNKPNPN_OFFSET))(this, a1);
		}

		::System::Void KKPONENCAMD(::EEFEDNHNOJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEFEDNHNOJO*))((::PBYTE)hIl2Cpp + DGKFMEELDNN_KKPONENCAMD_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client::Ui::Samples { class GridFightSettleTabViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }

#define MEDCLDPMDAA_ADD_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xB8B5E20)
#define MEDCLDPMDAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B5A00)
#define MEDCLDPMDAA_GET_ARCHIVETIMETEXT_OFFSET UNITYSDK_OFFSET(0xB8B5C50)
#define MEDCLDPMDAA_GET_FAVOURTEXT_OFFSET UNITYSDK_OFFSET(0xB8B5C90)
#define MEDCLDPMDAA_GET_ISFAVOUR_OFFSET UNITYSDK_OFFSET(0xB8B5C80)
#define MEDCLDPMDAA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB8B5C40)
#define MEDCLDPMDAA_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xB8B5C70)
#define MEDCLDPMDAA_GET_TABS_OFFSET UNITYSDK_OFFSET(0xB8B5C30)
#define MEDCLDPMDAA_GET_VERSIONTEXT_OFFSET UNITYSDK_OFFSET(0xB8B5C60)
#define MEDCLDPMDAA_MAFKACBNNIJ_OFFSET UNITYSDK_OFFSET(0xB8B5CA0)
#define MEDCLDPMDAA_NJHJMCAOCBC_OFFSET UNITYSDK_OFFSET(0xB8B5D60)
#define MEDCLDPMDAA_REMOVE_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xB8B5E80)
#define MEDCLDPMDAA__GET_ONEXITCOMMAND_B__27_0_OFFSET UNITYSDK_OFFSET(0xB8B6000)
#define MEDCLDPMDAA__GET_ONFAVOURCOMMAND_B__24_0_OFFSET UNITYSDK_OFFSET(0xB8B5EE0)

inline static constexpr unsigned int MEDCLDPMDAA_TypeDefinitionIndex = 73458;

	class MEDCLDPMDAA : public ::System::Object
	{
	public:
		::System::String* _VersionText_k__BackingField; // 0x10
		::Sofa::Core::SimpleCommand* GFFLPAOPOHA; // 0x18
		::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::GridFightSettleTabViewModel*>* _Tabs_k__BackingField; // 0x20
		::R3::Observable_1<::System::String*>* _FavourText_k__BackingField; // 0x28
		::R3::ReactiveProperty_1<::System::Int32>* _SelectedTabIndex_k__BackingField; // 0x30
		::System::String* _ArchiveTimeText_k__BackingField; // 0x38
		::R3::ReactiveProperty_1<::System::Boolean>* _IsFavour_k__BackingField; // 0x40
		::System::Action* ExitRequested; // 0x48
		::Sofa::Core::SimpleCommand* FKPDLPNELCO; // 0x50
		::System::Boolean _IsFinished_k__BackingField; // 0x58
		::System::Void _ctor(::System::Boolean a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::GridFightSettleTabViewModel*>* get_Tabs()
		{
			return ((::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::GridFightSettleTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_GET_TABS_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::String* get_ArchiveTimeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_GET_ARCHIVETIMETEXT_OFFSET))(this);
		}

		::System::String* get_VersionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_GET_VERSIONTEXT_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Int32>* get_SelectedTabIndex()
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_GET_SELECTEDTABINDEX_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsFavour()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_GET_ISFAVOUR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* get_FavourText()
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_GET_FAVOURTEXT_OFFSET))(this);
		}

		::CEEGMMCFCBG* MAFKACBNNIJ()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_MAFKACBNNIJ_OFFSET))(this);
		}

		::CEEGMMCFCBG* NJHJMCAOCBC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_NJHJMCAOCBC_OFFSET))(this);
		}

		::System::Void add_ExitRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_ADD_EXITREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_ExitRequested(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_REMOVE_EXITREQUESTED_OFFSET))(this, a1);
		}

		::System::Void _get_OnFavourCommand_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA__GET_ONFAVOURCOMMAND_B__24_0_OFFSET))(this);
		}

		::System::Void _get_OnExitCommand_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA__GET_ONEXITCOMMAND_B__27_0_OFFSET))(this);
		}

	};

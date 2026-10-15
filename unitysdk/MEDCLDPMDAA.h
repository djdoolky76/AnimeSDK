#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client::Ui::Samples { class GridFightSettleTabViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }

#define MEDCLDPMDAA_ADD_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xB8BBFB0)
#define MEDCLDPMDAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BBB90)
#define MEDCLDPMDAA_GET_ARCHIVETIMETEXT_OFFSET UNITYSDK_OFFSET(0xB8BBDE0)
#define MEDCLDPMDAA_GET_FAVOURTEXT_OFFSET UNITYSDK_OFFSET(0xB8BBE20)
#define MEDCLDPMDAA_GET_ISFAVOUR_OFFSET UNITYSDK_OFFSET(0xB8BBE10)
#define MEDCLDPMDAA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB8BBDD0)
#define MEDCLDPMDAA_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xB8BBE00)
#define MEDCLDPMDAA_GET_TABS_OFFSET UNITYSDK_OFFSET(0xB8BBDC0)
#define MEDCLDPMDAA_GET_VERSIONTEXT_OFFSET UNITYSDK_OFFSET(0xB8BBDF0)
#define MEDCLDPMDAA_MAFKACBNNIJ_OFFSET UNITYSDK_OFFSET(0xB8BBE30)
#define MEDCLDPMDAA_NJHJMCAOCBC_OFFSET UNITYSDK_OFFSET(0xB8BBEF0)
#define MEDCLDPMDAA_REMOVE_EXITREQUESTED_OFFSET UNITYSDK_OFFSET(0xB8BC010)
#define MEDCLDPMDAA__GET_ONEXITCOMMAND_B__27_0_OFFSET UNITYSDK_OFFSET(0xB8BC190)
#define MEDCLDPMDAA__GET_ONFAVOURCOMMAND_B__24_0_OFFSET UNITYSDK_OFFSET(0xB8BC070)

inline static constexpr unsigned int MEDCLDPMDAA_TypeDefinitionIndex = 73459;

	class MEDCLDPMDAA : public ::System::Object
	{
	public:
		::System::Action* ExitRequested; // 0x10
		::R3::ReactiveProperty_1<::System::Int32>* _SelectedTabIndex_k__BackingField; // 0x18
		::System::String* _VersionText_k__BackingField; // 0x20
		::Sofa::Core::SimpleCommand* GFFLPAOPOHA; // 0x28
		::R3::Observable* _FavourText_k__BackingField; // 0x30
		::Sofa::Core::SimpleCommand* FKPDLPNELCO; // 0x38
		::R3::ReactiveProperty_1<::System::Boolean>* _IsFavour_k__BackingField; // 0x40
		::System::String* _ArchiveTimeText_k__BackingField; // 0x48
		::ObservableCollections::ObservableList_1<::RPG::Client::Ui::Samples::GridFightSettleTabViewModel*>* _Tabs_k__BackingField; // 0x50
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

		::R3::Observable* get_FavourText()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA_GET_FAVOURTEXT_OFFSET))(this);
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

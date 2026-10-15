#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNBGMOIHOAN.h"
#include "unitysdk/System/Object.h"
class BFAFDCJCAEC;
class FGOLMOBLNCN;
class NAPGKEGIKGN;
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE7AA30)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE7A970)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GETDISPLAYPLANS_OFFSET UNITYSDK_OFFSET(0xDE7AF70)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_MAXPLANCOUNT_OFFSET UNITYSDK_OFFSET(0xDE7A950)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_PLANS_OFFSET UNITYSDK_OFFSET(0xDE7A960)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xDE7A930)
#define RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xDE7A940)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetSaveDialogViewModel_TypeDefinitionIndex = 66877;

	class RelicPresetSaveDialogViewModel : public ::System::Object
	{
	public:
		::NAPGKEGIKGN* _CalculatorService; // 0x10
		::RPG::Client::RelicPresetModel* _Model; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* _Plans_k__BackingField; // 0x20
		::FGOLMOBLNCN* _DataService; // 0x28
		::BFAFDCJCAEC* _NetworkService; // 0x30
		::System::Int32 _MaxPlanCount_k__BackingField; // 0x38
		::System::UInt32 _AvatarID; // 0x3C
		::HNBGMOIHOAN _SourceType_k__BackingField; // 0x40
		::System::Void _ctor(::System::UInt32 a1, ::HNBGMOIHOAN a2, ::RPG::Client::RelicPresetModel* a3, ::FGOLMOBLNCN* a4, ::BFAFDCJCAEC* a5, ::NAPGKEGIKGN* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::HNBGMOIHOAN, ::RPG::Client::RelicPresetModel*, ::FGOLMOBLNCN*, ::BFAFDCJCAEC*, ::NAPGKEGIKGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::HNBGMOIHOAN get_SourceType()
		{
			return ((::HNBGMOIHOAN(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::HNBGMOIHOAN a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBGMOIHOAN))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxPlanCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_MAXPLANCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* get_Plans()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GET_PLANS_OFFSET))(this);
		}

		::System::Void BuildPlanViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* GetDisplayPlans()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETSAVEDIALOGVIEWMODEL_GETDISPLAYPLANS_OFFSET))(this);
		}

	};
}

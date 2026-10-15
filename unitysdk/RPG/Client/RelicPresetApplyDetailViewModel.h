#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAFDCJCAEC;
class FGOLMOBLNCN;
class NAPGKEGIKGN;
namespace RPG::Client { class RelicPresetCustomSaveViewModel; }
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicPresetPlanViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE70970)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE708C0)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETCUSTOMSAVEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE70F70)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETNOTEMPTYPLANVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDE71090)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_MAXPLANCOUNT_OFFSET UNITYSDK_OFFSET(0xDE708A0)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_PLANS_OFFSET UNITYSDK_OFFSET(0xDE708B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetApplyDetailViewModel_TypeDefinitionIndex = 66855;

	class RelicPresetApplyDetailViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* _Plans_k__BackingField; // 0x10
		::FGOLMOBLNCN* _DataService; // 0x18
		::NAPGKEGIKGN* _CalculatorService; // 0x20
		::BFAFDCJCAEC* _NetworkService; // 0x28
		::RPG::Client::RelicPresetModel* _Model; // 0x30
		::System::UInt32 _AvatarID; // 0x38
		::System::Int32 _MaxPlanCount_k__BackingField; // 0x3C
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::RelicPresetModel* a2, ::FGOLMOBLNCN* a3, ::BFAFDCJCAEC* a4, ::NAPGKEGIKGN* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicPresetModel*, ::FGOLMOBLNCN*, ::BFAFDCJCAEC*, ::NAPGKEGIKGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_MaxPlanCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_MAXPLANCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* get_Plans()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GET_PLANS_OFFSET))(this);
		}

		::System::Void BuildPlanViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_BUILDPLANVIEWMODELS_OFFSET))(this);
		}

		::RPG::Client::RelicPresetCustomSaveViewModel* GetCustomSaveViewModel()
		{
			return ((::RPG::Client::RelicPresetCustomSaveViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETCUSTOMSAVEVIEWMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>* GetNotEmptyPlanViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicPresetPlanViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL_GETNOTEMPTYPLANVIEWMODELS_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class CIPCDNCKCGE;
class EEMOEKHIFNN;
class JGDCIMPJDNN;
class MAMLJFHHHBN;
class PEAFBFCPFCC;
class PFLDDDHEAJO;
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace RPG::Client::FateRin::HouguMap { class HouguMapFightViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E0CD360)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CD1E0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_CURRENTDAY_OFFSET UNITYSDK_OFFSET(0x1E0CDE50)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_CURRENTPASSNORMALFIGHTINDEX_OFFSET UNITYSDK_OFFSET(0x1E0CE040)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1E0CDDF0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_ISAFTERFIGHTPASS_OFFSET UNITYSDK_OFFSET(0x1E0CDFF0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_ISALLNORMALFIGHTSFINISHED_OFFSET UNITYSDK_OFFSET(0x1E0CDEA0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_PREFABINDEX_OFFSET UNITYSDK_OFFSET(0x1E0CDDA0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_SET_CURRENTPASSNORMALFIGHTINDEX_OFFSET UNITYSDK_OFFSET(0x1E0CE050)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL__BUILDFIGHTVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1E0CD770)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL__DOASYNCINITIALIZEAFTERFULLSYNC_OFFSET UNITYSDK_OFFSET(0x1E0CD5D0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL__SETCURRENTPASSFIGHTINDEX_OFFSET UNITYSDK_OFFSET(0x1E0CDB90)

namespace RPG::Client::FateRin::HouguMap
{
	inline static constexpr unsigned int FateRinHouguMapViewModel_TypeDefinitionIndex = 83544;

	class FateRinHouguMapViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::PFLDDDHEAJO* _MissionProgressService; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>* _FightModels; // 0x28
		::CIPCDNCKCGE* _Group; // 0x30
		::PEAFBFCPFCC* _RedDotService; // 0x38
		::EEMOEKHIFNN* _OverrideService; // 0x40
		::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* BossFight; // 0x48
		::JGDCIMPJDNN* _FullSyncService; // 0x50
		::MAMLJFHHHBN* _Service; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*>* NormalFights; // 0x60
		::System::Int32 _CurrentPassNormalFightIndex_k__BackingField; // 0x68
		::System::Void _ctor(::MAMLJFHHHBN* a1, ::EEMOEKHIFNN* a2, ::PFLDDDHEAJO* a3, ::PEAFBFCPFCC* a4, ::JGDCIMPJDNN* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MAMLJFHHHBN*, ::EEMOEKHIFNN*, ::PFLDDDHEAJO*, ::PEAFBFCPFCC*, ::JGDCIMPJDNN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _DoAsyncInitializeAfterFullSync(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL__DOASYNCINITIALIZEAFTERFULLSYNC_OFFSET))(this, a1);
		}

		::System::Void _BuildFightViewModels(::EEMOEKHIFNN* a1, ::PFLDDDHEAJO* a2, ::PEAFBFCPFCC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EEMOEKHIFNN*, ::PFLDDDHEAJO*, ::PEAFBFCPFCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL__BUILDFIGHTVIEWMODELS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetCurrentPassFightIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL__SETCURRENTPASSFIGHTINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrefabIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_PREFABINDEX_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_GROUPNAME_OFFSET))(this);
		}

		::System::UInt32 get_CurrentDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_CURRENTDAY_OFFSET))(this);
		}

		::System::Boolean get_IsAllNormalFightsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_ISALLNORMALFIGHTSFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsAfterFightPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_ISAFTERFIGHTPASS_OFFSET))(this);
		}

		::System::Int32 get_CurrentPassNormalFightIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_GET_CURRENTPASSNORMALFIGHTINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentPassNormalFightIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL_SET_CURRENTPASSNORMALFIGHTINDEX_OFFSET))(this, a1);
		}

	};
}

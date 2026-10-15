#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class GJEKKFJDCAJ;
class GKEEBJNJDMP;
class KFBPMGMFPLG;
namespace RPG::Client::LimaoNews { class LimaoNewsLimaoData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD3BEC70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEDESKS_OFFSET UNITYSDK_OFFSET(0xD3BE350)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEPOINTIDS_OFFSET UNITYSDK_OFFSET(0xD3BE400)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETSHOWLIMAODATAS_OFFSET UNITYSDK_OFFSET(0xD3BE4B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__GETEXCLUDELIMAOIDS_OFFSET UNITYSDK_OFFSET(0xD3BECC0)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsMainEntranceSceneViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::KFBPMGMFPLG* _EmployeeCheckService; // 0x20
		::GKEEBJNJDMP* _LimaoService; // 0x28
		::GJEKKFJDCAJ* _EventService; // 0x30
		::System::Void _ctor(::GKEEBJNJDMP* a1, ::GJEKKFJDCAJ* a2, ::KFBPMGMFPLG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GKEEBJNJDMP*, ::GJEKKFJDCAJ*, ::KFBPMGMFPLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::UInt32>* GetCurPhaseDesks()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEDESKS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetCurPhasePointIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEPOINTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsLimaoData*>* GetShowLimaoDatas(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsLimaoData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETSHOWLIMAODATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetExcludeLimaoIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__GETEXCLUDELIMAOIDS_OFFSET))(this);
		}

	};
}

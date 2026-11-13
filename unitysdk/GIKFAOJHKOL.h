#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGODMMLBALG;
namespace RPG::Client { class TeamBuildCalculator; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIKFAOJHKOL_BJAMFLGEBMI_OFFSET UNITYSDK_OFFSET(0x1A3E5BB0)
#define GIKFAOJHKOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E58C0)
#define GIKFAOJHKOL_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A3E5E10)
#define GIKFAOJHKOL_LBKCMJJFKOG_OFFSET UNITYSDK_OFFSET(0x1A3E5910)
#define GIKFAOJHKOL_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A3E5E20)

inline static constexpr unsigned int GIKFAOJHKOL_TypeDefinitionIndex = 63300;

	class GIKFAOJHKOL : public ::System::Object
	{
	public:
		::MGODMMLBALG* _PlayerReturnTrialAvatarInfoProvider_k__BackingField; // 0x10
		::RPG::Client::TeamBuildCalculator* BPDDDIBIIGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKFAOJHKOL_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>* LBKCMJJFKOG()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKFAOJHKOL_LBKCMJJFKOG_OFFSET))(this);
		}

		::System::Void BJAMFLGEBMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKFAOJHKOL_BJAMFLGEBMI_OFFSET))(this);
		}

		::MGODMMLBALG* get_PlayerReturnTrialAvatarInfoProvider()
		{
			return ((::MGODMMLBALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKFAOJHKOL_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this);
		}

		::System::Void set_PlayerReturnTrialAvatarInfoProvider(::MGODMMLBALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGODMMLBALG*))((::PBYTE)hIl2Cpp + GIKFAOJHKOL_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this, a1);
		}

	};

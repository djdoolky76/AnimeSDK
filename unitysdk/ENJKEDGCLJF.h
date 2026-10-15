#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGODMMLBALG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENJKEDGCLJF_CTOR_OFFSET UNITYSDK_OFFSET(0x155B0E00)
#define ENJKEDGCLJF_DGNILAMPKFC_OFFSET UNITYSDK_OFFSET(0x155B0FB0)
#define ENJKEDGCLJF_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x155B10B0)
#define ENJKEDGCLJF_HKLIPCELMBG_OFFSET UNITYSDK_OFFSET(0x155B1030)
#define ENJKEDGCLJF_KAJCGACCDIG_OFFSET UNITYSDK_OFFSET(0x155B0F50)
#define ENJKEDGCLJF_LLAPJFDEGNI_OFFSET UNITYSDK_OFFSET(0x155B0ED0)
#define ENJKEDGCLJF_ONBGNODKNPE_OFFSET UNITYSDK_OFFSET(0x155B0E10)
#define ENJKEDGCLJF_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x155B10C0)

	class ENJKEDGCLJF : public ::System::Object
	{
	public:
		::MGODMMLBALG* _PlayerReturnTrialAvatarInfoProvider_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJKEDGCLJF_CTOR_OFFSET))(this);
		}

		::System::Boolean ONBGNODKNPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJKEDGCLJF_ONBGNODKNPE_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* LLAPJFDEGNI(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENJKEDGCLJF_LLAPJFDEGNI_OFFSET))(this, a1);
		}

		::System::Boolean KAJCGACCDIG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENJKEDGCLJF_KAJCGACCDIG_OFFSET))(this, a1);
		}

		::System::Boolean DGNILAMPKFC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENJKEDGCLJF_DGNILAMPKFC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* HKLIPCELMBG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJKEDGCLJF_HKLIPCELMBG_OFFSET))(this);
		}

		::MGODMMLBALG* get_PlayerReturnTrialAvatarInfoProvider()
		{
			return ((::MGODMMLBALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJKEDGCLJF_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this);
		}

		::System::Void set_PlayerReturnTrialAvatarInfoProvider(::MGODMMLBALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGODMMLBALG*))((::PBYTE)hIl2Cpp + ENJKEDGCLJF_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNHGDGLICN;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOEHFJMCKLA_ACFOGLDEKHM_OFFSET UNITYSDK_OFFSET(0x1B4DB550)
#define JOEHFJMCKLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DAEE0)
#define JOEHFJMCKLA_ENJKFNCJBNG_OFFSET UNITYSDK_OFFSET(0x1B4DB4F0)
#define JOEHFJMCKLA_GET_TRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x1B4DB4E0)
#define JOEHFJMCKLA_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0x1B4DB760)

inline static constexpr unsigned int JOEHFJMCKLA_TypeDefinitionIndex = 84850;

	class JOEHFJMCKLA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* INDIHCIOMKL; // 0x10
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* ACCBLIEJOJN; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* _TrialAvatars_k__BackingField; // 0x20
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JOEHFJMCKLA_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* get_TrialAvatars()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHFJMCKLA_GET_TRIALAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* ENJKFNCJBNG()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHFJMCKLA_ENJKFNCJBNG_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* KHJNHDOJDDP(::KPNHGDGLICN* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::KPNHGDGLICN*))((::PBYTE)hIl2Cpp + JOEHFJMCKLA_KHJNHDOJDDP_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* ACFOGLDEKHM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + JOEHFJMCKLA_ACFOGLDEKHM_OFFSET))();
		}

	};

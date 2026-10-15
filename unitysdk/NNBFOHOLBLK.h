#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNBFOHOLBLK_AAOPALBOCFP_OFFSET UNITYSDK_OFFSET(0xBC9CB10)
#define NNBFOHOLBLK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9C1B0)
#define NNBFOHOLBLK_FMPFILLKOEB_OFFSET UNITYSDK_OFFSET(0xBC9C110)
#define NNBFOHOLBLK_GMHIGMNFMJN_OFFSET UNITYSDK_OFFSET(0xBC9C450)
#define NNBFOHOLBLK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBC9D040)
#define NNBFOHOLBLK_JNDBBMINPAP_OFFSET UNITYSDK_OFFSET(0xBC9D220)
#define NNBFOHOLBLK_LFGMGMGLOJB_OFFSET UNITYSDK_OFFSET(0xBC9D100)
#define NNBFOHOLBLK_NJBCCLHGFAO_1_OFFSET UNITYSDK_OFFSET(0xBC9C9A0)
#define NNBFOHOLBLK_NJBCCLHGFAO_OFFSET UNITYSDK_OFFSET(0xBC9C490)
#define NNBFOHOLBLK_NKFCADIMBMO_OFFSET UNITYSDK_OFFSET(0xBC9CC20)
#define NNBFOHOLBLK_OLBDJFNEAIG_OFFSET UNITYSDK_OFFSET(0xBC9C930)
#define NNBFOHOLBLK_PADBHFMDLJM_OFFSET UNITYSDK_OFFSET(0xBC9C320)
#define NNBFOHOLBLK_PJHKGEOENAE_OFFSET UNITYSDK_OFFSET(0xBC9CE10)
#define NNBFOHOLBLK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBC9CF80)

inline static constexpr unsigned int NNBFOHOLBLK_TypeDefinitionIndex = 73868;

	class NNBFOHOLBLK : public ::System::Object
	{
	public:
		::System::Action* LKNEOEMBBJK; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* GNHFIKJONPP; // 0x18
		::System::Action* MJEBPDLIIBA; // 0x20
		::System::Action* FCEAGLICLON; // 0x28
		::RPG::GameCore::TransformComponent* NELGDHJKAJJ; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32>* MDPOCEDAMML; // 0x38
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x40
		::LJFHKAJPFNE* NFPCBMCGFDD; // 0x48
		::System::Int32 GMDBHJKEAEI; // 0x50
		::UnityEngine::Vector3 PCKJOPIOIEJ; // 0x54
		::UnityEngine::Vector3 IJFJJHMMNMA; // 0x60
		::System::Void _ctor(::LJFHKAJPFNE* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 FMPFILLKOEB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_FMPFILLKOEB_OFFSET))(this);
		}

		::System::Void PADBHFMDLJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_PADBHFMDLJM_OFFSET))(this);
		}

		::System::Void GMHIGMNFMJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_GMHIGMNFMJN_OFFSET))(this);
		}

		::System::Void NJBCCLHGFAO(::System::Collections::Generic::IList_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_NJBCCLHGFAO_OFFSET))(this, a1);
		}

		::System::Void NJBCCLHGFAO_1(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_NJBCCLHGFAO_1_OFFSET))(this, a1);
		}

		::System::Void AAOPALBOCFP(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_AAOPALBOCFP_OFFSET))(this, a1);
		}

		::System::Boolean OLBDJFNEAIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_OLBDJFNEAIG_OFFSET))(this);
		}

		::System::Void NKFCADIMBMO(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_NKFCADIMBMO_OFFSET))(this, a1);
		}

		::System::Void PJHKGEOENAE(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_PJHKGEOENAE_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void LFGMGMGLOJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_LFGMGMGLOJB_OFFSET))(this);
		}

		::System::Boolean JNDBBMINPAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_JNDBBMINPAP_OFFSET))(this);
		}

	};

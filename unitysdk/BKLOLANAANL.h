#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define BKLOLANAANL_ADD_ONFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xBA5D9B0)
#define BKLOLANAANL_CCPNKOLHEMB_OFFSET UNITYSDK_OFFSET(0xBA5D970)
#define BKLOLANAANL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA5E2C0)
#define BKLOLANAANL_DBCBCHGOMHN_OFFSET UNITYSDK_OFFSET(0xBA5D930)
#define BKLOLANAANL_KKDNFAAEPHB_OFFSET UNITYSDK_OFFSET(0xBA5DAF0)
#define BKLOLANAANL_MAOIKJOFHGM_OFFSET UNITYSDK_OFFSET(0xBA5DA70)
#define BKLOLANAANL_MIOFIFDAPDI_OFFSET UNITYSDK_OFFSET(0xBA5DFD0)
#define BKLOLANAANL_ONKHEGPAMNB_OFFSET UNITYSDK_OFFSET(0xBA5DB60)
#define BKLOLANAANL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBA5DEC0)
#define BKLOLANAANL_REMOVE_ONFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xBA5DA10)

inline static constexpr unsigned int BKLOLANAANL_TypeDefinitionIndex = 79528;

	class BKLOLANAANL : public ::System::Object
	{
	public:
		::System::Action* OnFilterChanged; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* NDEAFLKFPIG; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* KMPGGJLPBHL; // 0x20
		::System::Nullable_1<::System::Int32> GJEJCNFGBEH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLOLANAANL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* DBCBCHGOMHN()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLOLANAANL_DBCBCHGOMHN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* CCPNKOLHEMB()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLOLANAANL_CCPNKOLHEMB_OFFSET))(this);
		}

		::System::Void add_OnFilterChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BKLOLANAANL_ADD_ONFILTERCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFilterChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BKLOLANAANL_REMOVE_ONFILTERCHANGED_OFFSET))(this, a1);
		}

		::System::Void MAOIKJOFHGM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKLOLANAANL_MAOIKJOFHGM_OFFSET))(this, a1);
		}

		::System::Void KKDNFAAEPHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLOLANAANL_KKDNFAAEPHB_OFFSET))(this);
		}

		::System::Void ONKHEGPAMNB(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + BKLOLANAANL_ONKHEGPAMNB_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLOLANAANL_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean MIOFIFDAPDI(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + BKLOLANAANL_MIOFIFDAPDI_OFFSET))(this, a1);
		}

	};

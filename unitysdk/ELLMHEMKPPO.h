#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class FJOADPKDFLC;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ELLMHEMKPPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C521BE0)
#define ELLMHEMKPPO_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C521BD0)
#define ELLMHEMKPPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C510BF0)
#define ELLMHEMKPPO_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1C521CA0)
#define ELLMHEMKPPO_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x1C510CC0)
#define ELLMHEMKPPO_LCJMKJPECAP_2_OFFSET UNITYSDK_OFFSET(0x1C521D30)
#define ELLMHEMKPPO_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1C510E90)
#define ELLMHEMKPPO_NEIEJIMGOMG_1_OFFSET UNITYSDK_OFFSET(0x1C521FE0)
#define ELLMHEMKPPO_NEIEJIMGOMG_OFFSET UNITYSDK_OFFSET(0x1C521E00)
#define ELLMHEMKPPO_OBHHNAKALGL_OFFSET UNITYSDK_OFFSET(0x1C521CF0)
#define ELLMHEMKPPO__CONTAINS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C522570)

inline static constexpr unsigned int ELLMHEMKPPO_TypeDefinitionIndex = 41743;

	class ELLMHEMKPPO : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* OCBNPJLLDIH; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_CTOR_2_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* OBHHNAKALGL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_OBHHNAKALGL_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::FJOADPKDFLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJOADPKDFLC*))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_2(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_LCJMKJPECAP_2_OFFSET))(this, a1);
		}

		::FJOADPKDFLC* NEIEJIMGOMG(::FJOADPKDFLC* a1)
		{
			return ((::FJOADPKDFLC*(*)(::PVOID, ::FJOADPKDFLC*))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_NEIEJIMGOMG_OFFSET))(this, a1);
		}

		::FJOADPKDFLC* NEIEJIMGOMG_1(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a1)
		{
			return ((::FJOADPKDFLC*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + ELLMHEMKPPO_NEIEJIMGOMG_1_OFFSET))(this, a1);
		}

		::System::Boolean _Contains_b__9_0(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + ELLMHEMKPPO__CONTAINS_B__9_0_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class FJOADPKDFLC;
class GJBMIABGPFP;
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ALDMDBEKHPL_BMBJBBJBAHF_OFFSET UNITYSDK_OFFSET(0x1C53E540)
#define ALDMDBEKHPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53EC50)
#define ALDMDBEKHPL_GET_TRAITMINCHIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C53EC30)
#define ALDMDBEKHPL_HJNELDDMENH_OFFSET UNITYSDK_OFFSET(0x1C53EC60)
#define ALDMDBEKHPL_SET_TRAITMINCHIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C53EC40)

inline static constexpr unsigned int ALDMDBEKHPL_TypeDefinitionIndex = 41739;

	class ALDMDBEKHPL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* NPBLFACBADF; // 0x10
		::System::Int32 _TraitMinChipCount_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::IComparer_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + ALDMDBEKHPL_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_TraitMinChipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDMDBEKHPL_GET_TRAITMINCHIPCOUNT_OFFSET))(this);
		}

		::System::Void set_TraitMinChipCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALDMDBEKHPL_SET_TRAITMINCHIPCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* HJNELDDMENH(::GJBMIABGPFP* a1, ::FJOADPKDFLC* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::PVOID, ::GJBMIABGPFP*, ::FJOADPKDFLC*))((::PBYTE)hIl2Cpp + ALDMDBEKHPL_HJNELDDMENH_OFFSET))(this, a1, a2);
		}

		::System::Boolean BMBJBBJBAHF(::GJBMIABGPFP* a1, ::FJOADPKDFLC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJBMIABGPFP*, ::FJOADPKDFLC*))((::PBYTE)hIl2Cpp + ALDMDBEKHPL_BMBJBBJBAHF_OFFSET))(this, a1, a2);
		}

	};

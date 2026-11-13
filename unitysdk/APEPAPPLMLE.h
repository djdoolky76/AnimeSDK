#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define APEPAPPLMLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E775290)
#define APEPAPPLMLE_FHBNMMOFJFM_OFFSET UNITYSDK_OFFSET(0x1E774F80)
#define APEPAPPLMLE_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E774DD0)
#define APEPAPPLMLE_JBPDFOGDFFK_OFFSET UNITYSDK_OFFSET(0x1E774FC0)
#define APEPAPPLMLE_OBHHNAKALGL_OFFSET UNITYSDK_OFFSET(0x1E775000)

inline static constexpr unsigned int APEPAPPLMLE_TypeDefinitionIndex = 42623;

	class APEPAPPLMLE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APEPAPPLMLE_CTOR_OFFSET))(this);
		}

		static ::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + APEPAPPLMLE_HIDEJDELEEB_OFFSET))();
		}

		static ::RPG::Client::MechCraft::MechCraftChipTraitType FHBNMMOFJFM()
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)())((::PBYTE)hIl2Cpp + APEPAPPLMLE_FHBNMMOFJFM_OFFSET))();
		}

		static ::RPG::Client::MechCraft::MechCraftChipTraitType JBPDFOGDFFK()
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)())((::PBYTE)hIl2Cpp + APEPAPPLMLE_JBPDFOGDFFK_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* OBHHNAKALGL(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + APEPAPPLMLE_OBHHNAKALGL_OFFSET))(a1);
		}

	};

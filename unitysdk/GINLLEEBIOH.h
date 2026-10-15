#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKEJBHFMHCB.h"
#include "unitysdk/System/Nullable_1.h"
class GDAACOIKPFC;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GINLLEEBIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A474C0)
#define GINLLEEBIOH_LLOMGNOIIBF_OFFSET UNITYSDK_OFFSET(0x15A473C0)
#define GINLLEEBIOH_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0x15A47400)

inline static constexpr unsigned int GINLLEEBIOH_TypeDefinitionIndex = 78353;

	class GINLLEEBIOH : public ::PKEJBHFMHCB
	{
	public:
		::GDAACOIKPFC* HCABGOKDFJB; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* OEKDLELNKPP; // 0x30
		::System::Nullable_1<::System::Int32> HPGPKEPIBBP; // 0x38
		::System::Nullable_1<::System::Int32> OHBJMAGBEEF; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GINLLEEBIOH_CTOR_OFFSET))(this);
		}

		static ::System::String* LLOMGNOIIBF()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + GINLLEEBIOH_LLOMGNOIIBF_OFFSET))();
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + GINLLEEBIOH_NODPBIKOJCF_OFFSET))(this, a1);
		}

	};

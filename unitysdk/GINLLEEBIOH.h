#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKEJBHFMHCB.h"
#include "unitysdk/System/Nullable_1.h"
class GDAACOIKPFC;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GINLLEEBIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x169826F0)
#define GINLLEEBIOH_LLOMGNOIIBF_OFFSET UNITYSDK_OFFSET(0x169825F0)
#define GINLLEEBIOH_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0x16982630)

inline static constexpr unsigned int GINLLEEBIOH_TypeDefinitionIndex = 81088;

	class GINLLEEBIOH : public ::PKEJBHFMHCB
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* OEKDLELNKPP; // 0x28
		::GDAACOIKPFC* HCABGOKDFJB; // 0x30
		::System::Nullable_1<::System::Int32> OHBJMAGBEEF; // 0x38
		::System::Nullable_1<::System::Int32> HPGPKEPIBBP; // 0x40
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

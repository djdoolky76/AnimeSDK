#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFOEBJMEFKG_BCEIMHGKKCC.h"
class CHGHIALKMFM;
namespace System { template <typename T> class Predicate_1; }

#define IFOEBJMEFKG_LBLPGFHMIIF_CTOR_OFFSET UNITYSDK_OFFSET(0x15F22D20)
#define IFOEBJMEFKG_LBLPGFHMIIF_GET_MATCHES_OFFSET UNITYSDK_OFFSET(0x15F245E0)
#define IFOEBJMEFKG_LBLPGFHMIIF_GET_MOLD_OFFSET UNITYSDK_OFFSET(0x15F245C0)
#define IFOEBJMEFKG_LBLPGFHMIIF_SET_MATCHES_OFFSET UNITYSDK_OFFSET(0x15F245F0)
#define IFOEBJMEFKG_LBLPGFHMIIF_SET_MOLD_OFFSET UNITYSDK_OFFSET(0x15F245D0)

inline static constexpr unsigned int IFOEBJMEFKG_LBLPGFHMIIF_TypeDefinitionIndex = 79441;

	class IFOEBJMEFKG_LBLPGFHMIIF : public ::IFOEBJMEFKG_BCEIMHGKKCC
	{
	public:
		::System::Predicate_1<::CHGHIALKMFM*>* _Matches_k__BackingField; // 0x18
		::CHGHIALKMFM* _Mold_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_LBLPGFHMIIF_CTOR_OFFSET))(this);
		}

		::CHGHIALKMFM* get_Mold()
		{
			return ((::CHGHIALKMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_LBLPGFHMIIF_GET_MOLD_OFFSET))(this);
		}

		::System::Void set_Mold(::CHGHIALKMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_LBLPGFHMIIF_SET_MOLD_OFFSET))(this, a1);
		}

		::System::Predicate_1<::CHGHIALKMFM*>* get_Matches()
		{
			return ((::System::Predicate_1<::CHGHIALKMFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_LBLPGFHMIIF_GET_MATCHES_OFFSET))(this);
		}

		::System::Void set_Matches(::System::Predicate_1<::CHGHIALKMFM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::CHGHIALKMFM*>*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_LBLPGFHMIIF_SET_MATCHES_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFOEBJMEFKG_BCEIMHGKKCC.h"
class CHGHIALKMFM;
namespace System { template <typename T> class Predicate_1; }

#define IFOEBJMEFKG_LBLPGFHMIIF_CTOR_OFFSET UNITYSDK_OFFSET(0x15F2EBE0)
#define IFOEBJMEFKG_LBLPGFHMIIF_GET_MATCHES_OFFSET UNITYSDK_OFFSET(0x15F30490)
#define IFOEBJMEFKG_LBLPGFHMIIF_GET_MOLD_OFFSET UNITYSDK_OFFSET(0x15F30470)
#define IFOEBJMEFKG_LBLPGFHMIIF_SET_MATCHES_OFFSET UNITYSDK_OFFSET(0x15F304A0)
#define IFOEBJMEFKG_LBLPGFHMIIF_SET_MOLD_OFFSET UNITYSDK_OFFSET(0x15F30480)

	class IFOEBJMEFKG_LBLPGFHMIIF : public ::IFOEBJMEFKG_BCEIMHGKKCC
	{
	public:
		::CHGHIALKMFM* _Mold_k__BackingField; // 0x18
		::System::Predicate_1<::CHGHIALKMFM*>* _Matches_k__BackingField; // 0x20
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

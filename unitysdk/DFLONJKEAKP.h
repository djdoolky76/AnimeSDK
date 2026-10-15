#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKIOIPNACGF;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DFLONJKEAKP_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xE832AC0)
#define DFLONJKEAKP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xE832860)
#define DFLONJKEAKP_CTOR_OFFSET UNITYSDK_OFFSET(0xE833120)
#define DFLONJKEAKP_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xE832A20)
#define DFLONJKEAKP_FGJFCJPJEEA_OFFSET UNITYSDK_OFFSET(0xE832B50)
#define DFLONJKEAKP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE832BE0)
#define DFLONJKEAKP_OOBADKHILIH_OFFSET UNITYSDK_OFFSET(0xE832F80)
#define DFLONJKEAKP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE832DB0)

	class DFLONJKEAKP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLONJKEAKP_CTOR_OFFSET))(this);
		}

		::System::Double ACMKLFOMPFC(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DFLONJKEAKP_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::String* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + DFLONJKEAKP_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		::System::Void AALCFBOGFKP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DFLONJKEAKP_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void FGJFCJPJEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLONJKEAKP_FGJFCJPJEEA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLONJKEAKP_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLONJKEAKP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::BKIOIPNACGF* OOBADKHILIH()
		{
			return ((::BKIOIPNACGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLONJKEAKP_OOBADKHILIH_OFFSET))(this);
		}

	};

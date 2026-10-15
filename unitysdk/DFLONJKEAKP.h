#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class BKIOIPNACGF;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DFLONJKEAKP_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xE827D40)
#define DFLONJKEAKP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xE827AE0)
#define DFLONJKEAKP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8283A0)
#define DFLONJKEAKP_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xE827CA0)
#define DFLONJKEAKP_FGJFCJPJEEA_OFFSET UNITYSDK_OFFSET(0xE827DD0)
#define DFLONJKEAKP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE827E60)
#define DFLONJKEAKP_OOBADKHILIH_OFFSET UNITYSDK_OFFSET(0xE828200)
#define DFLONJKEAKP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE828030)

inline static constexpr unsigned int DFLONJKEAKP_TypeDefinitionIndex = 67188;

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

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLONJKEAKP_GETENUMERATOR_OFFSET))(this);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class BKIOIPNACGF;
class IGACELAIJCM;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JMGJOIMJEBF_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB25E0C0)
#define JMGJOIMJEBF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB25DEE0)
#define JMGJOIMJEBF_CTOR_OFFSET UNITYSDK_OFFSET(0xB25DE90)
#define JMGJOIMJEBF_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB25E020)
#define JMGJOIMJEBF_FGJFCJPJEEA_OFFSET UNITYSDK_OFFSET(0xB25E150)
#define JMGJOIMJEBF_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB25E1E0)
#define JMGJOIMJEBF_OOBADKHILIH_OFFSET UNITYSDK_OFFSET(0xB25E4A0)
#define JMGJOIMJEBF_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB25E340)

inline static constexpr unsigned int JMGJOIMJEBF_TypeDefinitionIndex = 67186;

	class JMGJOIMJEBF : public ::System::Object
	{
	public:
		::IGACELAIJCM* BPKKKMOCFIP; // 0x10
		::System::Void _ctor(::IGACELAIJCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGACELAIJCM*))((::PBYTE)hIl2Cpp + JMGJOIMJEBF_CTOR_OFFSET))(this, a1);
		}

		::System::Double ACMKLFOMPFC(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JMGJOIMJEBF_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::String* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + JMGJOIMJEBF_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		::System::Void AALCFBOGFKP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JMGJOIMJEBF_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void FGJFCJPJEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGJOIMJEBF_FGJFCJPJEEA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGJOIMJEBF_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGJOIMJEBF_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::BKIOIPNACGF* OOBADKHILIH()
		{
			return ((::BKIOIPNACGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGJOIMJEBF_OOBADKHILIH_OFFSET))(this);
		}

	};

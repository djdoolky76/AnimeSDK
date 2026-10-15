#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJHBKDIANM;
class JMGJOIMJEBF;
class PLMJFBPGLAK;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PLMJFBPGLAK_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xC30BEF0)
#define PLMJFBPGLAK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xC30BD20)
#define PLMJFBPGLAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC30C710)
#define PLMJFBPGLAK_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xC30BE10)
#define PLMJFBPGLAK_FGJFCJPJEEA_OFFSET UNITYSDK_OFFSET(0xC30BFB0)
#define PLMJFBPGLAK_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC30C040)
#define PLMJFBPGLAK_NPJNDKIPKPG_OFFSET UNITYSDK_OFFSET(0xC30C1A0)
#define PLMJFBPGLAK_POBEEPFKJLF_OFFSET UNITYSDK_OFFSET(0xC30C200)
#define PLMJFBPGLAK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC30C0F0)

	class PLMJFBPGLAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* GFOPFBIHFFE; // 0x10
		::JMGJOIMJEBF* LOJPHCKIJMF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_CTOR_OFFSET))(this);
		}

		::System::Double ACMKLFOMPFC(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::String* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		::System::Void AALCFBOGFKP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void FGJFCJPJEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_FGJFCJPJEEA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::DCJHBKDIANM* NPJNDKIPKPG()
		{
			return ((::DCJHBKDIANM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_NPJNDKIPKPG_OFFSET))(this);
		}

		::System::Void POBEEPFKJLF(::PLMJFBPGLAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMJFBPGLAK*))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_POBEEPFKJLF_OFFSET))(this, a1);
		}

	};

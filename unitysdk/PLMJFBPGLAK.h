#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class DCJHBKDIANM;
class JMGJOIMJEBF;
class PLMJFBPGLAK;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PLMJFBPGLAK_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xC3044F0)
#define PLMJFBPGLAK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xC304320)
#define PLMJFBPGLAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC304D10)
#define PLMJFBPGLAK_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xC304410)
#define PLMJFBPGLAK_FGJFCJPJEEA_OFFSET UNITYSDK_OFFSET(0xC3045B0)
#define PLMJFBPGLAK_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC304640)
#define PLMJFBPGLAK_NPJNDKIPKPG_OFFSET UNITYSDK_OFFSET(0xC3047A0)
#define PLMJFBPGLAK_POBEEPFKJLF_OFFSET UNITYSDK_OFFSET(0xC304800)
#define PLMJFBPGLAK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC3046F0)

inline static constexpr unsigned int PLMJFBPGLAK_TypeDefinitionIndex = 67171;

	class PLMJFBPGLAK : public ::System::Object
	{
	public:
		::JMGJOIMJEBF* LOJPHCKIJMF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* GFOPFBIHFFE; // 0x18
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

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Double>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMJFBPGLAK_GETENUMERATOR_OFFSET))(this);
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

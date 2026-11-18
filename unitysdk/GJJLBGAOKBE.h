#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPPNBIBAMOC_1.h"
#include "unitysdk/System/Object.h"

class ALCEJNMFHOK;
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GJJLBGAOKBE_ADD_OFFSET UNITYSDK_OFFSET(0x1FA99F60)
#define GJJLBGAOKBE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FA9A0E0)
#define GJJLBGAOKBE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1FA9A1C0)
#define GJJLBGAOKBE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1FA9A8C0)
#define GJJLBGAOKBE_EOAIOCIBFIM_OFFSET UNITYSDK_OFFSET(0x1FA9AA10)
#define GJJLBGAOKBE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1FA9A5B0)
#define GJJLBGAOKBE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1FA99E70)
#define GJJLBGAOKBE_HHNHFIAIDHO_OFFSET UNITYSDK_OFFSET(0x1FA9A910)
#define GJJLBGAOKBE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1FA9A740)
#define GJJLBGAOKBE_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET UNITYSDK_OFFSET(0x1FA9A330)
#define GJJLBGAOKBE_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1FA99F50)
#define GJJLBGAOKBE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1FA9A8B0)
#define GJJLBGAOKBE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA99C70)
#define GJJLBGAOKBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA99BE0)

inline static constexpr unsigned int GJJLBGAOKBE_TypeDefinitionIndex = 18190;

class GJJLBGAOKBE : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::KPPNBIBAMOC_1<::System::Type*>, ::ALCEJNMFHOK*>* FIIPNEEGNIA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLBGAOKBE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IDictionary_2<::KPPNBIBAMOC_1<::System::Type*>, ::ALCEJNMFHOK*>* GCAOGFBGMMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::KPPNBIBAMOC_1<::System::Type*>, ::ALCEJNMFHOK*>*))((::PBYTE)hIl2Cpp + GJJLBGAOKBE__CTOR_1_OFFSET))(this, GCAOGFBGMMH);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_GET_COUNT_OFFSET))(this);
	}

	::System::Boolean System_Collections_Generic_ICollection_Google_Protobuf_Extension__get_IsReadOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__GET_ISREADONLY_OFFSET))(this);
	}

	::System::Void Add(::ALCEJNMFHOK* CIEOCEADIJB)
	{
		return ((::System::Void(*)(::PVOID, ::ALCEJNMFHOK*))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_ADD_OFFSET))(this, CIEOCEADIJB);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_CLEAR_OFFSET))(this);
	}

	::System::Boolean Contains(::ALCEJNMFHOK* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::ALCEJNMFHOK*))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_CONTAINS_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void System_Collections_Generic_ICollection_Google_Protobuf_Extension__CopyTo(::Il2CppArray<::ALCEJNMFHOK*>* GMHJGPODKLM, ::System::Int32 HOJDLOHINNG)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ALCEJNMFHOK*>*, ::System::Int32))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_GOOGLE_PROTOBUF_EXTENSION__COPYTO_OFFSET))(this, GMHJGPODKLM, HOJDLOHINNG);
	}

	::System::Collections::Generic::IEnumerator_1<::ALCEJNMFHOK*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::ALCEJNMFHOK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Boolean Remove(::ALCEJNMFHOK* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::ALCEJNMFHOK*))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_REMOVE_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::GJJLBGAOKBE* DGNAAPGKIPL()
	{
		return ((::GJJLBGAOKBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Boolean HHNHFIAIDHO(::System::UInt32 KPFOKCLJPCI, ::System::Type* HODAIDNDKHD, ::ALCEJNMFHOK*& CIEOCEADIJB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Type*, ::ALCEJNMFHOK*&))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_HHNHFIAIDHO_OFFSET))(this, KPFOKCLJPCI, HODAIDNDKHD, CIEOCEADIJB);
	}

	::System::Void EOAIOCIBFIM(::System::Collections::Generic::IEnumerable_1<::ALCEJNMFHOK*>* FIIPNEEGNIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::ALCEJNMFHOK*>*))((::PBYTE)hIl2Cpp + GJJLBGAOKBE_EOAIOCIBFIM_OFFSET))(this, FIIPNEEGNIA);
	}
};

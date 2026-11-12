#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJCNKJHNEA;
class CJOJDEPDCBK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAIHKPJPMCE_CTOR_OFFSET UNITYSDK_OFFSET(0xE9274A0)
#define DAIHKPJPMCE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xE926FE0)
#define DAIHKPJPMCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE927450)
#define DAIHKPJPMCE_JBMFKPHFJAG_OFFSET UNITYSDK_OFFSET(0xE927320)
#define DAIHKPJPMCE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE926F70)
#define DAIHKPJPMCE_MMJDLOAHDCF_OFFSET UNITYSDK_OFFSET(0xE9272A0)
#define DAIHKPJPMCE_PHGAFDNJAEN_OFFSET UNITYSDK_OFFSET(0xE927100)

inline static constexpr unsigned int DAIHKPJPMCE_TypeDefinitionIndex = 71488;

	class DAIHKPJPMCE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CJJCNKJHNEA*>* GHOEBLGCGNM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIHKPJPMCE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIHKPJPMCE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DAIHKPJPMCE_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::CJJCNKJHNEA* PHGAFDNJAEN(::System::Collections::Generic::List_1<::CJOJDEPDCBK*>* a1, ::System::Single a2)
		{
			return ((::CJJCNKJHNEA*(*)(::PVOID, ::System::Collections::Generic::List_1<::CJOJDEPDCBK*>*, ::System::Single))((::PBYTE)hIl2Cpp + DAIHKPJPMCE_PHGAFDNJAEN_OFFSET))(this, a1, a2);
		}

		::System::Void MMJDLOAHDCF(::CJJCNKJHNEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJJCNKJHNEA*))((::PBYTE)hIl2Cpp + DAIHKPJPMCE_MMJDLOAHDCF_OFFSET))(this, a1);
		}

		::System::Void JBMFKPHFJAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIHKPJPMCE_JBMFKPHFJAG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIHKPJPMCE_DISPOSE_OFFSET))(this);
		}

	};

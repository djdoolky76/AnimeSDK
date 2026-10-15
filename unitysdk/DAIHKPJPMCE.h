#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJCNKJHNEA;
class CJOJDEPDCBK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DAIHKPJPMCE_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBA0D0)
#define DAIHKPJPMCE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xDFB9C30)
#define DAIHKPJPMCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFBA080)
#define DAIHKPJPMCE_JBMFKPHFJAG_OFFSET UNITYSDK_OFFSET(0xDFB9F50)
#define DAIHKPJPMCE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDFB9BC0)
#define DAIHKPJPMCE_MMJDLOAHDCF_OFFSET UNITYSDK_OFFSET(0xDFB9ED0)
#define DAIHKPJPMCE_PHGAFDNJAEN_OFFSET UNITYSDK_OFFSET(0xDFB9D50)

inline static constexpr unsigned int DAIHKPJPMCE_TypeDefinitionIndex = 69531;

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

		::CJJCNKJHNEA* PHGAFDNJAEN(::System::Collections::Generic::List_1<::CJOJDEPDCBK*>* a1)
		{
			return ((::CJJCNKJHNEA*(*)(::PVOID, ::System::Collections::Generic::List_1<::CJOJDEPDCBK*>*))((::PBYTE)hIl2Cpp + DAIHKPJPMCE_PHGAFDNJAEN_OFFSET))(this, a1);
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

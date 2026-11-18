#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNGGINHPOPH.h"
#include "unitysdk/MEPIDLENHEF.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPCJLCHFDKH_BDLPBPLAJPC_OFFSET UNITYSDK_OFFSET(0x17C14600)
#define HPCJLCHFDKH_PGDNAJEGICL_OFFSET UNITYSDK_OFFSET(0x17C14750)
#define HPCJLCHFDKH__CTOR_OFFSET UNITYSDK_OFFSET(0x17C145F0)

inline static constexpr unsigned int HPCJLCHFDKH_TypeDefinitionIndex = 12244;

class HPCJLCHFDKH : public ::KNGGINHPOPH
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IJCIJKMNIPE; // 0xD0
	::System::Collections::Generic::List_1<::System::Int32>* JODCDCBDCND; // 0xD8

	::System::Void _ctor(::MEPIDLENHEF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MEPIDLENHEF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HPCJLCHFDKH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BDLPBPLAJPC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCJLCHFDKH_BDLPBPLAJPC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PGDNAJEGICL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCJLCHFDKH_PGDNAJEGICL_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/SQLiteOpenFlags.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBCAFPHKEGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123FFF20)
#define DBCAFPHKEGJ_DKAPLJNCDBN_OFFSET UNITYSDK_OFFSET(0x12400080)
#define DBCAFPHKEGJ_FPCNBFAFEEE_OFFSET UNITYSDK_OFFSET(0x123FFF80)
#define DBCAFPHKEGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x123FFD50)

inline static constexpr unsigned int DBCAFPHKEGJ_TypeDefinitionIndex = 80095;

class DBCAFPHKEGJ : public ::System::Object
{
public:
	::SQLite::SQLiteConnection* LONEKHMCIBN; // 0x10

	::System::Void _ctor(::System::String* FLLIHKMKOEL, ::SQLite::SQLiteOpenFlags HHODJDKEDMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::SQLite::SQLiteOpenFlags))((::PBYTE)hIl2Cpp + DBCAFPHKEGJ__CTOR_OFFSET))(this, FLLIHKMKOEL, HHODJDKEDMD);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCAFPHKEGJ_DISPOSE_OFFSET))(this);
	}

	::System::Void FPCNBFAFEEE(::System::Collections::Generic::IEnumerable_1<::System::Object*>* MAAJIABHNMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DBCAFPHKEGJ_FPCNBFAFEEE_OFFSET))(this, MAAJIABHNMI);
	}

	::System::Collections::Generic::List_1<::System::Object*>* DKAPLJNCDBN(::System::UInt64 BDCIJGBPOCH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DBCAFPHKEGJ_DKAPLJNCDBN_OFFSET))(this, BDCIJGBPOCH);
	}
};

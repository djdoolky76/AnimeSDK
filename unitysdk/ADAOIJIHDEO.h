#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGDIHOOBABO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADAOIJIHDEO_BLBBDAAPMGJ_OFFSET UNITYSDK_OFFSET(0x16FD5F80)
#define ADAOIJIHDEO_IAGGMOIKDKC_OFFSET UNITYSDK_OFFSET(0x16FD6130)
#define ADAOIJIHDEO_JIPLJNOAMHK_OFFSET UNITYSDK_OFFSET(0x16FD6530)
#define ADAOIJIHDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD5EF0)

inline static constexpr unsigned int ADAOIJIHDEO_TypeDefinitionIndex = 69141;

class ADAOIJIHDEO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PGDIHOOBABO*>* APFEAEOANCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAOIJIHDEO__CTOR_OFFSET))(this);
	}

	::System::Void BLBBDAAPMGJ(::System::Int32 OKGEKIAGBJA, ::System::UInt32 NJNOHDNDNAF, ::System::Int32 GJNCNLKDLCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + ADAOIJIHDEO_BLBBDAAPMGJ_OFFSET))(this, OKGEKIAGBJA, NJNOHDNDNAF, GJNCNLKDLCP);
	}

	::System::Int32 IAGGMOIKDKC(::System::Int32 OKGEKIAGBJA, ::System::UInt32 NJNOHDNDNAF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ADAOIJIHDEO_IAGGMOIKDKC_OFFSET))(this, OKGEKIAGBJA, NJNOHDNDNAF);
	}

	::System::Void JIPLJNOAMHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAOIJIHDEO_JIPLJNOAMHK_OFFSET))(this);
	}
};

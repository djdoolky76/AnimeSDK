#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KHABBCFGAMO.h"
#include "unitysdk/System/Object.h"

class PPKAGOMPKKM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KEFPFIFLBJE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB01260)
#define KEFPFIFLBJE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB01030)
#define KEFPFIFLBJE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB011A0)
#define KEFPFIFLBJE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB01340)
#define KEFPFIFLBJE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB01040)
#define KEFPFIFLBJE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BB016A0)
#define KEFPFIFLBJE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB014C0)
#define KEFPFIFLBJE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB00BC0)
#define KEFPFIFLBJE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BB018D0)
#define KEFPFIFLBJE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB00B90)
#define KEFPFIFLBJE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB00E80)
#define KEFPFIFLBJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB01470)

inline static constexpr unsigned int KEFPFIFLBJE_TypeDefinitionIndex = 10776;

class KEFPFIFLBJE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::KHABBCFGAMO DHDJDGFNBOA; // 0x20
	::Il2CppArray<::PPKAGOMPKKM*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPFIFLBJE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_CHLEALKAOJO_OFFSET))(this);
	}

	::PPKAGOMPKKM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PPKAGOMPKKM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPFIFLBJE_NAMKJOJBAOA_OFFSET))(this);
	}
};

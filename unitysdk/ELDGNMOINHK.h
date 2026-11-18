#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFOEALFNHIC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DCODCJHBNDM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ELDGNMOINHK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9BB550)
#define ELDGNMOINHK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9BB310)
#define ELDGNMOINHK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9BB490)
#define ELDGNMOINHK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9BB630)
#define ELDGNMOINHK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9BB320)
#define ELDGNMOINHK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9BB9A0)
#define ELDGNMOINHK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9BB7D0)
#define ELDGNMOINHK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9BAF60)
#define ELDGNMOINHK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9BB7B0)
#define ELDGNMOINHK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9BAF40)
#define ELDGNMOINHK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9BB220)
#define ELDGNMOINHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9BB760)

inline static constexpr unsigned int ELDGNMOINHK_TypeDefinitionIndex = 10134;

class ELDGNMOINHK : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::DCODCJHBNDM*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::DFOEALFNHIC DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDGNMOINHK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDGNMOINHK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDGNMOINHK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELDGNMOINHK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ELDGNMOINHK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDGNMOINHK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDGNMOINHK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDGNMOINHK_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDGNMOINHK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDGNMOINHK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ELDGNMOINHK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DCODCJHBNDM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DCODCJHBNDM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELDGNMOINHK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};

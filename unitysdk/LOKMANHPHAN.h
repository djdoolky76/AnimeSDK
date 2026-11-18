#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECJFIJFPMM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NHPBOEGJOMH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LOKMANHPHAN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7F5620)
#define LOKMANHPHAN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7F53E0)
#define LOKMANHPHAN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7F5560)
#define LOKMANHPHAN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7F5700)
#define LOKMANHPHAN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7F53F0)
#define LOKMANHPHAN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7F5880)
#define LOKMANHPHAN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7F5AD0)
#define LOKMANHPHAN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7F5030)
#define LOKMANHPHAN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7F5AB0)
#define LOKMANHPHAN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7F5010)
#define LOKMANHPHAN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7F52F0)
#define LOKMANHPHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F5830)

inline static constexpr unsigned int LOKMANHPHAN_TypeDefinitionIndex = 10491;

class LOKMANHPHAN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::NHPBOEGJOMH*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::IECJFIJFPMM DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMANHPHAN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMANHPHAN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMANHPHAN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LOKMANHPHAN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LOKMANHPHAN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMANHPHAN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMANHPHAN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMANHPHAN_FINALIZE_OFFSET))(this);
	}

	::NHPBOEGJOMH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NHPBOEGJOMH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOKMANHPHAN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LOKMANHPHAN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMANHPHAN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMANHPHAN_CHLEALKAOJO_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCHHFKJPLFD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LOIHDEPANLG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DGCHDEFOCLL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19ADA690)
#define DGCHDEFOCLL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19ADA450)
#define DGCHDEFOCLL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19ADA5D0)
#define DGCHDEFOCLL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19ADA770)
#define DGCHDEFOCLL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19ADA460)
#define DGCHDEFOCLL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19ADA910)
#define DGCHDEFOCLL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19ADAB40)
#define DGCHDEFOCLL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19ADA0A0)
#define DGCHDEFOCLL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19ADA8F0)
#define DGCHDEFOCLL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19ADA080)
#define DGCHDEFOCLL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19ADA360)
#define DGCHDEFOCLL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADA8A0)

inline static constexpr unsigned int DGCHDEFOCLL_TypeDefinitionIndex = 17676;

class DGCHDEFOCLL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::Il2CppArray<::LOIHDEPANLG*>* OJMBOGGMIKO; // 0x28
	::DCHHFKJPLFD DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCHDEFOCLL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_CHLEALKAOJO_OFFSET))(this);
	}

	::LOIHDEPANLG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LOIHDEPANLG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DGCHDEFOCLL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OBCLGOLGNEL.h"
#include "unitysdk/System/Object.h"

class KJPAPPMKINK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PEIDDEGGIDN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C0AB9D0)
#define PEIDDEGGIDN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C0AB790)
#define PEIDDEGGIDN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0AB910)
#define PEIDDEGGIDN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0ABAB0)
#define PEIDDEGGIDN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C0AB7A0)
#define PEIDDEGGIDN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C0ABC30)
#define PEIDDEGGIDN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C0ABE80)
#define PEIDDEGGIDN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0AB3E0)
#define PEIDDEGGIDN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C0ABE60)
#define PEIDDEGGIDN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0AB3C0)
#define PEIDDEGGIDN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C0AB6A0)
#define PEIDDEGGIDN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0ABBE0)

inline static constexpr unsigned int PEIDDEGGIDN_TypeDefinitionIndex = 15297;

class PEIDDEGGIDN : public ::System::Object
{
public:
	::Il2CppArray<::KJPAPPMKINK*>* OJMBOGGMIKO; // 0x10
	::OBCLGOLGNEL DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIDDEGGIDN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_FINALIZE_OFFSET))(this);
	}

	::KJPAPPMKINK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KJPAPPMKINK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIDDEGGIDN_CHLEALKAOJO_OFFSET))(this);
	}
};

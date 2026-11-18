#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBJEDAAMBCB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OELOLBDNHDE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IEEOHFGLKFO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17C199B0)
#define IEEOHFGLKFO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17C19770)
#define IEEOHFGLKFO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17C198F0)
#define IEEOHFGLKFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17C19A90)
#define IEEOHFGLKFO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17C19780)
#define IEEOHFGLKFO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17C19C30)
#define IEEOHFGLKFO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17C19E60)
#define IEEOHFGLKFO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17C193C0)
#define IEEOHFGLKFO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17C19C10)
#define IEEOHFGLKFO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17C193A0)
#define IEEOHFGLKFO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17C19680)
#define IEEOHFGLKFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17C19BC0)

inline static constexpr unsigned int IEEOHFGLKFO_TypeDefinitionIndex = 12016;

class IEEOHFGLKFO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::IBJEDAAMBCB DHDJDGFNBOA; // 0x28
	::Il2CppArray<::OELOLBDNHDE*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEOHFGLKFO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_NAMKJOJBAOA_OFFSET))(this);
	}

	::OELOLBDNHDE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OELOLBDNHDE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IEEOHFGLKFO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};

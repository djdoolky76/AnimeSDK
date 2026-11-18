#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCHOGNDJOFH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CFEIBPCPFAP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HKLJBLDNADD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x160F8920)
#define HKLJBLDNADD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x160F86A0)
#define HKLJBLDNADD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x160F86B0)
#define HKLJBLDNADD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x160F8770)
#define HKLJBLDNADD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x160F88A0)
#define HKLJBLDNADD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x160F8D20)
#define HKLJBLDNADD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x160F8A50)
#define HKLJBLDNADD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x160F82F0)
#define HKLJBLDNADD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x160F8D00)
#define HKLJBLDNADD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x160F82D0)
#define HKLJBLDNADD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x160F85B0)
#define HKLJBLDNADD__CTOR_OFFSET UNITYSDK_OFFSET(0x160F8A00)

inline static constexpr unsigned int HKLJBLDNADD_TypeDefinitionIndex = 14132;

class HKLJBLDNADD : public ::System::Object
{
public:
	::Il2CppArray<::CFEIBPCPFAP*>* OJMBOGGMIKO; // 0x10
	::GCHOGNDJOFH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLJBLDNADD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLJBLDNADD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLJBLDNADD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLJBLDNADD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLJBLDNADD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HKLJBLDNADD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HKLJBLDNADD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLJBLDNADD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HKLJBLDNADD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLJBLDNADD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLJBLDNADD_CHLEALKAOJO_OFFSET))(this);
	}

	::CFEIBPCPFAP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CFEIBPCPFAP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKLJBLDNADD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};

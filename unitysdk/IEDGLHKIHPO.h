#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHPFBMCEENI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BIKCGFDCMLC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IEDGLHKIHPO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BB7210)
#define IEDGLHKIHPO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BB6FD0)
#define IEDGLHKIHPO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BB7150)
#define IEDGLHKIHPO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BB72F0)
#define IEDGLHKIHPO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BB6FE0)
#define IEDGLHKIHPO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BB7640)
#define IEDGLHKIHPO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BB7470)
#define IEDGLHKIHPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BB6C20)
#define IEDGLHKIHPO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BB7870)
#define IEDGLHKIHPO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BB6C00)
#define IEDGLHKIHPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BB6EE0)
#define IEDGLHKIHPO__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB7420)

inline static constexpr unsigned int IEDGLHKIHPO_TypeDefinitionIndex = 15129;

class IEDGLHKIHPO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::DHPFBMCEENI DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::BIKCGFDCMLC*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDGLHKIHPO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BIKCGFDCMLC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BIKCGFDCMLC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDGLHKIHPO_CHLEALKAOJO_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCACHLPPLNF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IEDOEBNKHBF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FJIKDEMAJNL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5A6C00)
#define FJIKDEMAJNL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5A6980)
#define FJIKDEMAJNL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5A6990)
#define FJIKDEMAJNL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5A6A50)
#define FJIKDEMAJNL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5A6B80)
#define FJIKDEMAJNL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A5A6FE0)
#define FJIKDEMAJNL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5A6D30)
#define FJIKDEMAJNL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5A65E0)
#define FJIKDEMAJNL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5A7210)
#define FJIKDEMAJNL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5A65C0)
#define FJIKDEMAJNL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5A68A0)
#define FJIKDEMAJNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A6CE0)

inline static constexpr unsigned int FJIKDEMAJNL_TypeDefinitionIndex = 10516;

class FJIKDEMAJNL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::IEDOEBNKHBF*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::FCACHLPPLNF DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKDEMAJNL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::IEDOEBNKHBF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IEDOEBNKHBF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKDEMAJNL_CHLEALKAOJO_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PEMGFPGENCD.h"
#include "unitysdk/System/Object.h"

class JGNKIMGPHGC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LLJFFCNBJJH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA8BD20)
#define LLJFFCNBJJH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA8BAE0)
#define LLJFFCNBJJH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA8BC60)
#define LLJFFCNBJJH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA8BE00)
#define LLJFFCNBJJH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA8BAF0)
#define LLJFFCNBJJH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BA8BF80)
#define LLJFFCNBJJH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA8C1D0)
#define LLJFFCNBJJH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA8B730)
#define LLJFFCNBJJH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BA8C1B0)
#define LLJFFCNBJJH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA8B710)
#define LLJFFCNBJJH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA8B9F0)
#define LLJFFCNBJJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8BF30)

inline static constexpr unsigned int LLJFFCNBJJH_TypeDefinitionIndex = 10799;

class LLJFFCNBJJH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::JGNKIMGPHGC*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::PEMGFPGENCD DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJFFCNBJJH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_FINALIZE_OFFSET))(this);
	}

	::JGNKIMGPHGC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JGNKIMGPHGC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLJFFCNBJJH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};

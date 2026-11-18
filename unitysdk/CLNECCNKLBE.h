#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKCDDGBFJJC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BABMKAFEADA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLNECCNKLBE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BF8290)
#define CLNECCNKLBE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BF7FA0)
#define CLNECCNKLBE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BF7FB0)
#define CLNECCNKLBE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BF8070)
#define CLNECCNKLBE_FPLALOBCAAH_OFFSET UNITYSDK_OFFSET(0x19BF7930)
#define CLNECCNKLBE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BF8210)
#define CLNECCNKLBE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19BF8450)
#define CLNECCNKLBE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19BF86A0)
#define CLNECCNKLBE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BF74B0)
#define CLNECCNKLBE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19BF8680)
#define CLNECCNKLBE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BF7490)
#define CLNECCNKLBE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BF77E0)
#define CLNECCNKLBE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF8370)

inline static constexpr unsigned int CLNECCNKLBE_TypeDefinitionIndex = 12357;

class CLNECCNKLBE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::CKCDDGBFJJC DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ABLLIECHNLC; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::Il2CppArray<::BABMKAFEADA*>* OJMBOGGMIKO; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x50
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLNECCNKLBE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CLNECCNKLBE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void FPLALOBCAAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE_FPLALOBCAAH_OFFSET))(this);
	}

	::BABMKAFEADA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BABMKAFEADA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLNECCNKLBE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLNECCNKLBE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNECCNKLBE_NAMKJOJBAOA_OFFSET))(this);
	}
};

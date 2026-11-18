#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MNPLAKJOCHF.h"
#include "unitysdk/System/Object.h"

class JCAOMCELDDF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJLLBAABOOE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B0FCC00)
#define EJLLBAABOOE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B0FC950)
#define EJLLBAABOOE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B0FC960)
#define EJLLBAABOOE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B0FCA20)
#define EJLLBAABOOE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B0FCB80)
#define EJLLBAABOOE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B0FCE00)
#define EJLLBAABOOE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B0FD090)
#define EJLLBAABOOE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B0FC5B0)
#define EJLLBAABOOE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B0FCDE0)
#define EJLLBAABOOE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B0FC590)
#define EJLLBAABOOE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B0FC840)
#define EJLLBAABOOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FCCE0)

inline static constexpr unsigned int EJLLBAABOOE_TypeDefinitionIndex = 10073;

class EJLLBAABOOE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::JCAOMCELDDF*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* IOOEMEMBOHD; // 0x20
	::MNPLAKJOCHF DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x50
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLLBAABOOE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLLBAABOOE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLLBAABOOE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLLBAABOOE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLLBAABOOE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJLLBAABOOE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EJLLBAABOOE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLLBAABOOE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLLBAABOOE_NAMKJOJBAOA_OFFSET))(this);
	}

	::JCAOMCELDDF* IFDPKDOFOJD(::System::String* MGMDLMBEDJF)
	{
		return ((::JCAOMCELDDF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EJLLBAABOOE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EJLLBAABOOE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLLBAABOOE_CHLEALKAOJO_OFFSET))(this);
	}
};

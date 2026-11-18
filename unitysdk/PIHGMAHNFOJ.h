#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJGKHJPAEBC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ABNKJLHDDHJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PIHGMAHNFOJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF90250)
#define PIHGMAHNFOJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF90020)
#define PIHGMAHNFOJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF90190)
#define PIHGMAHNFOJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF90330)
#define PIHGMAHNFOJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF90030)
#define PIHGMAHNFOJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF906A0)
#define PIHGMAHNFOJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF904D0)
#define PIHGMAHNFOJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF8FC80)
#define PIHGMAHNFOJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF904B0)
#define PIHGMAHNFOJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF8FC60)
#define PIHGMAHNFOJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF8FF40)
#define PIHGMAHNFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF90460)

inline static constexpr unsigned int PIHGMAHNFOJ_TypeDefinitionIndex = 12847;

class PIHGMAHNFOJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::ABNKJLHDDHJ*>* OJMBOGGMIKO; // 0x28
	::HJGKHJPAEBC DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ABNKJLHDDHJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ABNKJLHDDHJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHGMAHNFOJ_CHLEALKAOJO_OFFSET))(this);
	}
};

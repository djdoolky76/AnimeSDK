#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPBBNJCOFMI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class POHICPMOGCJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GGECIOOGDDB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1932EB40)
#define GGECIOOGDDB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1932E910)
#define GGECIOOGDDB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1932EA80)
#define GGECIOOGDDB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1932EC20)
#define GGECIOOGDDB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1932E920)
#define GGECIOOGDDB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1932EF90)
#define GGECIOOGDDB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1932EDA0)
#define GGECIOOGDDB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1932E570)
#define GGECIOOGDDB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1932EF70)
#define GGECIOOGDDB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1932E550)
#define GGECIOOGDDB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1932E830)
#define GGECIOOGDDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1932ED50)

inline static constexpr unsigned int GGECIOOGDDB_TypeDefinitionIndex = 14447;

class GGECIOOGDDB : public ::System::Object
{
public:
	::IPBBNJCOFMI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::POHICPMOGCJ*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGECIOOGDDB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGECIOOGDDB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGECIOOGDDB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GGECIOOGDDB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GGECIOOGDDB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGECIOOGDDB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGECIOOGDDB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGECIOOGDDB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GGECIOOGDDB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGECIOOGDDB_NAMKJOJBAOA_OFFSET))(this);
	}

	::POHICPMOGCJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::POHICPMOGCJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGECIOOGDDB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGECIOOGDDB_CHLEALKAOJO_OFFSET))(this);
	}
};

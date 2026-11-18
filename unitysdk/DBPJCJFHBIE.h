#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAFAHIKEAFF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LAOPMGJPKDC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DBPJCJFHBIE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AD4D80)
#define DBPJCJFHBIE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AD4B50)
#define DBPJCJFHBIE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AD4CC0)
#define DBPJCJFHBIE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AD4E60)
#define DBPJCJFHBIE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AD4B60)
#define DBPJCJFHBIE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AD5000)
#define DBPJCJFHBIE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AD5230)
#define DBPJCJFHBIE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AD47B0)
#define DBPJCJFHBIE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AD4FE0)
#define DBPJCJFHBIE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AD4790)
#define DBPJCJFHBIE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AD4A70)
#define DBPJCJFHBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD4F90)

inline static constexpr unsigned int DBPJCJFHBIE_TypeDefinitionIndex = 10560;

class DBPJCJFHBIE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::LAOPMGJPKDC*>* OJMBOGGMIKO; // 0x28
	::IAFAHIKEAFF DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJCJFHBIE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_CHLEALKAOJO_OFFSET))(this);
	}

	::LAOPMGJPKDC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LAOPMGJPKDC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DBPJCJFHBIE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};

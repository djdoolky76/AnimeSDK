#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNKDBFHDBCB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GICBPENJOFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BMDBAPJBFLN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15782AC0)
#define BMDBAPJBFLN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15782880)
#define BMDBAPJBFLN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15782A00)
#define BMDBAPJBFLN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15782BA0)
#define BMDBAPJBFLN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15782890)
#define BMDBAPJBFLN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15782D20)
#define BMDBAPJBFLN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15782F70)
#define BMDBAPJBFLN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x157824D0)
#define BMDBAPJBFLN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15782F50)
#define BMDBAPJBFLN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x157824B0)
#define BMDBAPJBFLN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15782790)
#define BMDBAPJBFLN__CTOR_OFFSET UNITYSDK_OFFSET(0x15782CD0)

inline static constexpr unsigned int BMDBAPJBFLN_TypeDefinitionIndex = 16005;

class BMDBAPJBFLN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::CNKDBFHDBCB DHDJDGFNBOA; // 0x20
	::Il2CppArray<::GICBPENJOFF*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDBAPJBFLN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_FINALIZE_OFFSET))(this);
	}

	::GICBPENJOFF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GICBPENJOFF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDBAPJBFLN_CHLEALKAOJO_OFFSET))(this);
	}
};
